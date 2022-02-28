#include<stdio.h>
#include<math.h>
int check(long long a[],int n) {
	float x,y,z,max,min;
	float xet1,xet2;
	for(int i=0;i<n;i++) {
		for(int j=i+1;j<n;j++) {
			x=a[i]*a[i];
			y=a[j]*a[j];
			if(y>x) {
				max=y;
				min=x;
			}	else {
				max=x;
				min=y;
			}
			xet1=sqrt(x+y);
			if(xet1==(int)xet1) {
				for(int k=j+1;k<n;k++) {
					if(a[k]==(int)xet1) {
						return 1;
					}
				}
			}
			xet2=sqrt(max-min);
			if(xet2==(int)xet2 && xet2!=0) {
				for(int k=j+1;k<n;k++) {
					if(a[k]==(int)xet2) {
						return 1;
					}
				}
			}
		}
	}
	return 0;
}
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int n;
		scanf("%d",&n);
		long long a[10000];
		for(int i=0;i<n;i++) {
			scanf("%lld",&a[i]);
		}
		if(check(a,n)==1) {
			printf("YES\n");
		}	else {
			printf("NO\n");
		}
	}
}
