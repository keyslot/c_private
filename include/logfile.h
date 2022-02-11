#ifndef LOGFILE_H
#define LOGFILE_H

#include <errno.h>
#include <stdio.h>

#ifndef LOG_FILE_F
#define LOG_FILE_F stderr
#endif 

#ifndef LOG_VAR
#define LOG_VAR(VAR) #VAR
#endif

#define allocIn(PTR,SIZE)({ \
        *PTR = malloc(SIZE); \
        fprintf(LOG_FILE_F,"LOG: malloc(%s): %d \n",LOG_VAR(*PTR),errno); \
})\

#endif

