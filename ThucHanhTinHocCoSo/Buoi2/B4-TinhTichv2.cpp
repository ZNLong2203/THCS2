#include<stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	while (t--){
		int n, m;
		scanf("%d%d", &n, &m);
		long long a[n];
		long long b[m];
		long long max = -100000000;
		long long min = 100000000;
		for (int i = 0; i < n; i++){
			scanf("%lld", &a[i]);
			if (max < a[i]){
				max = a[i];
			}
		}
		for (int j = 0; j < m; j++){
			scanf("%lld", &b[j]);
			if (min > b[j]){
				min = b[j];
			}
		}
		printf("%lld", max*min);
		printf("\n");
	}
}
