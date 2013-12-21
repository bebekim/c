//
//  main.c
//  c
//
//  Created by 김영하 on 12/13/13.
//  Copyright (c) 2013 student. All rights reserved.
//
//  ch 20 도전! 프로그래밍3
//  ex 04
//  난수 생성기

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TRIAL 3

int verifyinput ();         //accept user choice
int genrand();     //generate computer choice
int uservscom(int  urps, int crps);   //compare the two
void report(int urps, int crps, int* result);      //report user's report
void record (int uwin, int cwin, int draw);

int main(int argc, const char * argv[])
{
    int urps, crps;
    int uwin = 0;   //win column for user
    int cwin = 0;   //win column for computer
    int draw = 0;   //draw column
    int result = 0;
    int *presult = &result;

    while (result != 2) //if user loses for the first time(result == 2) break out of the while loop
    {
        urps = verifyinput();
        crps = genrand();
        result = uservscom(urps, crps);        //compute result
        if (result == 1)    //tally up win total for the user
            uwin++;
        else if (result == 2)   //tally up win total for the computer
            cwin++;
        else
            draw++;
        report (urps, crps, presult);
    }
    record(uwin, cwin, draw);   //show final record
    
    return 0;
}

int verifyinput ()      //verify if user's input is valid
{
    int rps=3;    //number chosen outside normal range
    while (rps < 0 || rps > 2)
        {
            printf("0. Rock\n");
            printf("1. Paper\n");
            printf("2. Scissors\n");
            printf("-> ");
            scanf("%d", &rps);
        }
    return rps;
}

int genrand()  //generate random number (computer's choice)
{
    srand((int)time(NULL));
    return (rand() % 3);
}

int uservscom(int urps, int crps) //compare the result between the two
{
    return ((3 + urps - crps) % 3); // 0 rock, 1 paper, 2 scissors
                                    // X defeated by (X+1) % 3, X defeats (X+2) % 3, add 3 to avoid negative integer
                                    // return 1 if urps wins, 2 if crps wins, 0 if draw.
}

void report(int urps, int crps, int* result)   //report how the user had won / lost
{
    char *winner = NULL;

    if (*result == 1)
            winner = "User";        //if 1, user has won
    else if (*result ==2)
            winner = "Computer";    //if 2, computer has won
    else
            winner = "Neither";     //if 0, neither has won
    
        //display result
    printf("USER : %d vs COMP : %d\n", urps, crps);
    printf("%s has won\n",winner);
}

void record(int uwin, int cwin, int draw)
{
    printf("FINAL SCORE\n");
    printf("USER : %d\tCompter : %d\tDraw : %d\n", uwin, cwin, draw);
}
