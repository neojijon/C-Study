#include <stdio.h>

struct Animal{
    char name[20];
    int age;  
    double weight;  
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
    double weight;
};

//��ø ����ü�� ����

int main()
{
    //��ø����ü�� �ʱ�ȭ
    //����
    struct Dog myDog = { {"�۸���", 3 , 10.5} ,"Golden Retriever" };
    struct Cat myCat = { "�߿���", 2 , 5.2 };

    // ���� ����Ͽ� Ȯ��
    printf("Dog ����: �̸�=%s, ����=%d��, ����=%.2fkg , ǰ��=%s\n", myDog.dog.name, myDog.dog.age, myDog.dog.weight, myDog.breed);
    printf("Cat ����: �̸�=%s, ����=%d��, ����=%.2fkg\n", myCat.name, myCat.age, myCat.weight);

    return 0;
}