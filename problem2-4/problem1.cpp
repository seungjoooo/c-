#include<iostream>
#include <cstring>

int main()
{
    char arr[]="happy";
    char p1[100]="seungjoo";
    std::cout <<"arr�� ���ڿ� ����:"<<strlen(arr)<<std::endl;
    std::cout <<"p1�� ���ڿ� ����:"<<strlen(p1)<<std::endl;
    strcat(arr,p1);
    std::cout <<"arr�� ���ڿ�:"<<arr<<std::endl;
    std::cout <<"���ڿ� ���� :"<<strcpy(p1,arr)<<std::endl;
    if(strcmp(arr,p1))
        std::cout <<"�� �迭�� ���� �ٸ���"<<std::endl;
    else 
        std::cout <<"�� �迭�� ���� ����"<<std::endl;
    return 0;
}