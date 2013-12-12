//
//  main.c
//  BasiC
//
//  Created by 김영하 on 7/31/13.
//  Copyright (c) 2013 ABCoding. All rights reserved.
//

#include <stdio.h>

int main (void)
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[ ] = {1, 2, 3, 4, 5, 6, 7};
    int arr3[5] = {1, 2, };
    int arr1Len, arr2Len, arr3Len, i;

    arr1Len = sizeof(arr1) / sizeof(int); //배열 arra1의 길이 계산
    arr2Len = sizeof(arr2) / sizeof(int); //배열 arra2의 길이 계산
    arr3Len = sizeof(arr3) / sizeof(int); //배열 arra3의 길이 계산

    printf("배열 arr1 크기 : %d, 사람이 생각하기에는 %d\n", sizeof(arr1), arr1Len);
    printf("배열 arr2 크기 : %d, 사람이 생각하기에는 %d\n", sizeof(arr2), arr2Len);
    printf("배열 arr3 크기 : %d, 사람이 생각하기에는 %d\n", sizeof(arr3), arr3Len);
    
    
    for (i = 0; i<arr1Len; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    for (i = 0; i<arr2Len; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    for (i = 0; i<arr3Len; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

}