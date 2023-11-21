//구조체에 대해서 알아보자
//하나이상의 서로 다른 종류의 변수들을 묶어서 새로운 자료형을 정의하는 것이다.
#include <stdio.h>

struct Person
{
    int age; //나이
    char name[20]; //이름    
    int height; //키 
}sMan = { 10, "Joey", 150 }; //전역 구조체 생성과 동시에 변수 초기화

int main()
{
    struct Person man = { 20, "Tom", 160 }; 

    printf(" %s, %d, %d \n", &man.name, man.age, man.height);
    printf(" %s, %d, %d \n", &sMan.name, sMan.age, sMan.height);

    return 0;
}