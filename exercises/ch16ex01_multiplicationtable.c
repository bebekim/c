    //
    //  main.c
    //  Basic C
    //
    //  Created by 김영하 on 11/11/13.
    //  Copyright (c) 2013 ABCoding. All rights reserved.
    //
    //  윤성우의 열혈 C 프로그래밍
    //  ch16: 2차원 배열의 활용
    //  ex01_multiplicaitontable.c은 구구단 보여주기

#include <stdio.h>
#define COL 9
#define ROW 3

void show_multable (int *pointer);

int main(int argc, const char * argv[])
{
    int multable [ROW][COL] = {
        {2, 4, 6, 8, 10, 12, 14, 16, 18},
        {3, 6, 9, 12, 15, 18, 21, 24, 27},
        {4, 8, 12, 16, 20, 24, 28, 32, 36}
    };
    int *ptr_multable = &multable[0][0]; //&multable[0][9] = &multable[1][0] because 2 dimensional arrays are in 1 dimensional 'tape' in reality.
    
    show_multable(ptr_multable);
    
    return 0;
}

void show_multable (int *pointer)
{

    for (int j = 0; j < ROW; j++)
    {
    for (int i = 0; i < COL; i++)
        {
        printf("%d ", *(pointer+ j * COL + i)); // &multable [1][2] = &multable [0][11] = pointer + 11
        }
        printf("\n");
    }
    
    
}