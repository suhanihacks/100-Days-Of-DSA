#Problem: Read a string and check if it is a palindrome using two-pointer comparison.
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    scanf("%s", s);

    int l = 0, r = strlen(s) - 1;
    int ok = 1;

    while(l < r) {
        if(s[l] != s[r]) {
            ok = 0;
            break;
        }
        l++;
        r--;
    }

    if(ok) printf("YES");
    else printf("NO");

    return 0;
}
