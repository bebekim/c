    //
    //  main.c
    //  Basic C
    //
    //  Created by 김영하 on 11/11/13.
    //  Copyright (c) 2013 ABCoding. All rights reserved.
    //
    //  윤성우의 열혈 C 프로그래밍
    //  ch16: 2차원 배열의 활용
    //  ex02_transposematrix.c

#include <stdio.h>

void transpose_matrix (int *ptr_a, int *ptr_b);
void show_matrixB (int *pointer);

int main(int argc, const char * argv[])
{
    int matrixA [2][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8}
    };
    int matrixB [4][2] = {
        {0, 0},
        {0, 0},
        {0, 0},
        {0, 0}
    };
    int *ptr_a = &matrixA[0][0]; //&multable[0][9] = &multable[1][0] because 2 dimensional arrays are in 1 dimensional 'tape' in reality.
    int *ptr_b = &matrixB[0][0];
    transpose_matrix (ptr_a, ptr_b);
    show_matrixB(ptr_b);

    return 0;
}

void transpose_matrix (int *ptr_a, int* ptr_b)
{
    for (int j = 0; j < 2; j ++)
        {
        for (int i = 0; i < 4; i++) //work your way up
            {
            *(ptr_b + (2 * i) + 1 * j) = *(ptr_a+i + 4 * j);
            }
        }
}

void show_matrixB (int *pointer)
{

    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 2; i++)
            {
            printf("%d ", *(pointer+ j * 2 + i)); // &multable [1][2] = &multable [0][11] = pointer + 11
            }
        printf("\n");
    }
}