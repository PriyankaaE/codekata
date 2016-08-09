#include <stdio.h>
#include <malloc.h>
int main()
{
    int n;
    scanf("%d",&n);
    int *a=(int *)malloc(sizeof(int)*n);
    int i;
    for(i=0;i<n;i++)
    {scanf("%d",&a[i]);}
    for(i=0;i<n;i++){
    if(a[i]==i)
    printf("%d",i);
}
    return 0;
}