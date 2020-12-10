/*-------------------------------------------------------------------------
 *
 * md5.h
 *	  Constants and common utilities related to MD5.
 *
 * These definitions are needed by both frontend and backend code to work
 * with MD5-encrypted passwords.
 *
 * Portions Copyright (c) 1996-2020, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * src/include/common/md5.h
 *
 *-------------------------------------------------------------------------
 */
#ifndef PG_MD5_H
#define PG_MD5_H

#define MD5_PASSWD_CHARSET	"0123456789abcdef"
#define MD5_PASSWD_LEN	35

/* Utilities common to all the MD5 implementations, as of md5_common.c */
extern bool pg_md5_hash(const void *buff, size_t len, char *hexsum);
extern bool pg_md5_binary(const void *buff, size_t len, void *outbuf);
extern bool pg_md5_encrypt(const char *passwd, const char *salt,
						   size_t salt_len, char *buf);

#endif							/* PG_MD5_H */
