/*
 ������ ����
    - C ��� �Ұ��� ����
    - ����, ������ Ÿ��, ������
    - �ּ� �ޱ�        
    - Hello World ���� ����ϱ�
*/

//����(build)==������(compile)+��ũ(link)
//- Hello World ����ϱ�

// standard ���̺귯���� �߰���.
#include <stdio.h>

// �����ּ�ó����
int main() 
{
    //�����ּ�
    //�ܼ�ȭ�鿡 ���ڸ� ����ϴ� �Լ�
    printf("Hello, World!\n");
    return 0;
}

/*
int main(int argc, char const *argv[]) // exe ���� �ڿ� �߰� �Ҽ� �ִ� �Ķ���͸� �߰��Ҽ� ����.
{
    //�ܼ�ȭ�鿡 ���ڸ� ����ϴ� �Լ�
    printf("Hello Wolrd");  
    //printf("Hello, World!\n");  

    //���� ���� ����ϱ�
    //printf("%s\n", "Hello, world!");
    
    for(int i=0; i < argc; i++)
    {
        printf("argv[%d]�� %s\n", i, argv[i] );
    }

    printf("argc�� %d�� �Դϴ�.\n", argc );

    return 0;
}
*/


