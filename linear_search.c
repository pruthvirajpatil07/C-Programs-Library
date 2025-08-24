#include <stdio.h>

int linearSearch(int a[], int n, int key) {
    for (int i = 0; i < n; i++) if (a[i] == key) return i;
    return -1;
}

int main(void) {
    int n, key;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 1000) { printf("Invalid n\n"); return 1; }
    int arr[1000];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter key to search: ");
    scanf("%d", &key);

    int idx = linearSearch(arr, n, key);
    if (idx == -1) printf("Not found\n");
    else printf("Found at index %d\n", idx);
    return 0;
}
