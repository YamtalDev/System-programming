/******************************************************************************

    Writer: Tal Aharon

    Reviewer: Yotam.

    Date: 03.06.2023

******************************************************************************/
#include <stdio.h>   /* printf, puts */
#include <assert.h> /* assert        */

#include "100kThreads.h"    /* Internal API */
/*****************************************************************************/
void ex1Test(void);
void ex2Test(void);
void ex3Test(void);
void ex4Test(void);
void ex5Test(void);
void ex6Test(void);
/*****************************************************************************/
int main(void)
{
    ex1Test();
    puts("\nex1Test(): passed.");
    ex2Test();
    puts("\nex2Test(): passed.");
    ex3Test();
    puts("\nex3Test(): passed.");
    ex4Test();
    puts("\nex4Test(): passed.");
    ex5Test(); 
    puts("\nex5Test(): passed.");
    ex6Test();
    puts("\nex6Test(): passed.");

    return (SUCCESS);
}
/*****************************************************************************/
void ex1Test(void)
{
    assert(SUCCESS == ex1());
}
/*****************************************************************************/
void ex2Test(void)
{
    assert(SUCCESS == ex2());
}
/*****************************************************************************/
void ex3Test(void)
{
    assert(SUCCESS == ex3());
}
/*****************************************************************************/
void ex4Test(void)
{
    assert(SUCCESS == ex4());
}
/*****************************************************************************/
void ex5Test(void)
{
    assert(SUCCESS == ex5());
}
/*****************************************************************************/
void ex6Test(void)
{
    assert(SUCCESS == ex6());
}
/*****************************************************************************/
