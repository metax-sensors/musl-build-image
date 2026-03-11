#ifndef MUSL_COMPAT_H
#define MUSL_COMPAT_H

#if !defined(__GLIBC__)
#include <string.h>
static inline char *__musl_basename(char *path) {
        char *p = strrchr(path, '/');
        return p ? p + 1 : path;
}
#define basename(src) __musl_basename(src)
#endif

#endif
