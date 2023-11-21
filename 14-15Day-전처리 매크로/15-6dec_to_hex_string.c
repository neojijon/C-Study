#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    int decimal = 300;                // 10���� 300
    char hexadecimal[20] = { 0, };    // 16������ �� ���ڿ��� ������ �迭
    
    int position = 0;
    while (1)
    {
        int mod = decimal % 16;    // 16���� �������� �� �������� ����
        if (mod < 10) // �������� 10���� ������
        {
            // ���� 0�� ASCII �ڵ� �� 48 + ������
            hexadecimal[position] = 48 + mod;
        }
        else    // �������� 10���� ũ�ų� ������
        {
            // ���������� 10�� �� ���� ���� �빮�� A�� ASCII �ڵ� �� 65�� ����
            hexadecimal[position] = 65 + (mod - 10);
        }

        decimal = decimal / 16;    // 16���� ���� ���� ����

        position++;    // �ڸ��� ����

        if (decimal == 0)    // ���� 0�̵Ǹ� �ݺ��� ����
            break;
    }

    // �迭�� ��Ҹ� �������� ���
    for (int i = position - 1; i >= 0; i--)
    {
        printf("%c", hexadecimal[i]);
    }

    printf("\n");

    return 0;
}
