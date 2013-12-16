//
//  main.c
//  c
//
//  Created by 김영하 on 12/13/13.
//  Copyright (c) 2013 student. All rights reserved.
//
//  ch 20 도전! 프로그래밍3
//  도전 2 : 달팽이 모양의 배열을 만들어서 이를 출력하는 프로그램 (
//  2d array 크기를 input 받으면 (예를 들어서 5)
//  1   2   3   4   5
//  16  17  18  19  6
//  15  24  25  20  7
//  14  23  22  21  8
//  13  12  11  10  9
//  write in (row -> column -> inverted row -> inverted column -> row -> column...)

    //현재 내가 어려움 겪고 있는 부분

#include <stdio.h>
#define N 4

    //void writearr (int *ptr[s], int* pci);
void writearr (int (*ptr)[N]);
void showarr(int (*ptr)[N]);
    //void copyarr(int (*ptread)[size], int (*ptcopy)[size]);
    //void rotclockarr(int (*ptr)[size]);

int main(int argc, const char * argv[])
{
    /*
    int s;
    int* const pci = &s; //constant pointer to an integer variable
    printf("Enter the size of the 2d array : ");
    scanf("%d", pci);
    */
    
    int array2d[N][N]; //I cannot initialize an array of variable size
    int (*ptr)[N] = array2d;    //declare a pointer to 2d array
    
        //write to a array2d of varied size
    writearr(ptr);
        //row
        //column
        //using a function
   
    showarr(ptr);
        //rotate array2d
        //anti clockwise
    
    return 0;
    
}


void writearr (int (*ptr)[N])
{
    int i, j;
    for (i = 0; i < N; i++)
        {
        ptr[0][i] = i;
        }
    
}
    //display array element one by one
void showarr(int (*ptr)[N])
{
    int i, j;
    for (i = 0; i < N; i++)
        {
        for (j = 0; j < N; j++)
            {
            printf("%2d ", ptr[i][j]);
            }
        printf("\n");
        }
    printf("\n");
}

/*
void copyarr(int (*ptread)[size], int (*ptcopy)[size])
{
    int i, j;
    for (i = 0; i < size; i++)
        {
        for (j = 0; j < size; j++)
            {
            ptcopy[i][j]=ptread[i][j];
            }
        }
}

void rotclockarr(int (*ptr)[size])
{
    int i, j; //for loop counters
              //how do I create an exact replica?

    int copy2d[size][size]; //declare a 2d array to create an exact copy of original
    int (*copyptr)[size] = copy2d;
    copyarr(ptr, copyptr);
    
    for (j = 0; j < size; j++)
        {
        for (i = 0; i < size; i++)
            ptr [i][(size-1)-j] = copyptr[j][i];
        }
}
*/