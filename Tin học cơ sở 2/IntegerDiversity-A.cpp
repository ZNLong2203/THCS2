#include<stdio.h>
#include<math.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int n;
		scanf("%d",&n);
		int a[10000];
		int b[10000];
		int c[10000];
		int count=0;
		for(int i=0;i<n;i++) {
			scanf("%d",&a[i]);
			if(a[i]<0) {
				c[abs(a[i])]++;
			}	else if(a[i]>=0) {
				b[a[i]]++;
			}
		}
		for(int i=0;i<n;i++) {
			if(a[i]<0) {
				if(c[abs(a[i])]==1) {
					count++;
					c[a[i]]=0;
				}	else if(c[abs(a[i])]>1) {
					if(b[abs(a[i])]==0) {
						count++;
						b[abs(a[i])]++;
					}
					if(a[i]!=0) {
						count++;
						c[abs(a[i])]=0;	
					}
				}
			}	else {
				if(b[a[i]]==1) {
					count++;
					b[a[i]]=0;
				} else if(b[abs(a[i])]>1) {
					if(c[abs(a[i])]==0) {
						count++;
						c[abs(a[i])]++;
					} 
					if(a[i]!=0) {
						count++;
						b[abs(a[i])]=0;	
					}
			}
		}
	}
		printf("%d\n",count);
	}
}

