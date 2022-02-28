#include <stdio.h>

typedef long long ll;

void kt_fibo(ll n) {
	ll a1 = 0, a2 = 1, a = a1 + a2;

	while (a < n) {
		a1 = a2;
		a2 = a;
		a = a1 + a2;
	}

	if (a == n || n == 0) printf("YES");
	else printf("NO");
}

int main() {
	int t; scanf("%d", &t);
	while (t--) {
		ll n; scanf("%lld", &n);
		kt_fibo(n);
		printf("\n");
	}
}