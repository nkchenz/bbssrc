/*
**
** OpenBSD replacement routines
**
** Damien Miller <djm@ibs.com.au>
** 
** Copyright 1999 Damien Miller
** Copyright 1999 Internet Business Solutions
**
** Permission is hereby granted, free of charge, to any person
** obtaining a copy of this software and associated documentation
** files (the "Software"), to deal in the Software without
** restriction, including without limitation the rights to use, copy,
** modify, merge, publish, distribute, sublicense, and/or sell copies
** of the Software, and to permit persons to whom the Software is
** furnished to do so, subject to the following conditions:
**
** The above copyright notice and this permission notice shall be
** included in all copies or substantial portions of the Software.
**
** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY
** KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
** WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE
** AND NONINFRINGEMENT.  IN NO EVENT SHALL DAMIEN MILLER OR INTERNET
** BUSINESS SOLUTIONS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
** LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
** ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE
** OR OTHER DEALINGS IN THE SOFTWARE.
**
** Except as contained in this notice, the name of Internet Business
** Solutions shall not be used in advertising or otherwise to promote
** the sale, use or other dealings in this Software without prior
** written authorization from Internet Business Solutions.
**
*/

#ifndef _BSD_MISC_H
#define _BSD_MISC_H

#include "config.h"

#ifndef HAVE_ARC4RANDOM
unsigned int arc4random(void);
void arc4random_stir(void);
#endif /* !HAVE_ARC4RANDOM */

#ifndef HAVE_SETENV
int setenv(const char *name, const char *value, int overwrite);
#endif /* !HAVE_SETENV */

#ifndef HAVE_SETLOGIN
int setlogin(const char *name);
#endif /* !HAVE_SETLOGIN */

#ifndef HAVE_INNETGR
int innetgr(const char *netgroup, const char *host, 
            const char *user, const char *domain);
#endif /* HAVE_INNETGR */

#if !defined(HAVE_SETEUID) && defined(HAVE_SETREUID)
int seteuid(uid_t euid);
#endif /* !defined(HAVE_SETEUID) && defined(HAVE_SETREUID) */

#endif /* _BSD_MISC_H */
