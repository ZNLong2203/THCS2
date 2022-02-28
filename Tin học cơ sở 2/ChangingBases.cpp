#include<stdio.h>
#include<string.h>
int main() {
	int t;
	scanf("%d",&t);
	char x[]={"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	while(t--) {
		int n,b;
		scanf("%d%d",&n,&b);
		char str[1000];
		char kq[1000];
		int i=0,j=0;
		while(n>0) {
			str[i]=x[n%b];
			i++;
			n/=b;
		}
		str[i]='\0';
		for(int i=strlen(str)-1;i>=0;i--) {
			kq[j]=str[i];
			j++;
		}
		kq[j]='\0';
		printf("%s\n",kq);
	}	
}
