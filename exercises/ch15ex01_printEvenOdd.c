//
//  main.c
//  Basic C
//
//  Created by 김영하 on 11/11/13.
//  Copyright (c) 2013 ABCoding. All rights reserved.
//
//  윤성우의 열혈 C 프로그래밍
//  ch15 : 도전
//  길이가 10인 배열을 선언하고 총 10개의 정수를 입력 받아서 홀수와 짝수를 구분지어 출력한다.
//  단, 홀수부터 출력하고 나서 짝수를 출력하도록 하자
//  10개 정수 입력은 main 함수 내에서 받고
//  홀수만 출력하는 함수 1개, 짝수만 출력하는 함수 1개는 각각 정의해서 이 두 함수를 호출한다

#include <stdio.h>

    //홀수만 출력하는 함수 1개
void print_odd (int* arrptr)
{
    printf("홀수 출력 시작: ");
    for (int i = 0; i <10; i++)
        {
            //홀수라면 출력
        if (*arrptr %2 == 1)
            {
            printf("%d ", *arrptr);
            }
        else //짝수라면
            ;
            //홀수 짝수 어찌됐든 카운터 올리면서 arrptr 카운트 올려야지
        arrptr++;
        }
    
}
    //짝수만 출력하는 함수 1개
void print_even (int* arrptr)
{
    int i = 0;
    printf("\n짝수 출력 시작 :");
 while (i < 10)
     {
     if (*arrptr %2 == 0)
         {
         printf("%d ", *arrptr);
         }
     else
         ;
     arrptr++;
     i++;
     }
    
}

int main(int argc, const char * argv[])
{
    int array [10];
    int* arrptr = array; //int *arrptr = &array[0]과 동일하다
    
        //입력을 LENGTH만큼 받으면서 array i번째 요소에 저장한다
    for (int i = 0; i<10; i++)
        {
        printf("%d번째 : ", i+1);

            //매 항목 array에 들어갈 숫자 입력 받기
        int input;
        scanf("%d", &input);
        *(arrptr++) = input;
        }

    printf("입력 완료\n");

        //홀수 출력하기
        //pointer를 reset해야 하는건가? 해야한다. 다만 함수로 array 통짜를 넘길 방법이 없기 때문에...
    arrptr = array;
        //다시 출력하면서 홀수 확인하며 array를 짚어간다
    print_odd(arrptr);

        //짝수 출력하기
        //pointer를 reset해야 하는건가? 해야한다. 다만 함수로 array 통짜를 넘길 방법이 없기 때문에...
    arrptr = array;
        //다시 출력하면서 짝수 확인하며 array를 짚어간다
    print_even(arrptr);
    
    printf("\nThe End\n");
    
    return 0;
}

