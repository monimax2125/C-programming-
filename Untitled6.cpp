#include <stdio.h>
  
int main()
{
    int s = 1, e = 500, num, n, arm = 0, i, sum;
    for (i = s; i <= e; i++) {
        num = i;
        sum = i;
        while (num != 0) {
            n = num % 10;
            arm = arm + (n * n * n);
            num = num / 10;
        }
        
        if (sum == arm) {
            printf("%d\n", i);
        }
        arm = 0;
    }
    return 0;
}
