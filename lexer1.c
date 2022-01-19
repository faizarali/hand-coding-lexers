#include <stdio.h>
#include <assert.h>

int main() {
    char c;
    printf("recognizing regex\n");
    // ab
    c = fgetc(stdin);
    assert('a' == c);
    c = fgetc(stdin);
    assert('b' == c);
    printf("recognized\n");
    return 0;
}