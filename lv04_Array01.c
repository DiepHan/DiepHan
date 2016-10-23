#include<stdio.h>
main()
{
    int i,n,a[100],min,max;
    printf("Nhap n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    max=a[1];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
            max=a[i];
    }

    printf("max=%d\n",max);
    min=a[1];
    for(i=0;i<n;i++)
    {
        if(min>a[i])
            min=a[i];
    }
    printf("min=%d\n",min);
}
