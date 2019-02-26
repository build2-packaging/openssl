/* file      : libcrypto/downstream/openssl/opensslconf.h -*- C -*-
 * copyright : Copyright (c) 2018-2019 Code Synthesis Ltd
 * license   : OpenSSL and SSLeay Licenses; see accompanying LICENSE file
 */

#ifndef LIBCRYPTO_DOWNSTREAM_OPENSSL_OPENSSLCONF_H
#define LIBCRYPTO_DOWNSTREAM_OPENSSL_OPENSSLCONF_H

/*
 * Include upstream's auto-generated platform-specific opensslconf.h.
 */
#include <openssl/opensslconf/platform.h>

/*
 * Define OPENSSL_PIC and {L|B}_ENDIAN macros if we are building libcrypto
 * (see ../../buildfile for details).
 */
#ifdef LIBCRYPTO_BUILD
#  define OPENSSL_PIC

/*
 * Endianess.
 */
#  ifdef __FreeBSD__
#    include <sys/endian.h> /* BYTE_ORDER */
#  else
#    if defined(_WIN32)
#      ifndef BYTE_ORDER
#        define BYTE_ORDER LITTLE_ENDIAN
#      endif
#    else
#      include <sys/param.h> /* BYTE_ORDER/__BYTE_ORDER */
#      ifndef BYTE_ORDER
#        ifdef __BYTE_ORDER
#          define BYTE_ORDER __BYTE_ORDER
#        else
#          error no BYTE_ORDER/__BYTE_ORDER define
#        endif
#      endif
#    endif
#  endif

#  if BYTE_ORDER == BIG_ENDIAN
#    define B_ENDIAN
#  else
#    define L_ENDIAN
#  endif
#endif

#endif /* LIBCRYPTO_DOWNSTREAM_OPENSSL_OPENSSLCONF_H */
