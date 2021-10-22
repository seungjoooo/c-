#include <iostream>
class Calculator
{
    private : 
       
        int numOfAdd;
        int numOfDiv;
        int numOfMin;
        int numOfMul;
    public :
        void init();
        double Add(double x, double y);
        double Div(double x,double y);
        double Min(double x, double y);
        double Mul(double x, double y);

        void ShowOpCount();
};

void Calculator::init()
{
    
    numOfAdd=0;
    numOfDiv=0;
    numOfMin=0;
    numOfMul=0;
    
    
    
}
double Calculator::Add(double x, double y){
    
    numOfAdd++;
    return x+y;
   
}
double Calculator::Div(double x,double y)
{
   
    numOfDiv++;
    return x/y;
 
}
double Calculator::Min(double x, double y)
{
    
    numOfMin++;
    return x-y;
    
}
double Calculator::Mul(double x, double y)
{
    numOfMul++;
    return x*y;
}
void Calculator::ShowOpCount()
{

    std::cout <<"µ¡¼À:"<<numOfAdd <<",»¬¼À:"<<numOfMin<<",³ª´°¼À:"<<numOfDiv<<",°ö¼À:"<<numOfMul<<std::endl;
}


int main()
{
    Calculator cal;
    cal.init();
    std::cout<<"3.2+2.4 =" <<cal.Add(3.2,2.4)<<std::endl;
    std::cout <<"3.5/1.7="<<cal.Div(3.5,1.7)<<std::endl;
    std::cout <<"2.2 -1.5="<<cal.Min(2.2,1.5)<<std::endl;
    std::cout <<"4.9/1.2="<<cal.Div(4.9,1.2)<<std::endl;
    cal.ShowOpCount();

    return 0;
}