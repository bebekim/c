//
//  main.c
//  c
//
//  Created by 김영하 on 12/13/13.
//  Copyright (c) 2013 student. All rights reserved.
//
//  ch 20 도전! 프로그래밍3
//  도전 1 : 2차원 배열의 요소들을 90도씩 이동시켜 결과를 출력하는 프로그램

#include <stdio.h>
#define LEN 4

void showarr(int (*ptread)[LEN]);
void copyarr(int (*ptread)[LEN], int (*ptcopy)[LEN]);
void rotclockarr(int (*ptr)[LEN]);

int main(int argc, const char * argv[])
{
    
    int arr2d[LEN][LEN] = {{1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};  //why I wasted a good 3 hours at least
                            //I tried {(), (), ()} instead of {{}, {}, {}}. Pay attention to bracket
    
    int (*ptr1)[LEN] = arr2d; //a pointer to int type, which increases value by sizeof(int) x LEN
                              //show arr2d itself
    printf("The original: \n");
    showarr(ptr1);
    
        //rotate arr2d clockwise once
    rotclockarr(ptr1);
    showarr(ptr1);
    
        //rotate arr2d clockwise once more (twice in total)
    rotclockarr(ptr1);
    showarr(ptr1);
    
        //rotate arr2d clockwise once more (thrice in total)
    rotclockarr(ptr1);
    showarr(ptr1);
    
    return 0;
    
}

    //display array element one by one
void showarr(int (*ptread)[LEN])
{
    int i, j;
    for (i = 0; i < LEN; i++)
        {
        for (j = 0; j < LEN; j++)
            {
            printf("%2d ", ptread[i][j]);
            }
        printf("\n");
        }
    printf("\n");
}

void copyarr(int (*ptread)[LEN], int (*ptcopy)[LEN])
{
    int i, j;
    for (i = 0; i < LEN; i++)
        {
        for (j = 0; j < LEN; j++)
            {
            ptcopy[i][j]=ptread[i][j];
            }
        }
}

void rotclockarr(int (*ptr)[LEN])
{
    int i, j; //for loop counters
              //how do I create an exact replica?

    int copy2d[LEN][LEN]; //declare a 2d array to create an exact copy of original
    int (*copyptr)[LEN] = copy2d;
    copyarr(ptr, copyptr);
    
    for (j = 0; j < LEN; j++)
        {
        for (i = 0; i < LEN; i++)
            ptr [i][(LEN-1)-j] = copyptr[j][i];
        }
}