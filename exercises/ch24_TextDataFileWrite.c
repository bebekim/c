//
//  main.c
//  c
//
//  Created by 김영하 on 12/21/13.
//  Copyright (c) 2013 student. All rights reserved.


#include <stdio.h>

int main(int argc, const char * argv[])
{
    FILE *fp = fopen("/Users/goldenfermi/bitsync/programming/c/data.txt", "w"); //파일 data.txt와 스트림을 형성하되 w 모드 즉,쓰기가 가능하다. 정확하게 말하면, 덮어쓰기이다.
                                                                                //a는 append 즉, 이어서 쓰기.
    if (fp == NULL)
        {
        puts ("파일오픈 실패!");
        return -1;
        }
    
    fputc('A', fp);
    fputc('B', fp);
    fputs("My name is Young Ha \n", fp);
    fputs("Your name is Jun Kyum \n", fp);
    
    fclose(fp); //append 해보면 알 수 있다 - 이상태에서 close하면 fp는 마지막 캐릭터를 가르킨 상태에서 끝난다.
    return 0;
}

