#include <stdio.h>

int main()
{
    //char buffer[100];

    //gets_s(buffer, sizeof(buffer));    // ǥ�� �Է¿��� ���ڿ��� �Է¹���
                                       // Visual Studio 2022

    //puts(buffer);    // ���ڿ��� ȭ��(ǥ�� ���)�� ���


    printf("������ ��¥�� %s�Դϴ�.\n", __DATE__);
    printf("������ �ð��� %s�Դϴ�.\n", __TIME__);
    printf("������ �ҽ������� %s�Դϴ�.\n", __FILE__);
    printf("������ ���ι�ȣ�� %d�Դϴ�.\n", __LINE__);

    return 0;
}
