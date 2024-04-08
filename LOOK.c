#include <stdio.h>
#include <stdlib.h>

int main() {
    int RQ[100], schedule[100], i, j, n, TotalHeadMoment = 0, initial, size, move;

    printf("Enter the number of Requests\n");
    scanf("%d", &n);

    printf("Enter the Requests sequence\n");
    for (i = 0; i < n; i++)
        scanf("%d", &RQ[i]);

    printf("Enter initial head position\n");
    scanf("%d", &initial);

    printf("Enter total disk size\n");
    scanf("%d", &size);

    printf("Enter the head movement direction for high 1 and for low 0\n");
    scanf("%d", &move);

    // Logic for sorting the request array
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (RQ[j] > RQ[j + 1]) {
                int temp = RQ[j];
                RQ[j] = RQ[j + 1];
                RQ[j + 1] = temp;
            }
        }
    }

    int index;
    for (i = 0; i < n; i++) {
        if (initial < RQ[i]) {
            index = i;
            break;
        }
    }

    // If movement is towards high value
    if (move == 1) {
        int k = 0;
        for (i = index; i < n; i++) {
            TotalHeadMoment += abs(RQ[i] - initial);
            initial = RQ[i];
            schedule[k++] = RQ[i];
        }
        for (i = index - 1; i >= 0; i--) {
            TotalHeadMoment += abs(RQ[i] - initial);
            initial = RQ[i];
            schedule[k++] = RQ[i];
        }
    }
    // If movement is towards low value
    else {
        int k = 0;
        for (i = index - 1; i >= 0; i--) {
            TotalHeadMoment += abs(RQ[i] - initial);
            initial = RQ[i];
            schedule[k++] = RQ[i];
        }
        for (i = index; i < n; i++) {
            TotalHeadMoment += abs(RQ[i] - initial);
            initial = RQ[i];
            schedule[k++] = RQ[i];
        }
    }

    printf("Schedule sequence: ");
    printf("%d ", initial);
    for (i = 0; i < n; i++) {
        printf("%d ", schedule[i]);
    }
    printf("\nTotal head movement is %d\n", TotalHeadMoment);

    return 0;
}
