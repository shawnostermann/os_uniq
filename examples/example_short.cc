/*************************************************************
 *
 * Simple I/O example using system calls
 *
 ************************************************************/
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <fcntl.h>  // for OPEN arguments
#include <unistd.h>

int main(
    int argc,
    char *argv[])
{
    int fd, ch;

    // N.B. NONE of the required error checking included!!
    fd = open(argv[1],O_RDONLY);
    while (read(fd,&ch,1) == 1) 
        write(1,&ch,1); 
    exit(0);
}
