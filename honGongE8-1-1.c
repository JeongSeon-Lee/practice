#include <stdio.h>

int main(void) {
    int ary1[5] = {1, 2, 3};
    int ary2[10] = {0};
    int ary3[] = {1, 2, 3};
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("%d ", ary1[i]);
    }
    printf("\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", ary2[i]);
    }
    printf("\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", ary3[i]);
    }
    
    return 0;
}