//
//  main.c
//  BasiC
//
//  Created by 김영하 on 7/31/13.
//  Copyright (c) 2013 ABCoding. All rights reserved.
//

#include <stdio.h>

void SimpleFunc (void);

int main(int argc, const char * argv[])
{
    for (int i=0; i<3; i++) {
        SimpleFunc();
    }
    return 0;
}

void SimpleFunc(void)
{
    static int num1 = 0; //static은 초기화하지 않으면 0으로 자동 설정
    int num2 = 0; //지역변수는 초기화하지 않으면 쓰레기 값으로 초기화
    num1++;
    num2++;
    printf("static: %d, local: %d\n", num1, num2);
    
}