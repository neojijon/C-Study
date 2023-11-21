#include <stdio.h>
#include <stdbool.h>    // bool, true, false�� ���ǵ� ��� ����
#include "parson.h"     // parson.h ��� ���� ����

int main()
{
    JSON_Value *rootValue;
    JSON_Object *rootObject;

    /* �ʱ�ȭ */
    rootValue = json_value_init_object();             // JSON_Value ���� �� �ʱ�ȭ
    rootObject = json_value_get_object(rootValue);    // JSON_Value���� JSON_Object�� ����

    /* ��� */
    // ��ü�� Ű�� �߰��ϰ� ���ڿ� ����
    json_object_set_string(rootObject, "Title", "Inception");

    // ��ü�� Ű�� �߰��ϰ� ���� ����
    json_object_set_number(rootObject, "Year", 2010);
    json_object_set_number(rootObject, "Runtime", 148);

    // ��ü�� Ű�� �߰��ϰ� ���ڿ� ����
    json_object_set_string(rootObject, "Genre", "Sci-Fi");
    json_object_set_string(rootObject, "Director", "Christopher Nolan");

    // ��ü�� Ű�� �߰��ϰ� �迭 ����
    json_object_set_value(rootObject, "Actors", json_value_init_array());

    // ��ü���� �迭 �����͸� ������
    JSON_Array *actors = json_object_get_array(rootObject, "Actors");

    // �迭�� ���ڿ� ��� �߰�
    json_array_append_string(actors, "Leonardo DiCaprio");
    json_array_append_string(actors, "Joseph Gordon-Levitt");
    json_array_append_string(actors, "Ellen Page");
    json_array_append_string(actors, "Tom Hardy");
    json_array_append_string(actors, "Ken Watanabe");

    // ��ü�� Ű�� �߰��ϰ� ���� ����
    json_object_set_number(rootObject, "imdbRating", 8.8);

    // ��ü�� Ű�� �߰��ϰ� �� �� ����
    json_object_set_boolean(rootObject, "KoreaRelease", true);

    // JSON_Value�� ����� �б� ���� ���ڿ�(pretty)�� ���� �� ���Ͽ� ����
    json_serialize_to_file_pretty(rootValue, "example.json");

    /* ���� */
    json_value_free(rootValue);    // JSON_Value�� �Ҵ�� ���� �޸� ����

    return 0;
}
