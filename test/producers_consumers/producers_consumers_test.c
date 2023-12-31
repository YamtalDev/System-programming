/******************************************************************************

    Writer: Tal Aharon

    Reviewer: David.

    Date: 06.06.2023

******************************************************************************/
#include <assert.h>              /* assert       */
#include <stdio.h>               /* puts         */

#include "producers_consumers.h" /* Internal API */
/*****************************************************************************/
void MissionOneTest(void);
void MissionSixTest(void);
void MissionTwoTest(void);
void MissionFourTest(void);
void MissionFiveTest(void);
void MissionThreeTest(void);
/*****************************************************************************/
int main(void)
{
    MissionOneTest();
    MissionTwoTest();
    MissionThreeTest();
    MissionFourTest();
    MissionFiveTest();
    MissionSixTest();
    puts("Passed all tests.");
    return (PC_SUCCESS);
}
/*****************************************************************************/
void MissionOneTest(void)
{
    assert(PC_SUCCESS == MissionOne());
}
/*****************************************************************************/
void MissionTwoTest(void)
{
    assert(PC_SUCCESS == MissionTwo());
}
/*****************************************************************************/
void MissionThreeTest(void)
{
    assert(PC_SUCCESS == MissionThree());
}
/*****************************************************************************/
void MissionFourTest(void)
{
    assert(PC_SUCCESS == MissionFour());
}
/*****************************************************************************/
void MissionFiveTest(void)
{
    assert(PC_SUCCESS == MissionFive());
}
/*****************************************************************************/
void MissionSixTest(void)
{
    assert(PC_SUCCESS == MissionSix());
}
/*****************************************************************************/
