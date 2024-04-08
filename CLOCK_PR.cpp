#include <stdio.h>

void clockPRA(int n, int page[], int size) {
  int frames[n], use[n], fault = 0, locat = 0, found, i, j;

  // Initialize all array elements to 0
  for (i = 0; i < n; i++) {
    frames[i] = 0;
    use[i] = 0;
  }

  for (i = 0; i < size; i++) {
    found = 0; // Reset found flag
    // Check if page is in memory
    for (j = 0; j < n; j++) {
      if (page[i] == frames[j]) {
        found = 1;
        use[j] = 1; // Mark as used
      }
    }
    if (found == 0) {
      do {
        // If bit is 0 or NULL, load in page
        if (use[locat] == 0) {
          frames[locat] = page[i];
          use[locat] = 1; // Mark as used
          fault++;
          found = 1;
        } else {
          // Reset use bit
          use[locat] = 0;
        }
        // Move pointer
        locat++;
        if (locat == n) {
          locat = 0; // Reset pointer
        }
      } while (found != 1);
    }
  }
  printf("Number of Clock faults: %d\n", fault);
}

int main() {
  int n, size, i;

  printf("Enter the number of frames: ");
  scanf("%d", &n);

  printf("Enter the size of the page reference string: ");
  scanf("%d", &size);

  int page[size];
  printf("Enter the page reference string: ");
  for (i = 0; i < size; i++) {
    scanf("%d", &page[i]);
  }

  clockPRA(n, page, size);

  return 0;
}
