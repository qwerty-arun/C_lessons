#include <stdio.h>
int n=15;
int main()
{
    static int a=1;
    if(printf("%d ",a) && (a++)<=n && main())
    {}
    return 0;
}
