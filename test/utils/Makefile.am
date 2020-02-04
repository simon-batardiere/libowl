#
# Copyright (C) 2020 Simon Batardiere - All rigths reserved.
#
# This file is part of the libowl package.
# This code is licensed under LGPL-v2.1.
# See LICENSE file, which is part of the libowl package, for more details.
#

AM_CPPFLAGS = -I${top_builddir}/inc
AM_CFLAGS = -Wall -Wextra -Wshadow -Wstrict-prototypes \
	-Wmissing-prototypes -Wno-unused-parameter -Werror

bin_PROGRAMS = libowl-test-utils

noinst_HEADERS =
libowl_test_utils_SOURCES = addr.c
libowl_test_utils_LDADD = $(top_builddir)/src/utils/libowl-utils.la

