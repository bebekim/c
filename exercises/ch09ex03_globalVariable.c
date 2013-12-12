//
//  main.c
//  BasiC
//
//  Created by 김영하 on 7/31/13.
//  Copyright (c) 2013 ABCoding. All rights reserved.
//

#include <stdio.h>

void Add(int val);
int num; //전역변수는 초기화시 기본적으로 0

/* 전역변수는
 프로그램의 시작과 동시에 메모리 공간에 할당되어 종료시까지 존재
 별도의 값으로 초기화하지 않으면 0
 프로그램 전체 영역 어디서든 접근 가능 */

int main(int argc, const char * argv[])
{
    printf("num: %d\n", num);
    Add(3);
    printf("num: %d\n", num);
    num++;
    printf("num: %d\n", num);
    return 0;
}

void Add(int val)
{
    num += val;
}

