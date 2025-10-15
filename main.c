#include <stdio.h>
#include <stdlib.h>
int factorial(int n)
{
    int res = 1;
    int i;
    for (i = 1; i<=n; i++)
        res = res*i;
    return res;
}

int combination(int n, int r)
{
    return (factorial(n)/factorial(n-r)/factorial(r));  
}


int main(int argc, char *argv[])

{
    // varaible declare
    int n;
    int r;
    int res;
    
    // input data
    printf("input n and r:");
    scanf("%d%d", &n, &r);
    //compute combination
    res = combination(n, r);
    
    //print result
    printf("combination result is %i\n", res);

 system("PAUSE");
 return 0;
 

}
