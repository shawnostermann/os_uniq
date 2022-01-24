/*************************************************************
 *
 * Simple I/O example using system calls
 *
 ************************************************************/

/* include all of the header files that the manual pages say I need */
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <fcntl.h>  // for OPEN arguments
#include <unistd.h>

int main(
    int argc,
    char *argv[])
{
    int fd;

    fd = open(argv[1],O_RDONLY);
    if (fd == -1) {
        perror(argv[1]);
        exit(1);
    }

    while (1) {
        char ch;
        int ret;
        if ((ret=read(fd,&ch,1)) != 1) {
            if (ret == 0) {
                // EOF
                break;
            } else {
                perror("read");
                exit(2);
            }
        }
        write(1,&ch,1);  // need error checking!!!
    }
    exit(0);
}
