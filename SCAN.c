#include <stdio.h>

int main() {
    int i, j, sum = 0, n;
    int d[20];
    int disk; //loc of head
    int temp, max;
    int dloc; //loc of disk in array

    printf("Enter number of locations: ");
    scanf("%d", &n);

    printf("Enter position of head: ");
    scanf("%d", &disk);

    printf("Enter elements of disk queue:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &d[i]);
    }

    d[n] = disk;
    n = n + 1;

    // Sorting disk locations
    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {
            if (d[i] > d[j]) {
                temp = d[i];
                d[i] = d[j];
                d[j] = temp;
            }
        }
    }

    max = d[n - 1]; // changed from max = d[n];

    // To find loc of disc in array
    for (i = 0; i < n; i++) {
        if (disk == d[i]) {
            dloc = i;
            break;
        }
    }

    // Printing disk queue
    printf("Disk queue: ");
    for (i = dloc; i >= 0; i--) {
        printf("%d --> ", d[i]);
    }

    printf("0 --> ");
    for (i = dloc + 1; i < n; i++) {
        printf("%d --> ", d[i]);
    }

    sum = disk + max;
    printf("\nMovement of total cylinders: %d", sum);

    return 0;
}
