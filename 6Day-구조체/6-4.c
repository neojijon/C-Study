//����ü�� ���ؼ� �˾ƺ���
//�ϳ��̻��� ���� �ٸ� ������ �������� ��� ���ο� �ڷ����� �����ϴ� ���̴�.
#include <stdio.h>

struct Person
{
    int age; //����
    char name[20]; //�̸�    
    int height; //Ű 
}sMan[3] = { 
    {10, "Joey1", 150 },//�迭[0]
    {15, "Joey2", 160 },//�迭[1]
    {17, "Joey3", 170 },//�迭[2]
    }; 
    //���� ����ü�� �迭

int main()
{
    struct Person man = { 20, "Tom", 160 }; 

    printf(" %s, %d, %d \n", &man.name, man.age, man.height);
    printf(" %s, %d, %d \n", &sMan[0].name, sMan[0].age, sMan[0].height);
    printf(" %s, %d, %d \n", &sMan[1].name, sMan[1].age, sMan[1].height);
    printf(" %s, %d, %d \n", &sMan[2].name, sMan[2].age, sMan[2].height);


    return 0;
}