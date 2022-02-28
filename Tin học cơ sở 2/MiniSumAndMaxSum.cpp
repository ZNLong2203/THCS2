#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		long long x,y;
		scanf("%lld%lld",&x,&y);
		int a[10000];
		int a2[10000];
		int b[10000];
		int b2[10000];
		int dema=0;
		int demb=0;
		long long xetx=x;
		long long xety=y;
		while(x>0) {
			x/=10;
			dema++;
		}
		int xdema=dema;
		while(xdema-1>=0) {
			a[xdema-1]=xetx%10;
			xetx/=10;
			xdema--;
		}
		while(y>0) {
			y/=10;
			demb++;
		}
		int xdemb=demb;
		while(xdemb-1>=0) {
			b[xdemb-1]=xety%10;
			xety/=10;
			xdemb--;
		}
		for(int i=0;i<dema;i++) {
			a2[i]=a[i];
			if(a[i]==6) {
				a[i]=5;
			} else if(a[i]==5) {
				a2[i]=6;
			}
		}
		long long sominA=0;
		long long somaxA=0;
		for(int i=0;i<dema;i++) {
			sominA=sominA*10+a[i];
			somaxA=somaxA*10+a2[i];
		}
		for(int i=0;i<demb;i++) {
			b2[i]=b[i];
			if(b[i]==6) {
				b[i]=5;
			} else if(b[i]==5) {
				b2[i]=6;
			}
		}
		long long sominB=0;
		long long somaxB=0;
		for(int i=0;i<demb;i++) {
			sominB=sominB*10+b[i];
			somaxB=somaxB*10+b2[i];
		}
		printf("%lld %lld",sominA+sominB,somaxA+somaxB);
		printf("\n");
	}
}
