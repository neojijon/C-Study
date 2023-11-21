//구조체에 대해서 알아보자
//하나이상의 서로 다른 종류의 변수들을 묶어서 새로운 자료형을 정의하는 것이다.
#include <stdio.h>

struct Person
{
    int age; //나이
    char name[20]; //이름    
    int height; //키 
}sMan[3] = { 
    {10, "Joey1", 150 },//배열[0]
    {15, "Joey2", 160 },//배열[1]
    {17, "Joey3", 170 },//배열[2]
    }; 
    //전역 구조체의 배열

int main()
{
    struct Person man = { 20, "Tom", 160 }; 

    printf(" %s, %d, %d \n", &man.name, man.age, man.height);
    printf(" %s, %d, %d \n", &sMan[0].name, sMan[0].age, sMan[0].height);
    printf(" %s, %d, %d \n", &sMan[1].name, sMan[1].age, sMan[1].height);
    printf(" %s, %d, %d \n", &sMan[2].name, sMan[2].age, sMan[2].height);


    return 0;
}