//
//  main.c
//  c
//
//  Created by 김영하 on 12/21/13.
//  Copyright (c) 2013 student. All rights reserved.
//  #include <string.h>
//  ch 22 : 구조체와 사용자 정의 자료형


#include <stdio.h>
#include <string.h>

#define NAMEMAX 20
#define IDMAX 13

struct employee
{
    char name[NAMEMAX];
    char idnum[IDMAX];
    int wage;
};


int main(int argc, const char * argv[])
{
    struct employee joe;
   
    printf("name :");
    scanf("%s",joe.name);
    printf("id number : ");
    scanf("%s",joe.idnum);
    printf("wage : ");
    scanf("%d", &joe.wage);
    
    printf("name : %s\n", joe.name);
    printf("id number : %s\n", joe.idnum);
    printf("wage : %d\n", joe.wage);
    
    return 0;
    
}

