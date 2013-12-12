//
//  main.c
//  Basic C
//
//  Created by 김영하 on 11/11/13.
//  Copyright (c) 2013 ABCoding. All rights reserved.
//
//  윤성우의 열혈 C 프로그래밍
//  ch15: 도전
//

#include <stdio.h>


void array_output (int *ptr)
{
    for (int i = 0; i < 10; i++)
        {
        printf("%d ", *(ptr++));
        }
}

int main(int argc, const char * argv[])
{
    int array [10];
    int* read_forward = &array[0];
    int* read_backward = &array[9];
    int* arrptr = array; //int *arrptr = &array[0]과 동일하다
    
        //입력을 LENGTH만큼 받으면서 array i번째 요소에 저장한다
    for (int i = 0; i<10; i++)
        {
        printf("%d번째 : ", i+1);
            //매 항목 array에 들어갈 숫자 입력 받기
        int input;
        scanf("%d", &input);
            //만일 input이 홀수이면
            if (input %2 == 1)
                {
                //read_forward 포인터가 가르키는 요소에 저장한다. read_forward를 한칸 앞으로 움직인다
                *(read_forward++) = input;
                }
        
            //만일 input이 짝수이면
            else
                {
                //read_backward 포인터가 가르키는 요소에 저장한다. read_backward를 한칸 뒤로 움직인다
                *(read_backward--) = input;
                }
         }

    printf("입력 완료\n");
    
    //제대로 출력하는지 확인하는 부분
    //출력하기 앞서, array 맨 앞으로 pointer를 리셋
    arrptr = array;
    
    //제대로 출력되는지 확인하는 함수
    array_output(arrptr);
    
    printf("\nThe End\n");
    
    return 0;
}

