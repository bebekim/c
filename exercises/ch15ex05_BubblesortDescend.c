    //
    //  main.c
    //  Basic C
    //
    //  Created by 김영하 on 11/11/13.
    //  Copyright (c) 2013 ABCoding. All rights reserved.
    //
    //  윤성우의 열혈 C 프로그래밍
    //  ch15: 도전
    //  ex05_bubblesort.c

#include <stdio.h>
#define MAX 7

void BubbleSort_Desc (int *array_pointer, int array_length);

int main(int argc, const char * argv[])
{
    int arr[MAX]; //array of size len, which is 7 for now
    int arr_len = sizeof(arr)/sizeof(int);
    printf("length of array is : %d. \n", arr_len);
    int *arr_pointer = arr; //pointer to array (=array's first element)
                            //equivalent of int* arr_pointer = &arr[0];

        //accept values into array[MAX]
    for (int i = 0; i < arr_len; i ++)
        {
        printf("input %d: ", i+1);
        scanf("%d", (arr_pointer+i)); //scanf so far has accepted value by scanf("%d", &num) where &num is an address. access the address directly via arr_pointer
                                      //by using arr_pointer+i, rather than arr_pointer++ one can store values in arrays without having to move pointer forward and backward. arr_pointer has remained at its original position, &arr[0] so far
        }
    
        //sort values of array[MAX]
        //REMEMBER, array is almost the same as pointers. array[i] == *(array+i)
    BubbleSort_Desc(arr_pointer, arr_len);
    
    for (int i = 0; i < arr_len; i++) //display values of array[MAX]
        printf("%d \n", *(arr_pointer+i));
    
    printf("Sorted in descending order\n");
    return 0;
}


void BubbleSort_Desc (int *array_pointer, int array_length) //When making nested loop, design the core loop first and then move outward to defining boundaries - it's easier to visualize that way
{
    for (int i = 0; i < (array_length); i++)
        {
        for (int j = 0 ; j < (array_length-i-1); j++) //the smallest element gets ousted and thus, eliminated from next iteration
            {
            if (*(array_pointer+j) < *(array_pointer+j+1)) //if array elements are in ascending order, then switch
                {
                int temp;
                temp = *(array_pointer+j);
                *(array_pointer+j) = *(array_pointer+j+1);
                *(array_pointer+j+1) = temp;
                }
            else //if array element are in descending order, let it be
                ;
            }
        }
}