#include <stdio.h>
#include "parson.h"    // parson.h ��� ���� ����

int main()
{
    JSON_Value *rootValue;
    JSON_Object *rootObject;

    /* �ʱ�ȭ */
    rootValue = json_parse_file("example.json");      // JSON ������ �о �Ľ�
    rootObject = json_value_get_object(rootValue);    // JSON_Value���� JSON_Object�� ����
    
    /* ��� */
    // ��ü���� Ű�� �ش��ϴ� ���ڿ��� ������
    printf("Title: %s\n", json_object_get_string(rootObject, "Title"));

    // ��ü���� Ű�� �ش��ϴ� ���ڸ� ������
    printf("Year: %d\n", (int)json_object_get_number(rootObject, "Year"));
    printf("Runtime %d\n", (int)json_object_get_number(rootObject, "Runtime"));

    // ��ü���� Ű�� �ش��ϴ� ���ڿ��� ������
    printf("Genre: %s\n", json_object_get_string(rootObject, "Genre"));
    printf("Director: %s\n", json_object_get_string(rootObject, "Director"));

    printf("Actors:\n");
    // ��ü���� Ű�� �ش��ϴ� �迭�� ������
    JSON_Array *array = json_object_get_array(rootObject, "Actors");
    for (int i = 0; i < json_array_get_count(array); i++)     // �迭�� ��� ������ŭ �ݺ�
    {
        // �迭�� �ε����� �����Ͽ� ���ڿ��� ������
        printf("  %s\n", json_array_get_string(array, i));
    }

    // ��ü���� Ű�� �ش��ϴ� ���ڸ� ������
    printf("imdbRating: %f\n", json_object_get_number(rootObject, "imdbRating"));

    // ��ü���� Ű�� �ش��ϴ� �� ���� ������
    printf("KoreaRelease: %d\n", json_object_get_boolean(rootObject, "KoreaRelease"));

    /* ���� */
    json_value_free(rootValue);    // JSON_Value�� �Ҵ�� ���� �޸� ����

    return 0;
}
