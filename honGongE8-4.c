#include <stdio.h>

int main(void) {
    char str[80] = "applejam";  // 문자 상수로 하나씩 초기화하는 방법은 쉽지 않으므로 문자열 상수로 한 번에 초기화
    /* 초기화하지 않은 상태에서 */
    char str1[80];
    str1[0] = 'g';
    str1[1] = 'r';
    str1[2] = 'a';
    str1[3] = 'p';
    str1[4] = 'e';
    // str1[5] = '\0';

    printf("문자 상수 대입 : %s\n", str1);

    printf("최초 문자열 : %s\n", str);
    printf("문자열 입력 : ");
    scanf("%s", str);
    printf("입력 후 문자열 : %s\n", str);

    return 0;
}