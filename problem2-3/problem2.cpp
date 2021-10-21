//x, y좌표를 만들어서 각 좌표를 더한 좌표를 2차원 평면상에 표현해라
#include<iostream>
typedef struct __Point
{
    int xpos;
    int ypos;
}Point;

Point& Adder(const Point *p1,const Point *p2);


int main()
{
    Point *p1 =new Point;
    p1->xpos = 2;
    p1->ypos =10;
    
    Point *p2=new Point;
    p2->xpos =10;
    p2->ypos =10;

    Point &ref = Adder(p1,p2);
    std::cout <<"ref.xpos:"<<ref.xpos<<std::endl;
    std::cout <<"ref.ypos:"<<ref.ypos<<std::endl;
    delete p1;
    delete p2;
    delete &ref;
    return 0;
}

Point& Adder(const Point *p1,const Point *p2)
{
    Point *ref =new Point ;
    ref->xpos = p1->xpos + p2->xpos;
    ref->ypos = p1->ypos + p2->ypos;
    return *ref;
}