#include <stdio.h>

int main(void) {
    char str[80];
    char Alp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char alp[] = "abcdefghijklmnopqrstuvwxyz";
    int count = 0;
    int i = 0, j = 0;

    printf("문장 입력 : ");
    gets(str);

    while (str[count] != '\0')              // 입력 받은 문자열의 개수 - 1, 널 문자 위치
    {
        count++;
    }

    for (int i = 0; i < count; i++) {       // 실 문자들만 비교(널 문자 제외)
        for (int j = 0; j < 26; j++) {      // 입력받은 문자 하나에 모든 대문자 비교
            if (str[i] == Alp[j])           // 대문자라면
                str[i] = alp[j];            // 소문자로 바꿈
        }
    }

    printf("바뀐 문장 : %s", str);

    return 0;
}