#include <stdio.h>
#include <string.h>
 
int main()
{
    //your code goes here
    int n;
    scanf("%d", &n);
    char a[n];
    scanf("%s", a);
 
    if(n < 26) printf("NO 
");
    else
    {
        int b[26]= {};
        int value;
        for(int i = 0; i < n; i++)
        {
            if(a[i] >= 'A' && a[i] <= 'Z') value = a[i]+32 - 'a';
            else value = a[i] - 'a';
            b[value] = 1;
 
        }
        int count = 0;
        for(int i = 0; i < 26; i++)
        {
            if(b[i] == 1) count++;
        }
        if(count == 26) printf("YES
");
        else printf("NO
");
    }
    return 0;
}