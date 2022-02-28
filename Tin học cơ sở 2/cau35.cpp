#include <stdio.h>
#include <math.h>
int solve(string s) {
    long long even = 0, odd = 0;
    for (int i = 0; i < s.size(); i++) {
        if (i % 2 == 0)
            even += s[i] - '0';
        else
            odd += s[i] - '0';
    }
    if (abs(even - odd) % 11 == 0)
        printf("1\n");
    else
        printf("0\n");
}
int main()
{
    int t;
    scanf("%d",&t);
    while (t--) {
        cin.ignore();
        string s;
        scanf("s",s);
        solve(s);
    }
}
