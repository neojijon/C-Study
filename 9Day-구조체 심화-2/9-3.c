#include <stdio.h>

struct Animal{
    char name[20];
    int age;  
    double weight;  
};

//중첩구조체
struct Dog{   
    struct Animal dog; //다른 구조체를 선언
    char breed[30]; //품종
};

//단일구조체
struct Cat {    
    char name[20];
    int age;   
    double weight;
};

//중첩 구조체의 선언

int main()
{
    //중첩구조체의 초기화
    //선언
    struct Dog myDog = { {"멍멍이", 3 , 10.5} ,"Golden Retriever" };
    struct Cat myCat[3] = { {"깜둥이", 5 , 5.2},
                            {"양양이", 4 , 3.2},
                            {"야옹이", 2 , 4.2}};

    // 값을 출력하여 확인
    printf("Dog 정보: 이름=%s, 나이=%d세, 무게=%.2fkg , 품종=%s\n", myDog.dog.name, myDog.dog.age, myDog.dog.weight, myDog.breed);

    for(int i=0; i < 3; i++)
    {
        printf("Cat 정보: 이름=%s, 나이=%d세, 무게=%.2fkg\n", myCat[i].name, myCat[i].age, myCat[i].weight);
    }
    

    return 0;
}