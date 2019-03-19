#include <stdio.h>
#include <stdlib.h>

int f[200];
int fabonacci(int n){
    if(n == 1 || n == 2)
        return f[n] = 1;
    else{
        if(f[n] == 0)
            return f[n] = fabonacci(n - 1) + fabonacci(n - 2);
        else
            return f[n];
    }
}
int main()
{
    int n;
    while(scanf("%d",&n) != EOF){
        int res;
        res = fabonacci(n);
        printf("%d",res);
    }
    return 0;
}
