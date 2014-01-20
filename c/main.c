//
//  main.c
//  c
//
//  Created by 김영하 on 12/21/13.
//  Copyright (c) 2013 student. All rights reserved.

#include <stdio.h>

int main(int argc, const char * argv[])
{
    FILE *fp = fopen ("/Users/goldenfermi/BTSync/Programming/c/exercises/ch24_data.txt", "wt"); //fopen함수가 스트림을 형성하는 함수, fclose함수는 스트림을 해제하는 함수. 즉, fopen 함수가 파일을 개방하면, fclose함수는 파일을 닫는다.
                                                                                                //wt는 출력 스트림의 형성
                                                                                                //data.txt 와 스트림을 형성하되, wt모드로 스트림을 형성해라.
    
    if (fp == NULL)
        {
        puts ("파일오픈 실패!");
        return -1;  //비정상적인 종료를 의미하기 위해서 -1을 반환
        }
    
    fputc ('A', fp);
    fputc ('B', fp);
    fputc ('C', fp);
    fclose(fp); //스트림의 종료
    return 0;
}

