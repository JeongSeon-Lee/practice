#include <stdio.h>

int main(void) {
    char str[80] = "applejam";  // ���� ����� �ϳ��� �ʱ�ȭ�ϴ� ����� ���� �����Ƿ� ���ڿ� ����� �� ���� �ʱ�ȭ

    printf("���� ���ڿ� : %s\n", str);
    printf("���ڿ� �Է� : ");
    scanf("%s", str);
    printf("�Է� �� ���ڿ� : %s\n", str);

    return 0;
}