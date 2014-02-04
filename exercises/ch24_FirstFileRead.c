//
//  main.c
//  c
//
//  Created by 김영하 on 12/21/13.
//  Copyright (c) 2013 student. All rights reserved.

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int ch, i;
    FILE *fp = fopen ("/Users/goldenfermi/BTSync/Programming/c/data.txt", "rt"); //파일 data.txt와 스트림을 형성하되 rt 모드로 스트림을 형성한다. rt모드로는 입력이 가능하다.
    
    if (fp == NULL)
        {
        puts ("파일오픈 실패!");
        return -1;
        }
    
    for (i = 0; i < 3; i++)
        {
        ch = fgetc(fp); //fp를 통해 data.txt 가 우리에게 입력하고 있는 셈
        printf("%c \n", ch);
        }
    
    fclose(fp);
    return 0;
}

