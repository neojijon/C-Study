//�������� , ��������

#include <stdio.h>

int global;

//�Լ��� ���� ����
void Add(int a, int b);
void Result(); //����� �����ִ� �Լ�

int main()
{
    int a;
    int b;    

    printf(" a + b sum. input value :" ) ;
    scanf("%d%d",&a,&b);
    
    Add(a,b); //Add �Լ� ȣ��
    Result();

    return 0;
}

void  Result()
{
     printf(" a + b = Sum: %d\n", global);
     printf(" =============Programming End==============\n");
}

//�Լ��� ����
void Add(int a, int b)
{
    global =  a + b;
}

