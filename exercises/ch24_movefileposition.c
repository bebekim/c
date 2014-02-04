//
//  main.c
//  c
//
//  Created by 김영하 on 12/21/13.
//  Copyright (c) 2013 student. All rights reserved.
//  ch24
//  파일 위치 지시자 - FILE 구조체 멤버 중에는 파일의 위치 정보를 저장하는 멤버가 있는데 fgets, fputs, fread, fwrite같은 함수가 호출될 때마다 참조 및 갱신된다.
//  파일 위치 지시자는 파일이 처음 개방되면 무조건 파일의 맨 앞부분을 가르킨다. 따라서 파일의 중간 혹은 마지막 부분에서부터 데이터를 읽거나 쓰기를 원한다면 파일 위치 지시자를 이동 시켜야 한다.

#include <stdio.h>

int main(int argc, const char * argv[])
{

        //파일 생성
    FILE *fp = fopen("/Users/goldenfermi/bitsync/programming/c/text.txt", "w");
    fputs("123456789", fp);
    fclose(fp);
    
    
        //파일 개방
    fp = fopen("/Users/goldenfermi/bitsync/programming/c/text.txt", "r");
    
        //SEEK_END라면 파일 맨 끝에서부터 이동을 시작. -2면 앞부분으로 2칸 이동.
    fseek(fp, -2, SEEK_END);
    putchar(fgetc(fp));
        //SEEK_SET라면 파일 맨 앞에서부터 이동을 시작. 0이면 그자리.
    fseek(fp, 0, SEEK_SET);
    putchar(fgetc(fp));
        //SEEK_CUR라면 파일 현재 위치에서부터 이동을 시작. 
    fseek(fp, 0, SEEK_CUR);
    putchar(fgetc(fp));
    
    fclose(fp);
    return 0;
}

