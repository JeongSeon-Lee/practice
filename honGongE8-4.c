#include <stdio.h>

int main(void) {
    char str[80] = "applejam";  // ���� ����� �ϳ��� �ʱ�ȭ�ϴ� ����� ���� �����Ƿ� ���ڿ� ����� �� ���� �ʱ�ȭ
    /* �ʱ�ȭ���� ���� ���¿��� */
    char str1[80];
    str1[0] = 'g';
    str1[1] = 'r';
    str1[2] = 'a';
    str1[3] = 'p';
    str1[4] = 'e';
    // str1[5] = '\0';

    printf("���� ��� ���� : %s\n", str1);

    printf("���� ���ڿ� : %s\n", str);
    printf("���ڿ� �Է� : ");
    scanf("%s", str);
    printf("�Է� �� ���ڿ� : %s\n", str);

    return 0;
}