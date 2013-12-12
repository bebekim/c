//
//  main.c
//  ch05_1
//
//  Created by 김영하 on 7/7/13.
//  Copyright (c) 2013 ABCoding. All rights reserved.
//

#include <stdio.h>

int getMax (int, int); //함수 선언, 정의는 main 함수 밑에. 이 방식이 objective C와도 맞는 것 같다
int getMin (int, int); //함수 선언. 정의는 main 함수 밑에. 이 방식이 objective C와도 맞는 것 같다

int main(int argc, const char * argv[])
{
    int max, min; //최대, 최소값
    int num, temp; //비교할 값들
    int i = 1; //돌릴 싸이클 수
    printf("세 개의 정수를 인자로 전달 받아서 그 중 가장 큰 수를 반환하는 함수와 가장 작은 수를 반환하는 함수를 만드는 중이다.\n");
    printf("하지만 세개가 아니라 4개면? 경우를 고려한 알고리즘을 짤 생각이다. 일단, 3개의 정수를 비교할 생각이다\n");
 
    printf("숫자 1개를 써라\n");
    scanf("%d", &num);
    max = num;
    min = num;
    while (i<3) {
        printf("비교하고자 하는 숫자 써라\n");
        scanf("%d", &temp);
        max = getMax (max, temp); //max value is updated upon each iteration
        min = getMin (min, temp); //min value is updated upon each iteration
        i++;
    }
    printf("가장 큰 수는 %d\n", max);
    printf("가장 작은 수는 %d\n", min);
    return 0;
}

int getMax (int previousMax, int temp)
{
    if (previousMax>temp)
        return previousMax;
    else
        return temp;
}

int getMin (int previousMin, int temp)
{
    if (previousMin>temp)
        return temp;
    else
        return previousMin;
}
