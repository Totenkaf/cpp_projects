#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>



int main() {

    int numbers[] = {1, 2, 10};
    printf("%ld\n", sizeof(numbers[0]));

    return 0;
}