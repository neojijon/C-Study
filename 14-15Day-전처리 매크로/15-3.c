#include <stdio.h>

//�ѱ� ����ϱ�
#include <wchar.h>
#include <locale.h>

#define  SIZE 5

int main(){
    
    char str[SIZE] = "Love";
    int i;

    setlocale(LC_ALL,""); // �ٱ��� �ʱ�ȭ   

    for(i=0; i < SIZE; i++)
    {
        wprintf(L"�迭�� ��� %d�� %c \n", i, str[i]);
    }

    return 0;
}
