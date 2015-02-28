/**
*   用位运算实现加法
*/
#include <stdio.h>
#include <stdlib.h>

int add(int m,int n)
{
    int tmp;
    while(n!=0)
    {
        tmp=m&n;
        m^=n;
        n=tmp;
        n<<=1;
    }
    return m;
}
int main()
{
    int m,n;
    while(scanf("%d %d",&m,&n)!=EOF)
    {
        printf("%d\n",add(m,n));
    }
    return 0;
}
