//
//  main.c
//  c
//
//  Created by 김영하 on 12/13/13.
//  Copyright (c) 2013 student. All rights reserved.
//
//  ch 20 도전! 프로그래밍3
//  ex 04
//  난수 생성기

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 6
#define NUM1 2
#define NUM2 6

int main(int argc, const char * argv[])
{
    int i;
    srand((int)time(NULL)); //use current time to seed the random generator
    printf("첫번째 주사위 난수의 범위 : 0부터 %d까지 \n", MAX);
    for (i = 0; i < NUM1 ; i++)
        printf("난수 %d : %d \n", i+1, (rand() % MAX)+1);
    srand((int)time(NULL)); //use current time to seed the random generator
    printf("두번째 주사위 난수의 범위 : 0부터 %d까지 \n", MAX);
    for (i = 0; i < NUM2 ; i++)
        printf("난수 %d : %d \n", i+1, (rand() % MAX)+1);

    
    return 0;
}

