//
//  main.c
//  Programming
//
//  Created by 김영하 on 12/7/13.
//  Copyright (c) 2013 Student. All rights reserved.
//  ch 20 도전! 프로그래밍3
//  도전 1 : 2차원 배열의 요소들을 90도씩 이동시켜 결과를 출력하는 프로그램

#include <stdio.h>
#define LEN 4

void showarr(int (*ptread)[LEN]);
void rotclockarr(int (*ptread)[LEN], int (*ptwrite)[LEN]);

int main(int argc, const char * argv[])
{
    
        //3시간 동안 뻘짓한 이유 : int arr[4][4] = {(1, 2, 3, 4}, ...} 2d array 에서는 {{}, {}, {}} NOT {(), (), ()}
        //pay attention to bracket
    int arr2d[LEN][LEN] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int copy2d[LEN][LEN] = {0};
    int (*ptr1)[LEN] = arr2d; //a pointer to int type, which increases value by sizeof(int) x LEN
    int (*ptr2)[LEN] = copy2d;
        //show arr2d itself
    showarr(ptr1);
        //rotate arr2d clockwise once
    rotclockarr(ptr1, ptr2);
    
        //reset pointers
    
        //rotate arr2d clockwise once more (twice in total)
    
        //rotate arr2d clockwise once more (thrice in total)
    
        //show and confirm arr2d clockwise rotation
    showarr(ptr2);

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

void rotclockarr(int (*ptread)[LEN], int (*ptwrite)[LEN])
{
    int i, j; //for loop counters
              //create a temporary
    
    for (j = 0; j < LEN; j++)
        {
            for (i = 0; i < LEN; i++)
                ptwrite [i][(LEN-1)-j] = ptread[j][i];
        }
}