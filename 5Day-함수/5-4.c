//����� �Լ� ȣ��
#include <stdio.h>
//�ѱ� ����ϱ�
#include <wchar.h>
#include <locale.h>

int factorial(int n);

int main()
{
    int n;
    int result;
    
    setlocale(LC_ALL,""); // �ٱ��� �ʱ�ȭ   

    wprintf(L"������ �Է��Ͻÿ�:");
    scanf("%d",&n);

    result =  factorial(n);
    wprintf(L"%ld!�� ����� %ld �Դϴ�.\n", n, result);

    return 0;
}

int factorial(int n)
{
    if(n==1)
        return 1;
        
    return (n * factorial(n-1));
}
