//
//  main.c
//  ch04_3binarycomputation
//
//  Created by 김영하 on 7/3/13.
//  Copyright (c) 2013 ABCoding. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    int num = 15;
    int negativenum = -16;

    int result1 = num<<1;
    int result2 = num>>1;
    printf("비트 연산 왼쪽으로 한칸: %d -> %d\n", num, result1);
    printf("비트 연산 오른쪽으로 한칸 : %d -> %d\n", num, result2);
    
    printf("2칸 오른쪽 이동의 결과 : %d \n", negativenum>>2);
    printf("3칸 오른쪽 이동의 결과 : %d \n", negativenum>>3);
    
    int num1 = 3;
    int num2 = -15;
    
    int flipNum1 = ~num1 + 1;
    int flipNum2 = ~num2 + 1;
    
    printf ("%d 을 뒤집으면 %d 가 나오지~\n", num1, flipNum1);
    printf ("%d 을 뒤집으면 %d 가 나오지~\n", num2, flipNum2);
    
    int num3 = 3;
    int midresult;
    
    printf ("%d x 8 / 4 하는 과정을 보여주지\n", num3);
    midresult = num3<<3;
    printf ("%d에 8을 곱하기 위해서는 %d x 2 x 2 x 2, 즉 %d을 비트 연산 왼쪽으로 세칸 -> %d \n", num3, num3, num3, midresult);
    printf ("%d에 4를 나누기 위해서는 %d / 2 / 2, 즉, %d을 비트 연산 오른쪽으로 두칸 -> %d \n", midresult, midresult, midresult, midresult>>2);
    return 0;
}

