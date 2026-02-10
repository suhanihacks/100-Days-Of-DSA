#Problem: A secret system stores code names in forward order. To display them in mirror format, you must transform the given code name so that its characters appear in the opposite order.
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    scanf("%s", s);

    int l = 0, r = strlen(s) - 1;
    while(l < r) {
        char t = s[l];
        s[l] = s[r];
        s[r] = t;
        l++;
        r--;
    }

    printf("%s", s);
    return 0;
}
