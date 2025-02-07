#!/usr/bin/env python3

"""
Toplevel include for all HHVM GDB Python bindings.

Due to some GDB Python API shenanigans, we have to munge the directory
containing these scripts into sys.path.  We only do this here, so attempting to
source the individual modules directly will fail.
"""

from os import path, sys

# GDB doesn't add the script's dir to sys.path when sourcing.
localdir = path.dirname(path.realpath(path.expanduser(__file__)))
if sys.path[0] != localdir:
    sys.path.insert(0, localdir)

import apc
import asio
import hhbc
import idx
import lookup
import nameof
import pretty
import repo
import sizeof

try:
    import stack
    import unwind
except:
    pass
import ringbuffer
import unit
import util
