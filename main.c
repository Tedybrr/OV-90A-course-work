#include <stdio.h>

int main() {

    int n;
    printf("Enter matrix dimensions: ");
    scanf("%d", &n);

    int a[n][n];
    int m, k, l, count = 0;

    printf("\nSet the elements in the matrix to zero if "
           "their sum with M is an even number in range [K-L]\n");
    printf("Solution by Olga Valerianova\n");

    printf("\nEnter matrix elements\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            do {
                printf("Matrix[%d][%d]: ", i, j);
                scanf("%d", &a[i][j]);
            } while (!(a[i][j] >= -1000 && a[i][j] <= 1000));
        }
    }


    printf("\nYour matrix\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("\nEnter a term: ");
    scanf("%d", &m);
    printf("\nEnter range 'k l': ");
    scanf("%d %d", &k, &l);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int sum = a[i][j] + m;
            if (sum % 2 == 0 && sum >= k && sum <= l) {
                a[i][j] = 0;
                count++;
            }
        }
    }

    printf("\nModified matrix\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("%d elements have been changed.", count);

    return 0;
}