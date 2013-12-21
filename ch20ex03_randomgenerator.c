//
//  main.c
//  c
//
//  Created by 김영하 on 12/13/13.
//  Copyright (c) 2013 student. All rights reserved.
//
//  ch 20 도전! 프로그래밍3
//  ex 03
//  난수 생성기


    //this is incomplete


    //현재 내가 어려움 겪고 있는 부분 1
    //input에 따라 array size 정하기
    //효근이 말로는 dynamic memory allocation 말고는 별 방법 없다고 한다
    //일단은 array size = 5

    //현재 내가 어려움 겪고 있는 부분 2
    //shellcheck할 때 D=4번 돌려보면서 면밀히 다 확인한 다음에 shell++를 해야하는데, 이럴려면 recursive가 필요하다

#include <stdio.h>
#include <stdlib.h>

#define MAX 100
#define NUM 5

int main(int argc, const char * argv[])
{
    int i;
    printf("난수의 범위 : 0부터 %d까지 \n", MAX);
    for (i = 0; i < NUM ; i++)
        printf("난수 %d : %d \n", i+1, rand() % MAX);
    return 0;
}

