#include<iostream>
int main()
{
    char name[100];
    int number ;
    std::cout << "what is your name:";
    std::cin >> name;
    
    std::cout << "what is your phone number";
    std::cin >> number;

    std::cout << "my name is " << name <<" and my phone number is "<<number <<std::endl;
    return 0;
}
