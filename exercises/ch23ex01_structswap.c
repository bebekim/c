//
//  main.c
//  c
//
//  Created by 김영하 on 12/21/13.
//  Copyright (c) 2013 student. All rights reserved.
//  #include <string.h>
//  ch 22 : 구조체와 배열 그리고 포인터


#include <stdio.h>

typedef struct point
{
    int xpos;
    int ypos;
} Point;

void ShowPoint (Point *ptr);
void SwapPoints (Point *ptr1, Point *ptr2);

int main(int argc, const char * argv[])
{
    Point pos1 = {2, 4};
    Point pos2 = {5, 7};
    
    ShowPoint (&pos1);
    ShowPoint (&pos2);
    SwapPoints (&pos1, &pos2);
    ShowPoint (&pos1);
    ShowPoint (&pos2);
    
    
    return 0;
}

void ShowPoint (Point *ptr)
{
    printf("[%d, %d]\n", ptr->xpos, ptr->ypos);
}

void SwapPoints (Point *ptr1, Point *ptr2)
{
    Point temp;
    Point *temptr = &temp;
    temptr->xpos = ptr1->xpos;
    temptr->ypos = ptr1->ypos;
    ptr1->xpos = ptr2->xpos;
    ptr1->ypos = ptr2->ypos;
    ptr2->xpos = temptr->xpos;
    ptr2->ypos = temptr->ypos;
}