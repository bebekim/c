//
//  main.c
//  Basic C
//
//  Created by 김영하 on 11/11/13.
//  Copyright (c) 2013 ABCoding. All rights reserved.
//
//  윤성우의 열혈 C 프로그래밍
//  ch14 : 함수의 인자로 배열 전달하기

#include <stdio.h>

int SquareByValue (int num)
{
    int squared = num * num;
    return squared;
}

void SquareByReference (int *ptr)
{
    int num = *ptr;
    *ptr = num * num;
        //nothing to return, value had been changed
}

int main(int argc, const char * argv[])
{
    int num = 10;
    
        //SquareByReference 와 SquareByValue의 순서를 바꿔보면 그 의미를 알 수 있다.
    
    
        //SquareByReference는 call by reference 즉, 값 자체를 바꿔야 한다
        //따라서 num 값이 바뀐다
    SquareByReference(&num);
    printf("%d \n", num);

        //SquareByValue는 call by value값을 매개변수에 옮겨 받은 다음에 매개 변수 값을 제곱하여 return한다
        //따라서 num 값은 여전히 변하지 않는다
    SquareByValue (num);
    printf("%d \n", SquareByValue(num));
    
    
    return 0;
}

