//����ü�� ���ؼ� �˾ƺ���
//�ϳ��̻��� ���� �ٸ� ������ �������� ��� ���ο� �ڷ����� �����ϴ� ���̴�.
#include <stdio.h>

struct Person
{
    int age; //����
    char name[20]; //�̸�    
    int height; //Ű 
}sMan = { 10, "Joey", 150 }; //���� ����ü ������ ���ÿ� ���� �ʱ�ȭ

int main()
{
    struct Person man = { 20, "Tom", 160 }; 

    printf(" %s, %d, %d \n", &man.name, man.age, man.height);
    printf(" %s, %d, %d \n", &sMan.name, sMan.age, sMan.height);

    return 0;
}