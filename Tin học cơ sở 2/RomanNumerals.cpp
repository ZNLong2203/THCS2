#include<stdio.h>
#include<string.h>
int main() {
	int t;
	scanf("%d\n",&t);
	while(t--) {
		char str[10000];
		gets(str);
		int a[10000];
		a['I']=1,a['V']=5,a['X']=10,a['L']=50,a['C']=100,a['D']=500,a['M']=1000;
		int sum=a[str[0]];
		int xet=a[str[0]];
		for(int i=1;i<strlen(str);i++) {
			if(a[str[i]] > a[str[i-1]]) {
				sum+=-2*xet+a[str[i]];
			}	else if(a[str[i]] < a[str[i-1]]) {
				sum+=a[str[i]];
				xet=a[str[i]];
			}	else {
				sum+=a[str[i]];
				xet+=a[str[i]];
			}
		}
		printf("%d \n",sum);
	}
}
