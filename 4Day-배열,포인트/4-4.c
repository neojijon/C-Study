/*
_CRT_SECURE_NO_WARNINGS�� Microsoft Visual Studio���� ���Ǵ� ��ũ�η�, 
���� ��� ��Ȱ��ȭ�ϴ� �� ���˴ϴ�. 
�� ��ũ�θ� ����ϸ� �Ϻ� �Լ��鿡�� �߻��� �� �ִ� �Ϻ� ��� �޽����� �����ϰ�
�� �̻� �ش� ��� ǥ�õ��� �ʵ��� �� �� �ֽ��ϴ�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //������
    char *s1 = malloc(sizeof(char) * 10);
    char *s2 = malloc(sizeof(char) * 10);
    char *s3 = malloc(sizeof(char) * 10);

    printf("���ڿ��� �� �� �Է��ϼ���: \n");
    s1 = "Hello World!!! Friends";
    s2 = " My ";
    s3 = "Friends";

    printf("%s\n", s1);
    printf("%s\n", s2);
    printf("%s\n", s3);

    free(s1);
    free(s2);
    free(s3);

    return 0;
}
