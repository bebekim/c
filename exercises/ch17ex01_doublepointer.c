    //
    //  main.c
    //  Basic C
    //
    //  Created by 김영하 on 11/11/13.
    //  Copyright (c) 2013 ABCoding. All rights reserved.
    //
    //  윤성우의 열혈 C 프로그래밍
    //  ch17: 포인터의 포인터
    //  PointerSwapSuccess.c


#include <stdio.h>

void SwapIntPtr (int* *dp1, int* *dp2)
{
    int *temp = *dp1;
    *dp1 = *dp2;
    *dp2 = temp;
}

int main(int argc, const char * argv[])
{
    int num1 = 10, num2 = 20;
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    printf("ptr1 points to value : %d \n", *ptr1);
    printf("ptr2 points to value : %d \n", *ptr2);
    
    SwapIntPtr (&ptr1, &ptr2); //why does this work?
                               //once again, values are still only copied. Call-by-reference rule doesn't change all of a sudden
                               //However, **ptr double ptr values are copied.
                               //&ptr1 and * *dp1 are separate entities but their values (what they point at) are equal
                               //thereby, swapping * *dp1 with * *dp2 is effective 
                             //ptr1 and p1 are separate entities.
                             //what happens with swapping p1, p2 does not translate to ptr1, ptr2
                             //values are copied like p1 = ptr1; p2 = ptr2;
                             //that's why swapping ptr1, ptr2 won't affect p1, p2
    
        //a pointer to a pointer changes value by a function
        //If I were to change value in a function within a function, I'd probably need a pointer to a pointer to a pointer (triple pointer)
        //let's test that
    
    

    printf("ptr1 points to value : %d \n", *ptr1);
    printf("ptr2 points to value : %d \n", *ptr2);
    
    return 0;
}

