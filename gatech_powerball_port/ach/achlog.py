#!/usr/bin/env python

## Copyright (c) 2010-2012, Georgia Tech Research Corporation
## All rights reserved.
##
## Author(s): Neil T. Dantam <ntd@gatech.edu>
## Georgia Tech Humanoid Robotics Lab
## Under Direction of Prof. Mike Stilman <mstilman@cc.gatech.edu>
##
## Redistribution and use in source and binary forms, with or without
## modification, are permitted provided that the following conditions
## are met:
##
##     * Redistributions of source code must retain the above
##       copyright notice, this list of conditions and the following
##       disclaimer.
##     * Redistributions in binary form must reproduce the above
##       copyright notice, this list of conditions and the following
##       disclaimer in the documentation and/or other materials
##       provided with the distribution.
##
## THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
## ''AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
## LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
## FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
## COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
## INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
## (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
## SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
## HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
## STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
## ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
## OF THE POSSIBILITY OF SUCH DAMAGE.

## FILE: achlog
## DESC: Logs ach frames to file
## AUTHOR: Neil Dantam


from optparse import OptionParser
from subprocess import  Popen
from time import  sleep, strftime
import signal
import os


def parse():
    usage = "usage: %prog [options] channel-1 ... channel-n"
    description = "Logs ach frames to files until given SIGTERM or SIGINT"
    p = OptionParser(usage=usage, description=description)
    p.add_option("-v", "--verbose",
                 action="count", dest="verbose" )
    p.add_option("-d", "--directory",
                 dest="directory")
    p.add_option("-f", "--frequency",
                 dest="frequency", type="float", default=0)
    p.add_option("-V", "--Version",
                 action="store_true", dest="version")
    (options, args) = p.parse_args()
    return (options, args)

def start_children( channels, verbose, frequency ):
    timestring = strftime("%Y%m%dT%H%M%S")
    def start_child(channel):
        filename = channel + "." + timestring + ".achlog"
        if (verbose):
            print "Logging `" + channel + "' to " + filename
        fd = open( filename, 'a' )
        child = Popen(["achpipe", "-s", channel, "-f", str(frequency)], stdout=fd)
        fd.close()
        return child

    return map( start_child, channels )

def stop_children( children, verbose ):
    # send sigterm
    if verbose:
        print "Sending SIGTERM..."
    map( lambda child: child.terminate(), children )

    # wait for exit
    if verbose:
        print "Waiting for exit..."
    map( lambda child: child.wait(), children )

# Fuck python and their brain-damaged closures
signal_count = [0]

def install_signals( verbose ):
    def handler( signum, frame ):
        if verbose :
            print "Received signal %d" % signum
        signal_count[0] += 1
    signal.signal( signal.SIGTERM, handler )
    signal.signal( signal.SIGINT, handler )

def wait_for_signal( verbose ):
    while( 0 == signal_count[0] ):
        signal.pause()
        if verbose :
            print "Woke up, signal_count: %d" % signal_count[0]

def main():
    ## Options
    (options, args) = parse()

    if options.version :
        print ("achlog 1.0.2~GIT\n"
               "\n"
               "Copyright (c) 2008-2012, Georgia Tech Research Corporation\n"
               "This is free software; see the source for copying conditions.  There is NO\n"
               "warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.\n"
               "\n"
               "Written by Neil T. Dantam")
        exit()

    if( not  args ):
        print "Must specify channel(s) to log"
        exit()

    if( options.directory ) :
        os.chdir( options.directory )

    ## Signal
    install_signals( options.verbose )

    ## Start
    children = start_children( args, options.verbose, options.frequency )

    ## Wait
    wait_for_signal( options.verbose )

    ## Stop
    stop_children( children, options.verbose )

    if options.verbose :
        print "done"

if __name__ == "__main__":
    main()
