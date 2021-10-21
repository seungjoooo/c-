#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{
    int arr[10];
    srand(time(NULL));
    for (int i=0; i<5; i++)
    {
        arr[i]=rand() %100;
    }
    for (int i=0;i<5 ;i++)
    {
        std::cout <<"³­¼ö"<<i<<":" <<arr[i]<<std::endl;

    }
    
    return 0;
}