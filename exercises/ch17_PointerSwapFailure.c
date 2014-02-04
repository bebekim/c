    //
    //  main.c
    //  Basic C
    //
    //  Created by 김영하 on 11/11/13.
    //  Copyright (c) 2013 ABCoding. All rights reserved.
    //
    //  윤성우의 열혈 C 프로그래밍
    //  ch17: 포인터의 포인터
    //  PointerSwapFailure.c


#include <stdio.h>

void SwapIntPtr (int *p1, int *p2)
{
    printf("p1 : %p \n", p1);
    printf("p2 : %p \n", p2);
    int * temp = p1; //a temporary pointer is created,
    printf("temp : %p \n", temp);
    p1 = p2;
    p2 = temp;
    printf("p1 : %p \n", p1);
    printf("p2: %p \n", p2);
}

int main(int argc, const char * argv[])
{
    int num1 = 10, num2 = 20;
    int *ptr1, *ptr2;
    ptr1 = &num1;
    ptr2 = &num2;
    printf("ptr1 points to value : %d \n", *ptr1);
    printf("ptr2 points to value : %d \n", *ptr2);
    
    SwapIntPtr (ptr1, ptr2); //why doesn't this work?
                             //ptr1 and p1 are separate entities.
                             //what happens with swapping p1, p2 does not translate to ptr1, ptr2
                             //values are copied like p1 = ptr1; p2 = ptr2;
                             //that's why swapping ptr1, ptr2 won't affect p1, p2

    printf("ptr1 points to value : %d \n", *ptr1);
    printf("ptr2 points to value : %d \n", *ptr2);
    
    return 0;
}

