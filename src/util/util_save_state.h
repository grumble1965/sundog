/*
 * Copyright (c) 2017 Wladimir J. van der Laan
 * Distributed under the MIT software license, see the accompanying
 * file COPYING or http://www.opensource.org/licenses/mit-license.php.
 */
#ifndef H_UTIL_SAVE_STATE
#define H_UTIL_SAVE_STATE

#include <unistd.h>
#include <string.h>

#define FD_WRITE(fd,x) (write((fd), &(x), sizeof(x)) < (ssize_t)sizeof(x))
#define FD_READ(fd,x) (read((fd), &(x), sizeof(x)) < (ssize_t)sizeof(x))

#endif
