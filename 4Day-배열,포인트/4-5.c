#include <stdio.h>
#include <string.h>    // strchr �Լ��� ����� ��� ����

int main()
{
    char s1[30] = "A Garden Diary";  // ũ�Ⱑ 30�� char�� �迭�� �����ϰ� ���ڿ� �Ҵ�

    char *ptr = strchr(s1, 'a');     // 'a'�� �����ϴ� ���ڿ� �˻�, ������ ��ȯ

    while (ptr != NULL)              // �˻��� ���ڿ��� ���� ������ �ݺ�
    {
        printf("%s\n", ptr);         // �˻��� ���ڿ� ���
        ptr = strchr(ptr + 1, 'a');  // �����Ϳ� 1�� ���Ͽ� a �������� �˻�
    }

    return 0;
}
