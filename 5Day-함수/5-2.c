#include <stdio.h>

//�Լ��� ���� ����
int Add(int a, int b);
void Result(int result); //����� �����ִ� �Լ�

int main()
{
    int a;
    int b;
    int sum;


    printf(" a + b sum. input value :" ) ;
    scanf("%d%d",&a,&b);
    //sum = a + b;
    sum = Add(a,b); //Add �Լ� ȣ��

    //printf(" a + b = Sum: %d\n", sum);
    Result(sum);

    return 0;
}

void  Result(int result)
{
     printf(" a + b = Sum: %d\n", result);
     printf(" =============Programming End==============\n");
}

//�Լ��� ����
int Add(int a, int b)
{
    return a + b;
}

