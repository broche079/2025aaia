///week11-1.cpp
///�禡/��� function

#include <stdio.h>
///�e�� �w�q �禡
///�e�X�Ӫ��Oint���
///     �e�X�Ӿ��a, ���b
int addnum(int a, int b)
{
    printf("�b�禡addnum()��, �o��Ѽ�a:%d b:%d\n", a, b);
    int ans = a+b;
    printf("��X���� %d �n return �X�h��\n", ans);
    return ans;/// ���X�Ӫ����G�ǥX�h
}
int main()
{/// �D�n���禡'�D�{��
    int ans = addnum(2, 3);
    printf("�o�쪺����:%d\n", ans);
}
