#include <stdio.h>

struct Animal{
    char name[20];
    int age;  
    float weight;  
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
    float weight;
};

//중첩 구조체의 선언

int main()
{
    //중첩구조체의 초기화
    //선언
    struct Dog myDog;
    struct Cat myCat;

    // 각 변수에 값을 할당
    strcpy(myDog.dog.name, "멍멍이");
    myDog.dog.age = 3;
    myDog.dog.weight = 10.5f;
    strcpy(myDog.breed,"Golden Retriever");

    strcpy(myCat.name, "야옹이");
    myCat.age = 2;
    myCat.weight = 5.2;

    // 값을 출력하여 확인
    printf("Dog 정보: 이름=%s, 나이=%d세, 무게=%.2fkg , 품종=%s\n", myDog.dog.name, myDog.dog.age, myDog.dog.weight, myDog.breed);
    printf("Cat 정보: 이름=%s, 나이=%d세, 무게=%.2fkg\n", myCat.name, myCat.age, myCat.weight);

    return 0;
}