#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp;
    fopen_s(&fp, "hello.txt", "w+");    // ���� �������� �ּҸ� ����

    fputs("Hello 100", fp);

    rewind(fp);

    char buffer[100] = { 0, };
    int num1;

    fscanf_s(fp, "%s %d", buffer, _countof(buffer), &num1);
    printf("%s %d\n", buffer, num1);

    rewind(fp);
    memset(buffer, 0, sizeof(buffer));

    // ���� ũ��, �б� ũ��, �б� Ƚ���� ����
    fread_s(buffer, sizeof(buffer), 20, 5, fp);
    printf("%s\n", buffer);

    rewind(fp);
    memset(buffer, 0, sizeof(buffer));

    // ���� ũ��� �б� ũ�⸦ ����. �б� ũ��� 1�� ����
    fread_s(buffer, sizeof(buffer), sizeof(buffer), 1, fp);
    printf("%s\n", buffer);

    fclose(fp);

    return 0;
}
