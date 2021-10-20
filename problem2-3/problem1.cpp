#include <iostream>
typedef struct __Point
{
    int xpos;
    int ypos;

}Point;
Point& PntAdder(const Point &p1,const Point &p2);

int main()
{

    Point *pp1=new Point;
    pp1->xpos=3;
    pp1->ypos=10;

    Point *pp2=new Point;
    pp2->xpos=70;
    pp2->ypos=7;

    Point &ref = PntAdder(*pp1,*pp2);
    std::cout << ref.xpos <<","<<ref.ypos<<std::endl;

    delete pp1;
    delete pp2;
    delete &ref;

   
     
    return 0;
}
Point& PntAdder(const Point &p1,const Point &p2)
{
    
    Point *pptr=new Point;
    pptr->xpos=p1.xpos+p2.xpos;
    pptr->ypos=p1.ypos+p2.ypos;
    return *pptr;
}
