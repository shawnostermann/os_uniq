/*************************************************************
 *
 * uniq - Uniq
 *   simple text formatting using only system calls
 *
 * WHO ARE YOU AND WHEN DID YOU WRITE THIS???
 *
 ************************************************************/

/* include all of the header files that the manual pages say I need */
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>


/* global variables */
static int debug = 0;
char *progname;
int fd; /* file descriptor for the file to format */


/*************************************************************
 **
 ** SameLine: are two lines the same??
 **
 ** I strongly recommend that you make use of this routine
 **
 *************************************************************/
int
SameLine(
    unsigned pos1,
    unsigned pos2)
{
    return (0); // not finished
}

/*************************************************************
 **
 ** NextLineIx: what is the index of the beginning of the next line?
 **
 ** I strongly recommend that you make use of this routine
 **
 *************************************************************/
int
NextLineIx(
    unsigned pos)
{
    return (0);  // not finished
}

/*************************************************************
 **
 ** PrintLine: print the line starting at index pos
 **
 ** I strongly recommend that you make use of this routine
 **
 *************************************************************/
void
PrintLine(unsigned pos)
{
    return;  // not finished
}

/*************************************************************
 **
 ** ReadChar: read the char at position pos
 **    returns EOF on end of file
 **
 ** I strongly recommend that you make use of this routine
 **
 *************************************************************/
int
ReadChar(
    unsigned pos)
{
    return(0);   // not finished
}


/*************************************************************
 **
 ** Main program, usage "uniq file"
 **
 *************************************************************/
int main(
    int argc,
    char *argv[])
{
    int i;                 /* arg counter */
    progname = argv[0];

    for (i = 1; i < argc; ++i) { 
        if (strcmp(argv[i],"-d") == 0) {
                    ++debug;
        } else {
           // look for file names, other arguments, etc...
        }
    }
    if (debug) fprintf(stdout,"Debugging enabled\n");

    return(0); // everything worked 
}