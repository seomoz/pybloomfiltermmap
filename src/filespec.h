#ifndef __FILESPEC_H
#define __FILESPEC_H 1

struct _FileSpec {
    const char * filename;
    int oflags;
    int perms;
};

typedef struct _FileSpec FileSpec;

#endif
