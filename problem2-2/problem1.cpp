
#include<iostream>

int main()
{
    const int num =12;
    const int *ptr = &num;
    const int *(&ref)=ptr;
    std::cout <<"num:"<<num<<std::endl;
    std::cout <<"*ptr:"<<*ptr<<std::endl;
    std::cout <<"*ref:"<<*ref<<std::endl;
    return 0;
}