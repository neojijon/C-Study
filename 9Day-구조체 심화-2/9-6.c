//������ typedef 
#include <stdio.h>
#include <string.h>

typedef struct student //�����Ǹ� ��,
{
    char name[10]; //10byte
    char id;        //1byte
    char bloodType[2];//2byte
} Student; //������ �ƴ� 

int main()
{
    Student  st; //�������ؼ� ���Ӱ� ���� ����
    
    strcpy(st.name,"Joey");
    printf("name = %s\n", st.name);

    st.id = 1;
    printf("id = %d\n", st.id);

    strcpy(st.bloodType,"AB");
    printf("Blood Type = %s\n", st.bloodType);
   
    return 0;
}