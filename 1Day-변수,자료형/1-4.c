#include <stdio.h>
//�ѱ� ����ϱ�
#include <wchar.h>
#include <locale.h>

int main()
{
    int input1,input2;
    int total;

    setlocale(LC_ALL,"");

    wprintf(L"ù��° ������ �Է��ϼ���. :");
    scanf("%d", &input1);

    wprintf(L"�ι�° ������ �Է��ϼ���. :");
    scanf("%d", &input2);

    total = input1 + input2;
    wprintf(L"�� ���� ���� %d�̴�\n",total);

    return 0;
}