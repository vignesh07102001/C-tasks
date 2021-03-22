
#include <stdio.h>

int main()
{
    int n, row, column, t;
    scanf("%d", &n);
	t = 2 * n - 1;
    row = t;
    column = t;
    int a[row][column], k, m, p;
    p = n;
    m = 0;
    for (k = 0; k < p; k++) {
        for (row = m; row < t; row++) {
            for (column = m; column < t; column++) {
                if (row == m || row == (t - 1) || column == m || column == (t - 1)) {
                    a[row][column] = n;
                    if (n == 1) {
                        break;
                    }
                }
            }
        }
        t = t - 1;
        n = n - 1;
        m = m + 1;
    }
    t = 2 * m - 1;
    for (row = 0; row < t; row++) {
        for (column = 0; column < t; column++) {
            printf("%d ", a[row][column]);
        }
        printf("\n");
    }

    return 0;
}
