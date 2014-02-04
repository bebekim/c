//
//  main.c
//  c
//
//  Created by 김영하 on 12/21/13.
//  Copyright (c) 2013 student. All rights reserved.
//  ch24

#include <stdio.h>

int main(int argc, const char * argv[])
{
    char name [10];
    char sex;
    int age;
    
    FILE *fp = fopen("/Users/goldenfermi/bitsync/programming/c/friends.txt", "w");
    int i;
    
    for (i = 0; i < 3; i++) {
        printf("이름 성별 나이 순 입력 :");
        scanf("%s %c %d", name, &sex, &age);
        getchar();  //버퍼에 남아있는 \n 소멸
        fprintf(fp, "%s %c %d\n", name, sex, age);
    }
    fclose(fp);
    return 0;
}

