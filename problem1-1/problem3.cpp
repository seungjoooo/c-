#include<iostream>
int main()
{   int number;
    std::cout << "write any number :";
    std::cin >> number;
    for (int i=0; i<10;i++){
        std::cout << number * i<<std::endl;
    }
    return 0;
}