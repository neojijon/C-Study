void increase(int *a, int *b, int *x)
{
    *a += *x;   // x�� �������Ͽ� ������ ����ŭ *a�� �������Ͽ� ���� ������Ŵ
    *b += *x;   // x�� �������Ͽ� ������ ����ŭ *b�� �������Ͽ� ���� ������Ŵ
}

int main()
{
    {
        int a = 1;
        increase(&a, &a, &a);   // &a, &a, &a�� ���� ������ ����Ŵ
    }

    {
        int a = 1;
        int b = 1;
        int x = 1;
        increase(&a, &b, &x);   // &a, &b, &x�� �ٸ� ������ ����Ŵ
    }

    return 0;
}
