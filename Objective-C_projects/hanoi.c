#include <stdio.h>

void hanoi(int n, int i, int k);

int main() {
    hanoi(4, 1, 3);
    return 0;
}



void hanoi(int n, int i, int k) {

    if (n == 1) {
        printf("Move disk 1 from pin %d to %d.\n", i, k);

    } else {
        int tmp = 6 - i - k;
        hanoi(n - 1, i, tmp);
        printf("Move disk %d from pin %d to %d.\n", n, i, k);
        hanoi(n - 1, tmp, k);
    }
}