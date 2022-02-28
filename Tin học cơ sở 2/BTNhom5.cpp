#include<stdio.h>
int main() {
	long long a,b,f,k;
	scanf("%lld%lld%lld%lld",&a,&b,&f,&k);
	int count=0;
	int xang=b;
	long long HG_xang=a-f;
	while(k>0) {
		xang=xang-a;
		if(xang-f>=0) { //xe dang o cho bom hanh trinh 2
			count++;
			k--;
			int xang=b;
			xang=xang-f;
		} else { // xe dang o cho bom hanh trinh 1
			count++;
			k--;
			int xang=b;
			xang=xang-HG_xang*2;
			if(xang-2*f>0) {
				xang=xang-f;
				k--;
			}	else {
				xang=b;
				xang-=f;
				count++;
				k--;
			}
		}
	}
	printf("%d",count);
}
