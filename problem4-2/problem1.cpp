#include<iostream>
class Point 
{
    private :
        int xpos, ypos;
    public :
        void Init(int x, int y)
        {
            xpos=x;
            ypos=y;
        }
        void ShowPointInfo()
        {
            std::cout << "["<<xpos<<","<<ypos<<"]"<<std::endl;

        }


};
class Circle
{
    private:
        int Circle_x, Circle_y;
        int radius;
    public :
        void Init(int x, int y, int r)
        {
            Circle_x=x;
            Circle_y=y;
            radius=r;
        }
        void ShowCircleInfo()
        {
            std::cout <<"radius:"<<radius<<std::endl;
            std::cout <<"["<<Circle_x<<","<<Circle_y<<"]"<<std::endl;
            
        }
};
class Ring
{
    private :
        Circle Outside;
        Circle Inside;
    public :
        void Init(int In_xpos ,int In_ypos, int In_radius, int Out_xpos , int Out_ypos, int Out_radius)
        {
            
            Inside.Init(In_xpos,In_ypos,In_radius);
            Outside.Init(Out_xpos,Out_ypos,Out_radius);
        }
        void ShowRingInfo()
        {
            std::cout << "Inner Circle Info..."<<std::endl;
            Inside.ShowCircleInfo();
            std::cout <<"Outter Circle Info..."<<std::endl;
            Outside.ShowCircleInfo();
        }
        
};

int main()
{
    Ring ring ;
    ring.Init(1,1,4,2,2,9);
    ring.ShowRingInfo();
    return 0;
}