#include <stdio.h>

struct Animal{
    char name[20];
    int age;  
    float weight;  
};

//��ø����ü
struct Dog{   
    struct Animal dog; //�ٸ� ����ü�� ����
    char breed[30]; //ǰ��
};

//���ϱ���ü
struct Cat {    
    char name[20];
    int age;   
    float weight;
};

//��ø ����ü�� ����

int main()
{
    //��ø����ü�� �ʱ�ȭ
    //����
    struct Dog myDog;
    struct Cat myCat;

    // �� ������ ���� �Ҵ�
    strcpy(myDog.dog.name, "�۸���");
    myDog.dog.age = 3;
    myDog.dog.weight = 10.5f;
    strcpy(myDog.breed,"Golden Retriever");

    strcpy(myCat.name, "�߿���");
    myCat.age = 2;
    myCat.weight = 5.2;

    // ���� ����Ͽ� Ȯ��
    printf("Dog ����: �̸�=%s, ����=%d��, ����=%.2fkg , ǰ��=%s\n", myDog.dog.name, myDog.dog.age, myDog.dog.weight, myDog.breed);
    printf("Cat ����: �̸�=%s, ����=%d��, ����=%.2fkg\n", myCat.name, myCat.age, myCat.weight);

    return 0;
}