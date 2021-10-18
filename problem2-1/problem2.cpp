#include <iostream>
void SwapPointer(int *ptr1,int *ptr2);
int main()
{
    int num1=5;
    int *ptr1 = &num1;
    int num2 =10;
    int *ptr2 = &num2;
    SwapPointer(&num1,&num2);
    std::cout <<"num1:"<<num1<<std::endl;
    std::cout << "num2:"<<num2<<std::endl;
    return 0;
}
void SwapPointer(int *ptr1, int *ptr2)
{
    int temp=*ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

}