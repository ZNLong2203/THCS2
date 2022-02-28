#include <stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int n;
		scanf("%d", &n);
		long long ans = 1;
		long long f = 0;
		int count = 1;
		long long k;
		while (count < n){
			k = ans;
			ans = ans + f;
			f = k;
			count++;
		}
		printf("%lld\n", ans);
	}
}
