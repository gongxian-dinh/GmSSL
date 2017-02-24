/* ====================================================================
 * Copyright (c) 2015 - 2016 The GmSSL Project.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * 3. All advertising materials mentioning features or use of this
 *    software must display the following acknowledgment:
 *    "This product includes software developed by the GmSSL Project.
 *    (http://gmssl.org/)"
 *
 * 4. The name "GmSSL Project" must not be used to endorse or promote
 *    products derived from this software without prior written
 *    permission. For written permission, please contact
 *    guanzhi1980@gmail.com.
 *
 * 5. Products derived from this software may not be called "GmSSL"
 *    nor may "GmSSL" appear in their names without prior written
 *    permission of the GmSSL Project.
 *
 * 6. Redistributions of any form whatsoever must retain the following
 *    acknowledgment:
 *    "This product includes software developed by the GmSSL Project
 *    (http://gmssl.org/)"
 *
 * THIS SOFTWARE IS PROVIDED BY THE GmSSL PROJECT ``AS IS'' AND ANY
 * EXPRESSED OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE GmSSL PROJECT OR
 * ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 * ====================================================================
 */

#ifndef HEADER_GMSAF_H
#define HEADER_GMSAF_H

#include <stdio.h>
#include <openssl/sgd.h>
#include <openssl/saf.h>

#ifdef __cplusplus
extern "C" {
#endif


int SAF_PrintNameInfo(FILE *fp, SGD_NAME_INFO *nameInfo);
const char *SAF_GetErrorString(int err);

/* BEGIN ERROR CODES */
/*
 * The following lines are auto generated by the script mkerr.pl. Any changes
 * made after this point may be overwritten when the script is next run.
 */

int ERR_load_SAF_strings(void);

/* Error codes for the SAF functions. */

/* Function codes. */
# define SAF_F_SAF_BASE64_CREATEBASE64OBJ                 100
# define SAF_F_SAF_BASE64_DECODE                          101
# define SAF_F_SAF_BASE64_DECODEFINAL                     102
# define SAF_F_SAF_BASE64_DECODEUPDATE                    103
# define SAF_F_SAF_BASE64_ENCODE                          104
# define SAF_F_SAF_BASE64_ENCODEFINAL                     105
# define SAF_F_SAF_BASE64_ENCODEUPDATE                    106
# define SAF_F_SAF_CHANGEPIN                              107
# define SAF_F_SAF_CREATESYMMKEYOBJ                       108
# define SAF_F_SAF_ECCPUBLICKEYENC                        109
# define SAF_F_SAF_ECCPUBLICKEYENCBYCERT                  110
# define SAF_F_SAF_ECCSIGN                                111
# define SAF_F_SAF_ECCVERIFYSIGN                          112
# define SAF_F_SAF_ECCVERIFYSIGNBYCERT                    113
# define SAF_F_SAF_GENECCKEYPAIR                          114
# define SAF_F_SAF_GENERATEKEYWITHEPK                     115
# define SAF_F_SAF_GENRANDOM                              116
# define SAF_F_SAF_GENRSAKEYPAIR                          117
# define SAF_F_SAF_GETECCPUBLICKEY                        118
# define SAF_F_SAF_GETRSAPUBLICKEY                        119
# define SAF_F_SAF_GETVERSION                             120
# define SAF_F_SAF_IMPORTENCEDKEY                         121
# define SAF_F_SAF_INITIALIZE                             122
# define SAF_F_SAF_LOGIN                                  123
# define SAF_F_SAF_LOGOUT                                 124
# define SAF_F_SAF_MACFINAL                               125
# define SAF_F_SAF_MACUPDATE                              126
# define SAF_F_SAF_PKCS7_ENCODEENVELOPEDDATA              127
# define SAF_F_SAF_RSASIGN                                128
# define SAF_F_SAF_RSAVERIFYSIGN                          129
# define SAF_F_SAF_SYMMDECRYPTFINAL                       133
# define SAF_F_SAF_SYMMDECRYPTUPDATE                      130
# define SAF_F_SAF_SYMMENCRYPTFINAL                       134
# define SAF_F_SAF_SYMMENCRYPTUPDATE                      131
# define SAF_F_SAF_VERIFYSIGNBYCERT                       132

/* Reason codes. */
# define SAF_R_BUFFER_TOO_SMALL                           100
# define SAF_R_CMAC_FAILURE                               101
# define SAF_R_DECRYPT_NOT_INITIALIZED                    118
# define SAF_R_ENCRYPT_KEY_FAILURE                        102
# define SAF_R_ENCRYPT_NOT_INITIALIED                     119
# define SAF_R_GEN_RANDOM                                 103
# define SAF_R_GEN_RANDOM_FAILURE                         104
# define SAF_R_INT_OVERFLOW                               105
# define SAF_R_INVALID_ALGOR                              106
# define SAF_R_INVALID_CERTIFICATE                        107
# define SAF_R_INVALID_CONTEXT                            108
# define SAF_R_INVALID_HANDLE                             109
# define SAF_R_INVALID_INPUT_LENGTH                       110
# define SAF_R_INVALID_KEY_HANDLE                         120
# define SAF_R_INVALID_KEY_LENGTH                         111
# define SAF_R_INVALID_KEY_USAGE                          112
# define SAF_R_INVALID_LENGTH                             113
# define SAF_R_MAC_FAILURE                                114
# define SAF_R_NOT_SUPPORTED                              115
# define SAF_R_OPERATION_NOT_INITIALIZED                  116
# define SAF_R_UNSUPPORTED_ALGOR                          117

# ifdef  __cplusplus
}
# endif
#endif
