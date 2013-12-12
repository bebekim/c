    //
    //  main.c
    //  Basic C
    //
    //  Created by 김영하 on 11/11/13.
    //  Copyright (c) 2013 ABCoding. All rights reserved.
    //
    //  윤성우의 열혈 C 프로그래밍
    //  ch18: 배열의 포인터, 포인터의 포인터, 배열의 포인터의 포인터 등등

#include <stdio.h>
void onedimensionalfunc (int (*ptr1), int* (*ptr3), int** (*ptr5));
void twodimensionalfunc (int (*ptr2)[5], int* (*ptr4)[5], int*** (*ptr6)[5]);

int main(int argc, const char * argv[])
{
    int arr1[5]; //int 형 변수로 이뤄진 1차원 배열
                 //a 1-dimensional array of (int) type variable
                 // = {1, 2, 3, 4, 5};
    
    int arr2[3][5]; //int형 변수로 이뤄진 2차원 배열
                    //a 2-dimensional array of (int) type variable
                    // = { (1, 2, 3, 4, 5),
                    //      (6, 7, 8, 9, 10),
                    //      (11, 12, 13, 14, 15)};
    
    int* arr3[5]; //int* 형 변수로 이뤄진 1차원 배열
                  //a 1-dimensional array of (int*) type variable
                  // = {&num1, &num2, &num3, &num4, &num5};
    
    int* arr4[3][5]; //int* 형 변수로 이뤄진, 가로길이가 5인 2차원 배열
                     //a 2-dimensional array of (int*) type variable
                     // = { (&num1, &num2, &num3, &num4, &num5)
                     //     (&num6, &num7, &num8, &num9, &num10)
                     //     (&num11, &num12, &num13, &num14, &num15)};
    
    int** arr5[5]; //int** 형 변수로 이뤄진, 가로 길이가 5인 1차원 배열
                   //a 1-dimensional array of (int**) type variable

    int*** arr6[3][5]; //int*** 형 변수로 이뤄진, 가로길이가 5인 2차원 배열
                       ///a 2-dimensiona larray of (int***) type variable

            //the correct way to initialize these pointers
    int (*ptr1) = arr1;
    int (*ptr2)[5] = arr2;
    int* (*ptr3) = arr3;
    int* (*ptr4)[5] = arr4;
    int** (*ptr5) = arr5;
    int*** (*ptr6)[5] = arr6;
    
    printf("%p \n%p \n%p \n%p \n%p \n%p\n", arr1, arr2, arr3, arr4, arr5, arr6); // equivalent of
    printf("\n");
    printf("%p \n%p \n%p \n%p \n%p \n%p\n", &arr1[0], &arr2[0], &arr3[0], &arr4[0][0], &arr5[0], &arr6[0][0]);
    
    return 0;
}

void onedimensionalfunc (int (*ptr1), int* (*ptr3), int** (*ptr5))
{
    
}

void twodimensionalfunc (int (*ptr2)[5], int* (*ptr4)[5], int*** (*ptr6)[5])
{
    
}
