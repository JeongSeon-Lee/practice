#include <stdio.h>

int main(void) {
    char str[80];
    char Alp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char alp[] = "abcdefghijklmnopqrstuvwxyz";
    int count = 0;
    int i = 0, j = 0;

    printf("���� �Է� : ");
    gets(str);

    while (str[count] != '\0')              // �Է� ���� ���ڿ��� ���� - 1, �� ���� ��ġ
    {
        count++;
    }

    for (int i = 0; i < count; i++) {       // �� ���ڵ鸸 ��(�� ���� ����)
        for (int j = 0; j < 26; j++) {      // �Է¹��� ���� �ϳ��� ��� �빮�� ��
            if (str[i] == Alp[j])           // �빮�ڶ��
                str[i] = alp[j];            // �ҹ��ڷ� �ٲ�
        }
    }

    printf("�ٲ� ���� : %s", str);

    return 0;
}