#include <stdio.h>
#include <stdbool.h>


int length(int n) {
    int l = 1;
    while (n >= 10) {
        n /= 10;
        l++;
    }
    return l;
}


bool validate(long digits) {

    bool isSecond = false;
    int n_sum = 0;
    int n_len = length(digits);
    int A[n_len];

    for (int i = n_len - 1; i >= 0; i--)
    {
        A[i] = digits % 10;
        digits /= 10;
    }
    
    for (int i = n_len - 1; i >= 0; i--)
    {
        if (isSecond == true) {
            A[i] *= 2;

        }
        n_sum += A[i];
        isSecond = !isSecond;
    }

    if (n_sum % 10 == 0) {
        return true;
    }
    else {
        return false;
    }

}
    



int main () {
    long number = 123;
    if (validate(number) == true) {
        printf("True\n");
    }
    else {
        printf("False\n");
    }

    return 0;
}