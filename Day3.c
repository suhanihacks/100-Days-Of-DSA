#Problem: Implement linear search to find key k in an array. Count and display the number of comparisons performed.
#include <stdio.h>

int main() {
    int n, key, count = 0, found = -1;
    scanf("%d", &n);

    int arr[100];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);

    for(int i = 0; i < n; i++) {
        count++;
        if(arr[i] == key) {
            found = i;
            break;
        }
    }

    if(found != -1) {
        printf("Found at index %d\n", found);
    } else {
        printf("Not Found\n");
    }

    printf("Comparisons = %d", count);

    return 0;
}
