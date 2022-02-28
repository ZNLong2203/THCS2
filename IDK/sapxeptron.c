#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[100];
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    int m;
    scanf("%d",&m);
    int b[100];
    for(int i=0;i<m;i++) {
        scanf("%d",&b[i]);
    }
    int total = n+m;
    for(int i=n;i<total;i++) {
        a[i]=b[i-n];
    }
    for(int i=0;i<total;i++) {
        for(int j=i+1;j<total;j++) {
            if(a[i]>a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(int i=0;i<n+m;i++) {
        printf("%d ",a[i]);
    }
}dgdlkzg;s,sfvls,;bdgl;d,gdafpodsa,fow,faweof,ơp,fawopfsgalf,og,osg,,odbp,owf,psf,ps,gsp[,g]