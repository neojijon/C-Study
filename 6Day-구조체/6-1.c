//����ü�� ���ؼ� �˾ƺ���
//�ϳ��̻��� ���� �ٸ� ������ �������� ��� ���ο� �ڷ����� �����ϴ� ���̴�.
#include <stdio.h>

struct Person
{
    int age; //����
    char name[20]; //�̸�    
    int height; //Ű 
}sMan,sWomen; //���� ����ü ���� ����

int main()
{
    struct Person man; //����ü ���� ����
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
