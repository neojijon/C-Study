#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char name[20];
    int age;
    char address[100];
};

int main()
{
    struct Person *p1 = malloc(sizeof(struct Person));
    struct Person p2;

    strcpy(p1->name, "��浿");
    p1->age = 40;
    strcpy(p1->address, "����� ���ʱ� ������");
    
    memcpy(&p2, p1, sizeof(struct Person)); 

    printf("�̸�: %s\n", p2.name);
    printf("����: %d\n", p2.age);
    printf("�ּ�: %s\n", p2.address);

    free(p1);

    return 0;
}
