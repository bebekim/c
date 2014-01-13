//
//  main.c
//  c
//
//  Created by 김영하 on 12/21/13.
//  Copyright (c) 2013 student. All rights reserved.
//  #include <string.h>
//  ch 23 : 구조체와 사용자 정의 자료형2


#include <stdio.h>

typedef struct point {
    int xpos;
    int ypos;
} Point;

typedef struct rectangle {
    struct point Point1;
    struct point Point2;
} Rectangle;

void CalcArea (Rectangle shape);
void ShowCorners (Rectangle shape);

int main(int argc, const char * argv[])
{
    Point topleft = {0, 0};
    Point bottomright = {100, 100};
    
    Rectangle shape1;
    Rectangle *shptr = &shape1;
    shptr->Point1 = topleft;
    shptr->Point2 = bottomright;
    
    CalcArea(shape1);
    ShowCorners(shape1);
    
    return 0;
}

void CalcArea (Rectangle shape)
{
    printf("Area of rectangle : %d \n", (shape.Point2.xpos - shape.Point1.xpos) * (shape.Point2.ypos - shape.Point1.ypos));
    
}

void ShowCorners (Rectangle shape)
{
    printf("The corners of the rectangle\n");
    printf("Top left : [%d, %d] \n", shape.Point1.xpos, shape.Point1.ypos);
    printf("Bottom Right : [%d, %d]\n", shape.Point2.xpos, shape.Point2.ypos);
}