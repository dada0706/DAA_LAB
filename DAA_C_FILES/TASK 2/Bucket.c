#include <stdio.h>

int main() {
    printf("CH.SC.U4CSE24144\n");

    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (0-99):\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Buckets (0–99)
    int bucket[100] = {0};

    // Counting items into buckets
    for (int i = 0; i < n; i++)
        bucket[arr[i]]++;

    // Reconstruct sorted array
    int index = 0;
    for (int i = 0; i < 100; i++) {
        while (bucket[i] > 0) {
            arr[index++] = i;
            bucket[i]--;
        }
    }

    printf("Bucket Sort Result: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}
