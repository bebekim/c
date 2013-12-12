//
//  main.c
//  Basic C
//
//  Created by 김영하 on 11/11/13.
//  Copyright (c) 2013 ABCoding. All rights reserved.
//
//  윤성우의 열혈 C 프로그래밍
//  ch14 : 함수의 인자로 배열 전달하기
//  call by reference로 숫자 뒤바꾸기

#include <stdio.h>
void Swap3 (int* ptr1, int* ptr2, int* ptr3)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = *ptr3;
    *ptr3 = temp;
}

int main(int argc, const char * argv[])
{
    int num1 = 1, num2 = 2, num3 = 3;
    int* ptr1 = &num1;
    int* ptr2 = &num2;
    int* ptr3 = &num3;
    
    printf("%d - %d - %d \n", num1, num2, num3);
    Swap3 (&num1, &num2, &num3);
    printf("%d - %d - %d \n", *ptr1, *ptr2, *ptr3);
    
    return 0;
}

