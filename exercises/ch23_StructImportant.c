//
//  main.c
//  c
//
//  Created by 김영하 on 12/21/13.
//  Copyright (c) 2013 student. All rights reserved.
//  #include <string.h>
//  ch 22 : 구조체와 배열 그리고 포인터


#include <stdio.h>

typedef struct student {
    char name [20];
    char studnum[20];
    char school[20];
    char major[20];
    int year;
} Student;


void ShowStudentInfo (Student *sptr);

int main(int argc, const char * argv[])
{
    Student list[3];
    int i;
    
    for (i = 0; i < 3; i++)
        {
        printf("Name : "); scanf("%s", list[i].name);
        printf("ID num : "); scanf("%s", list[i].studnum);
        printf("School Name : "); scanf("%s", list[i].school);
        printf("Major : "); scanf("%s", list[i].major);
        printf("Year : "); scanf("%d", &list[i].year);
        }
    
    for (i = 0; i < 3; i++)
        ShowStudentInfo(&list[i]);
    return 0;
}

void ShowStudentInfo (Student *sptr)
{
    printf("Name of Student : %s \n", sptr->name);
    printf("ID of Student : %s \n", sptr->studnum);
    printf("Name of School : %s \n", sptr->school);
    printf("Major : %s \n", sptr->major);
    printf("Grade : %d \n", sptr->year);
}