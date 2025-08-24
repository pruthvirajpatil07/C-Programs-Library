#include <stdio.h>

// Assumes array is sorted ascending
int binarySearch(int a[], int n, int key) {
    int lo = 0, hi = n - 1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (a[mid] == key) return mid;
        else if (a[mid] < key) lo = mid + 1;
        else hi = mid - 1;
    }
    return -1;
}

int main(void) {
    int n, key;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 1000) { printf("Invalid n\n"); return 1; }
    int arr[1000];
    printf("Enter %d sorted integers (ascending): ", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter key to search: ");
    scanf("%d", &key);

    int idx = binarySearch(arr, n, key);
    if (idx == -1) printf("Not found\n");
    else printf("Found at index %d\n", idx);
    return 0;
}
