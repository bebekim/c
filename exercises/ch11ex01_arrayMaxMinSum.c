//
//  main.c
//  BasiC
//
//  Created by 김영하 on 7/31/13.
//  Copyright (c) 2013 ABCoding. All rights reserved.
//  길이가 5인 int형 배열을 선언해서 프로그램 사용자로부터 총 5개의 정수를 입력 받는다.
//  입력이 끝나면 다음의 내용 출력 : 입력된 정수 중에서 최대값, 최소값, 총 합
//

#include <stdio.h>
    // 사용하게 될 함수 미리 정의
int returnMax (int, int); //최대값 비교하고 출력하는 함수
int returnMin (int, int); //최소값 비교하고 출력하는 함수
int returnSum (int, int); //총 합 출력하는 함수

const int LEN = 5; //int 형 배열의 길이 LENGTH, LEN

int main (void)
{
    int array[LEN]; //길이 LEN인 함수 선언
    
    for (int i=0; i<LEN; i++) {
        printf("%d 번째 입력: ", i);
        scanf("%d", &array[i]); //변수 대상으로 & 연산자 붙이듯이 배열요소 대상으로 할 때 & 붙인다
    } //길이 LEN인 int형 배열에 int 입력 받는다

    int max = array[0];
    int min = array[0];
    int sum = 0; //all initialized with the array[0]
                        //int max, min, sum = array[0]으로 초기화할 경우 max, min은 0 값이고 sum만 array[0] 초기화

    for (int i = 0; i < LEN; i++) {
        int temp = array[i]; //i번째 배열의 수를 잠시 저장하는 temp. for loop 밖에서 쓰일 일 없는 임시값이므로 int temp는 지역 변수.
        max = returnMax (max, temp);
        min = returnMin (min, temp);
        sum = returnSum (sum, temp);
    }

    printf("OUTPUT: \n"); //비교, 합산한 결과물 출력
    printf("MAX : %d\n", max);
    printf("MIN : %d\n", min);
    printf("SUM : %d\n", sum);
    return 0;
}


int returnMax (int max, int temp)
{
    max = (max > temp) ? max : temp; //if previous max is larger than temporary number, previous max maintains its max. else temp becomes the new max
    return max;
}

int returnMin (int min, int temp)
{
    min = (min < temp) ? min : temp; //if previous min is smaller than temporary number, previous min maintains its min. else (if temporary is smaller than previous min) temp becomes the new min
    return min;
}

int returnSum (int sum, int temp)
{
    sum += temp; //add temporary number to the sum
    return sum;
}