#define _GNU_SOURCE
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <dlfcn.h>                               /* header required for dlsym() */
 
int gethostname(char *nom, size_t lg)
{
    fprintf(stderr,"HOOK[gethostname]: temporary overide hostname by localhost...\n");
    strncpy(nom,"localhost",lg);
    return 0;
}
