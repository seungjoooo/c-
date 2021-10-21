#include<iostream>
#include <cstring>

int main()
{
    char arr[]="happy";
    char p1[100]="seungjoo";
    std::cout <<"arr의 문자열 길이:"<<strlen(arr)<<std::endl;
    std::cout <<"p1의 문자열 길이:"<<strlen(p1)<<std::endl;
    strcat(arr,p1);
    std::cout <<"arr의 문자열:"<<arr<<std::endl;
    std::cout <<"문자열 복사 :"<<strcpy(p1,arr)<<std::endl;
    if(strcmp(arr,p1))
        std::cout <<"두 배열은 서로 다르다"<<std::endl;
    else 
        std::cout <<"두 배열은 서로 같다"<<std::endl;
    return 0;
}