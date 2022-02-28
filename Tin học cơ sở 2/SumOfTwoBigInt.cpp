#include<stdio.h>
#include<string.h>
int main() {
	int t;
	scanf("%d\n",&t);
	while(t--) {
		char a[10000];
		scanf("%s",&a);
		long long dema=strlen(a);
		char b[10000];
		scanf("%s",&b);
		long long demb=strlen(b);
		int c[10000]={};
		int arr[10000]={};
		int brr[10000]={};
		int so1,so2;
		for(int i=0;i<strlen(a);i++) {
			arr[i]=a[i]-48;
		}
		for(int i=0;i<strlen(b);i++) {
			brr[i]=b[i]-48;
		}
		if(dema>demb) {
			while(dema>0) {
				if(arr[dema-1]+brr[demb-1]>=10) {
					c[dema-1]=(arr[dema-1]+brr[demb-1])%10;
					arr[dema-2]++;
				}	else {
					c[dema-1]=(arr[dema-1]+brr[demb-1]);
				}
				dema--;
				demb--;
			}
			if(arr[0]>=10) {
				printf("1");
			}
			for(int i=0;i<strlen(a);i++) {
				printf("%d",c[i]);
			}
			printf("\n");
		}	
			else {
			while(demb>0) {
				if(arr[dema-1]+brr[demb-1]>=10) {
					c[demb-1]=(arr[dema-1]+brr[demb-1])%10;
					brr[demb-2]++;
				}	else {
					c[demb-1]=(arr[dema-1]+brr[demb-1]);
				}
				demb--;
				dema--;
			}
			if(dema==demb && arr[0]+brr[0]>=10) {
				printf("1");
			}	else if(brr[0]>=10) {
					printf("1");
				}
			for(int i=0;i<strlen(b);i++) {
				printf("%d",c[i]);
			}
			printf("\n");
		}
	}
}

