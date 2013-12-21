//
//  main.c
//  c
//
//  Created by 김영하 on 12/13/13.
//  Copyright (c) 2013 student. All rights reserved.
//
//  ch 20 도전! 프로그래밍3
//  ex 02 : 달팽이 모양의 배열을 만들어서 이를 출력하는 프로그램
//  2d array 크기를 input 받으면 (예를 들어서 5)
//  1   2   3   4   5
//  16  17  18  19  6
//  15  24  25  20  7
//  14  23  22  21  8
//  13  12  11  10  9
//  write in (row -> column -> inverted row -> inverted column -> row -> column...)

    //현재 내가 어려움 겪고 있는 부분
    //input에 따라 array size 정하기
    //효근이 말로는 dynamic memory allocation 말고는 별 방법 없다고 한다
    //일단은 array size = 5

#include <stdio.h>
#define N 5
#define D 4

void shellcheck(int (*ptr)[N], int *shell); //checks to see how many shells are to be omitted
void showarr(int (*ptr)[N]); //show all the cell values of array2d
void writehori (int (*ptr)[N], int *ctr, int *shell); //a function to write cell values of array2d
void copyarr(int (*ptread)[N], int (*ptcopy)[N]); //a function within
void anticlockarr(int (*ptr)[N]);

int main(int argc, const char * argv[])
{
    /*
    int s;
    int* const pci = &s; //constant pointer to an integer variable
    printf("Enter the size of the 2d array : ");
    scanf("%d", pci);
    */
        //I do not know how to allocate memory dynamically at this point. Will work on that later.
    int array2d[N][N] = {0}; //go with array2d of constant size
    int (*ptr)[N] = array2d;
        //keep track of how many outer arrays need to be omitted
    int s = 0;
    int* shell = &s;
        //counting how many cells (of array2d) are filled
    int counter = 0;
    int *ctr = &counter;

        //check to see if array2d should be 1) shell value unaltered or 2) shell value altered
    shellcheck(ptr, shell);
    writehori(ptr, ctr, shell);   //write to a array2d of varied size
    anticlockarr(ptr);
    showarr(ptr);
    
        //there should be a process to check if everything is complete
    return 0;
}

void shellcheck(int (*ptr)[N], int *shell)
{
    int s = *shell;
        if (ptr[s][s] != 0)
            (*shell)+=1;
        else
        ;
}


void copyarr(int (*ptread)[N], int (*ptcopy)[N])
{
    int i, j;
    for (i = 0; i < N; i++)
        {
        for (j = 0; j < N; j++)
            {
            ptcopy[i][j]=ptread[i][j];
            }
        }
}

void anticlockarr(int (*ptr)[N])
{
    int i, j;
    int n = N;
    
    int copy2d[N][N]; //declare a 2d array to create an exact copy of original
    int (*copyptr)[N] = copy2d;
    copyarr(ptr, copyptr); //make an exact relica of array2d

        //anticlockwise rotation of array2d
    for (j = 0; j < n; j++)
        {
        for (i = 0; i < n; i++)
            {
            ptr[(n-1)-i][j] = copyptr[j][i]; //anticlockwise rotation :
            //for clockwise rotation : ptr [i][(n-1)-j] = copyptr[j][i];
            }
        }
}

void writehori (int (*ptr)[N], int *ctr, int *shell)
{
    int s = *shell;
        //even works, odd doesn't when s == N-1-s
    if (s == (N-1)-s)
        ptr[s][s] = (*ctr)+1;
    else
        {
            for (int i = s; i < (N-1)-s; i++)
                {
                    ptr[s][i] = (*ctr) + 1;
                    *ctr += 1;
                }
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
