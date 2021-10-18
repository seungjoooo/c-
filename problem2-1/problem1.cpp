#include<iostream>
int Increase(int *number);
int SwitchCode(int &number);
int main()
{
    int num;
    std::cout <<"정수 입력 :";
    std::cin >> num;
    std::cout << "Increase(&num):"<<Increase(&num)<<std::endl;
    std::cout << "num:"<<num <<std::endl;
    std::cout <<"SwitchCode(num):"<<SwitchCode(num)<<std::endl;
    std::cout <<"num: " << num <<std::endl;
    return 0;
}

int Increase(int *number)
{       
    return ++(*number);

}
int SwitchCode(int &number)
{
   return  number *= (-1);
}