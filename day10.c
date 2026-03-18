#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int left, right, flag = 1;

    printf("Enter a string: ");
    scanf("%s", s);

    left = 0;
    right = strlen(s) - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            flag = 0;
            break;
        }
        left++;
        right--;
    }

    if (flag == 1)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}