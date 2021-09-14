#include <stdio.h>
#include <stdbool.h>
int ri() {
    int n;
    scanf("%d", &n);
    return n;
}
int main() {
    int n = ri();
    int a[n];
    for (int i = 0; i < n; i++) a[i] = ri();
    int b[n];
    for (int i = 0; i < n; i++) b[i] = ri();

    int res = 0;
    for (int i = 1; i <= 1000; i++) {
        bool ok = true;
        for (int j = 0; j < n; j++) {
            if (i < a[j] || i > b[j])
                ok = false;
        }
        if (ok)
            res++;
    }

    printf("%d\n", res);
    return 0;
}
