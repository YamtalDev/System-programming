/******************************************************************************

    Writer: Tal Aharon

    Reviewer: Matias.

    Date: 05.06.2023

******************************************************************************/
#include <stdio.h>            /* printf, puts */
#include <assert.h>           /* assert       */
#include <stdlib.h>           /* exit         */

#include "sem_manipulation.h" /* Internal API */
/*****************************************************************************/
int main(int argc, char *argv[])
{
    FILE *fp = NULL;
    char *name = NULL;
    if(2 != argc)
    {
        puts("Usage: ./sem_manipulation <file name>");
        exit(FAILURE);
    }

    name = argv[1];
    fp = fopen(name, "w+");
    if(NULL == fp)
    {
        puts("Unable to create file.");
        return (FAILURE);
    }

    assert(SUCCESS == StartPlayingWithSemaphore(name));
    fclose(fp);
    return (SUCCESS);
}
/*****************************************************************************/
