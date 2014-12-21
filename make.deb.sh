#!/bin/sh
dpkg-buildpackage -B -us -uc --changes-option="-u."
