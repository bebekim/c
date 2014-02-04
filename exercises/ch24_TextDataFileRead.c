//
//  main.c
//  c
//
//  Created by 김영하 on 12/21/13.
//  Copyright (c) 2013 student. All rights reserved.


#include <stdio.h>

int main(int argc, const char * argv[])
{
    char str[30];
    int ch;
    
    FILE *fp = fopen("/Users/goldenfermi/bitsync/programming/c/data.txt", "r"); //파일 data.txt와 스트림을 형성하되 w 모드 즉,쓰기가 가능하다. 정확하게 말하면, 덮어쓰기이다.
                                                                                //a는 append 즉, 이어서 쓰기.
    if (fp == NULL)
        {
        puts ("파일오픈 실패!");
        return -1;
        }
    
    ch = fgetc(fp);
    printf("%c\n", ch);
    ch = fgetc(fp);
    printf("%c\n", ch);
    
    fgets(str, sizeof(str), fp);    //size of str is 30 and it will read to the \n nextline character
    printf("%s\n", str);    //because it will read all the string to the nextline characer, there is no need to include \n after %s. %s will do fine, instead of %s\n
    fgets(str, sizeof(str), fp);    //size of str is 30 and it will read to the \n nextline character
    printf("%s", str);
    
    
    fclose(fp); //append 해보면 알 수 있다 - 이상태에서 close하면 fp는 마지막 캐릭터를 가르킨 상태에서 끝난다.
    return 0;
}

