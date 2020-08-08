#include <stdio.h>


int persistence(int n) {

    int ost = 1;
    if (n < 10)
    {
        return 0;
    }
    else {
        while(n != 0) {
            ost = ost * (n % 10);
            n /= 10;
        }
        return persistence(ost) + 1;
        
    }
  
}

/*another way

int persistence(int n)
{
    int m, p = 0;
    while (n > 9) {
        ++p;
        m = n % 10;
        while (n /= 10)
            m *= n % 10;
        n = m;
    }
    return p;
}
*/



int main() {
    int x;
    printf("Enter the number to persist : ");
    scanf("%d", &x);

    printf("Number of persistances is %d\n", persistence(x));
    return 0;
}