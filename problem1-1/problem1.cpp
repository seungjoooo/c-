#include <iostream>

int main(void)
{
    int result=0;
    int num[5];
    for (int i=0;i<5;i++){
        std::cout<<i+1<<"write number:";
        std::cin >> num[i] ;
       std::cout << std::endl;
        result+=num[i];
    }
    std::cout <<"sum:"<<result<<std::endl;
    return 0;

}
