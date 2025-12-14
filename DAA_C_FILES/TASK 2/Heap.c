#include <stdio.h>

int main() {
    printf("CH.SC.U4CSE24144\n");

    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 1; i < n; i++) {
        int child = i;
        while (child > 0) {
            int parent = (child - 1) / 2;
            if (arr[parent] < arr[child]) {
                int temp = arr[parent];
                arr[parent] = arr[child];
                arr[child] = temp;
            } else
                break;
            child = parent;
        }
    }

    for (int i = n - 1; i > 0; i--) {
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        int parent = 0;
        while (1) {
            int left = 2 * parent + 1;
            int right = 2 * parent + 2;
            int largest = parent;

            if (left < i && arr[left] > arr[largest])
                largest = left;
            if (right < i && arr[right] > arr[largest])
                largest = right;

            if (largest != parent) {
                int temp2 = arr[parent];
                arr[parent] = arr[largest];
                arr[largest] = temp2;
                parent = largest;
            } else
                break;
        }
    }

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}
