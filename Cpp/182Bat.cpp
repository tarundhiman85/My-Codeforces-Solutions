#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	
	int max = 0;
	int res = -1;
	for (int i = 2; i <= 1000; i++) {
		int cnt = 0;
		for (int j = 0; j < n; j++) if (a[j] % i == 0) cnt++;
		if (max < cnt) max = cnt, res = i;
	}
	printf("%d\n", res);
	return 0;
}