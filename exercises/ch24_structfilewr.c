//
//  main.c
//  c
//
//  Created by 김영하 on 12/21/13.
//  Copyright (c) 2013 student. All rights reserved.
//  ch24

#include <stdio.h>
typedef struct fren
{
    char name[10];
    char sex;
    int age;
} Friend;


int main(int argc, const char * argv[])
{
    FILE *fp;
    Friend myfren1;
    Friend myfren2;
    
        //writing bin file
    fp = fopen("friend.bin", "w");
    printf("Name, Sex, Age : ");
    scanf("%s %c %d", myfren1.name, &(myfren1.sex), &(myfren1.age));
    fwrite((void*)&myfren1, sizeof(myfren1), 1, fp);
    fclose(fp);
    
        //reading bin file
    fp = fopen("friend.bin", "r");
    fread((void*)&myfren2, sizeof(myfren2), 1, fp);
    printf("%s %c %d \n", myfren2.name, myfren2.sex, myfren2.age);
    fclose(fp);
    
    return 0;
}

