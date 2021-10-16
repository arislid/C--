#include <stdio.h>

// sscanf는 c언어 레퍼런스 함수로, 제공된 버퍼에서 형식화된 자료형을 읽어오는 함수이다.
// reference: https://eastroot1590.tistory.com/entry/CC-sscanf-sscanfs

int main(void)
{
    const char *c_str = "Hello, I am Minji. I'm 30 years old";
    char str[] = "There are 30 Ducks";
    char animal[10];
    char *name;
    int count;

    sscanf(str, "%*s %*s %d %s", &count, animal);

    printf("count: %d, animal: %s\n", count, animal);

    sscanf(c_str, "%*s %*s %*s %s", name);
    // %[^','], : ,로 문자열 잘라내는 포맷
    
    printf("str : %s\n", c_str);
    printf("name: %s\n", name);
    return 0;
}