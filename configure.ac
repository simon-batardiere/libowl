#
# Copyright (C) 2020 Simon Batardiere - All rigths reserved.
#
# This file is part of the libowl package.
# This code is licensed under LGPL-v2.1.
# See LICENSE file, which is part of the libowl package, for more details.
#

# Initialization
AC_PREREQ([2.69])
AC_INIT([libowl], [0.1.0], [simon.batardiere@protonmail.com])

# Configuration
AC_CONFIG_SRCDIR([src/utils/addr.c])
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_MACRO_DIRS([m4])
AM_INIT_AUTOMAKE([foreign])

# Checks for programs.
AC_PROG_LIBTOOL
AC_PROG_INSTALL
AC_PROG_CC
AC_PROG_CPP

# Checks for libraries.

# Checks for header files.
AC_HEADER_STDC
AC_CHECK_HEADERS([stdint.h])
AC_CHECK_HEADERS([stddef.h])

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

# Package
pkgconfigdir=${libdir}/pkgconfig
AC_SUBST(pkgconfigdir)

# Output
AC_CONFIG_FILES([
	libowl.pc
	Makefile
	inc/Makefile
	src/Makefile
	src/utils/Makefile
	test/Makefile
	test/utils/Makefile
])
AC_OUTPUT

