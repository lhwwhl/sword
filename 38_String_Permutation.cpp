#include <cstdio>

void Permutation(char *str, char *begin);

void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

void Permutation(char *str) {
    if(str == nullptr)
        return;
    Permutation(str, str);
}

void Permutation(char *str, char *begin) {
    if(*begin == '\0')
        printf("%s\n", str);
    else {
        for(char *ptr = begin; *ptr!='\0'; ++ptr) {
            swap(ptr, begin);
            Permutation(str, begin+1);
            swap(ptr, begin);
        }
    }
}

// ====================测试代码====================
void Test(char* pStr) {
    if(pStr == nullptr)
        printf("Test for nullptr begins:\n");
    else
        printf("Test for %s begins:\n", pStr);

    Permutation(pStr);

    printf("\n");
}

int main(int argc, char* argv[]) {
    Test(nullptr);

    char string1[] = "";
    Test(string1);

    char string2[] = "a";
    Test(string2);

    char string3[] = "ab";
    Test(string3);

    char string4[] = "abc";
    Test(string4);

    return 0;
}
