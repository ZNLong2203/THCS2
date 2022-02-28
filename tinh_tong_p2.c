#include<stdio.h>
void errMessage(FILE *f) {
    fprintf(f, "FILE NOT FOUND OR INVALID VALUE");
}
void doActions(long long n, int *sum, int *count) {
    int count = 0;
    while(n > 0) {
        (*sum) += n % 10;
        n/=10;
        (*count) ++;
    }
}

int main() {
    FILE *fRead = fopen("INPUT4.IN", "r");
    FILE *fWrite = fopen("OUTPUT4.OUT", "w");
    long long n;
    if(fRead) {
        fscanf(fRead, "%lld", &n);
        if (n <= 0) {
            errMessage(fWrite);
        } else {
            int sum = 0;
            int count = 0;
            doActions(n, &sum,&count);
            if (count >= 13 || count == 0) {
                errMessage(fWrite);
            }   else {
                fprint(fWrite,"%f", (float)sum / count);
            }
        }
    }
}