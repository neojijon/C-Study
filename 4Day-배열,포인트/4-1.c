#include <stdio.h>
//�ѱ� ����ϱ�
#include <wchar.h>
#include <locale.h>

int main()
{
    int number0 = 10;
	int number1 = 10;
	int number2 = 10;

    //�����ϰ� 
    int number[3] = {10,10,10}; //[0],[1],[2] �ε����� ���� ���� 3���� �����ϴ°Ͱ� ����.
    //int number[3] = {10,10};  //10,10,0 ���� �ʱ�ȭ��.
    //int number[3] = {10,};
    wchar_t arr[] =L"�迭�� �ʱ�ȭ ��";

    setlocale(LC_ALL,""); // �ٱ��� �ʱ�ȭ   
    
    wprintf(L"%ls %ld , %ld, %ld\n", arr, number[0],number[1],number[2]);

    return 0;    
}
