#include<iostream>
#include<cstring>
namespace CLASS_CONST
{
    enum{
        STR_LEN = 20
    };
}
class Printer
{
    private : 
        char arr[CLASS_CONST::STR_LEN];
    public:
        void SetString (char *str);
        void ShowString();
};
void Printer::SetString (char *str)
{
    strcpy(arr,str);
}
void Printer::ShowString()
{
    std::cout << arr<<std::endl;
}


int main()
{
    Printer pnt;
    pnt.SetString("Hello world");
    pnt.ShowString();

    pnt.SetString("I love C++");
    pnt.ShowString();
    return 0;
}