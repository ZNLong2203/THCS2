#include<stdio.h>
#include<string.h>

void show(char s1[100], s2[100], s3[100]) {
    for (int i = 0;i<='z';i++) {
        if (s1[i]>='A' && s1[i]<='Z') {
            s1[i] += 32;
        }  
    for (int i = 0;i<='z';i++) {
        if (s2[i]>='A' && s2[i]<='Z') {
            s2[i] += 32;
        }  
    for (int i = 0;i<='z';i++) {
        if (s3[i]>='A' && s3[i]<='Z') {
            s3[i] += 32;
        }  
    }
}

int main() {
    char s1[100], s2[100], s3[100];
    scanf("%s %s %s", s1, s2, s3);
    show(s1);
    show(s2);
    show(s3);
    return 0;
}