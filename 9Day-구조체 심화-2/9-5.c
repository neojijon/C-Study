#include <stdio.h>
#include <string.h>

//����ü����
//�޸𸮸� ���� ���
//����ū ���� name�� ũ��� ����ü �޸� 10����Ʈ

union student
{
    char name[10];    //10byte ����ū 10byte�� ������ ���� �����.
    char id;          //1byte
    char bloodType[2];//2byte  
}st;


struct teacher
{
    char name[10]; //10byte
    char id;        //1byte
    char bloodType[2];//2byte
}te;

int main()
{
    printf("sizeof(st) = %d\n", sizeof(st)); //���Ͽ��� �޸� ��������
    printf("sizeof(te) = %d\n", sizeof(te)); //����ü�� �޷θ� ������ ���

    strcpy(st.name,"Joey");
    printf("name = %s\n", st.name);

    st.id = 1;
    printf("id = %d\n", st.id);

    strcpy(st.bloodType,"AB");
    printf("Blood Type = %s\n", st.bloodType);
   
    printf("name = %s\n", st.name);  //�̹� �ٸ������ ����Ǿ����.

    return 0;
}