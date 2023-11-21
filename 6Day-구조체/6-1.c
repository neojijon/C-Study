//구조체에 대해서 알아보자
//하나이상의 서로 다른 종류의 변수들을 묶어서 새로운 자료형을 정의하는 것이다.
#include <stdio.h>

struct Person
{
    int age; //나이
    char name[20]; //이름    
    int height; //키 
}sMan,sWomen; //전역 구조체 변수 선언

int main()
{
    struct Person man; //구조체 변수 선언
    man.age = 20;    
    man.height = 175;
    strcpy(man.name,"Jun");

    sMan.age = 10;
    sMan.height = 175;
    strcpy(sMan.name,"Tom");

    sWomen.age = 30;
    sWomen.height = 162;
    strcpy(sWomen.name,"Jelly");

    printf(" %s, %d, %d \n", &man.name, man.age, man.height);
    printf(" %s, %d, %d \n", &sMan.name, sMan.age, sMan.height);
    printf(" %s, %d, %d \n", &sWomen.name, sWomen.age, sWomen.height);
    
    return 0;
}
