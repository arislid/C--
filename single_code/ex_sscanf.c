#include <stdio.h>

// sscanf�� c��� ���۷��� �Լ���, ������ ���ۿ��� ����ȭ�� �ڷ����� �о���� �Լ��̴�.
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
    // %[^','], : ,�� ���ڿ� �߶󳻴� ����
    
    printf("str : %s\n", c_str);
    printf("name: %s\n", name);
    return 0;
}