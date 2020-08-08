#include <stdio.h>
#include <stdlib.h>

/* int main () {

    int N,t;
    printf("Enter size of array to create : ");
    scanf("%d", &N);

    char *A = (char*) malloc(N);
    if (NULL == A) {
        printf("OS didn't give memory. Exit...\n");
        exit(1);
    }

    for (int i = 0; i < N; i++)
    {
        A[i] = i;
    }

    printf("Array successfully created!\n");
    system("pause");

    return 0;
}
*/

int main() {

    double *pd = (double *)malloc(10 * sizeof(double));
    if (pd != NULL)
    {
        for (double *p = pd; p < pd + 10; p++) {
            *p = 0.0;
        }
        printf("Все в порядке!\n");
    } else {
        printf("Не удалось выделить память!");
    }
    return 0;
}