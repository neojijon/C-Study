#include <stdio.h>

enum LuxSkill {
    LightBinding = 1,
    PrismaticBarrier,
    LucentSingularity,
    FinalSpark
};

int main()
{
    enum LuxSkill skill;     // ������ ���� ����

    skill = LightBinding;    // ������ �� �Ҵ�

    switch (skill)
    {
    case LightBinding:         // ������ ���� LightBinding�� ��
        printf("LightBinding\n");
        break;
    case PrismaticBarrier:     // ������ ���� PrismaticBarrier�� ��
        printf("PrismaticBarrier\n");
        break;
    case LucentSingularity:    // ������ ���� LucentSingularity�� ��
        printf("LucentSingularity\n");
        break;
    case FinalSpark:           // ������ ���� FinalSpark�� ��
        printf("FinalSpark\n");
        break;
    default:
        break;
    }

    return 0;
}
