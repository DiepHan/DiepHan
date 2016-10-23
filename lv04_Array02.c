#include<stdio.h>
main()
{
    float a[100][100],max;
    int n,m,i,j;
    printf("Nhap cap ma tran:");
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
            scanf("%f",&a[i][j]);
    }
    max=a[1][1];
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
            if(a[i][j]>max)
                max=a[i][j];
    }
    printf("max=%0.2f",max);

    }



