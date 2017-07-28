#include<stdio.h>
int main()
{
    int step=0,i,j,k,t,m,n,flag=1,a,b;
    scanf("%d",&t);
    scanf("%d",&a);
    for(i=0;i<t-1;i++)
    {
        scanf("%d",&b);
        if(step==0)
        {
            if(a==b)
            {
                step++;
                printf("step==0 && a==b works\n");
            }

            else if(a>b)
            {
                step=step+2;
                printf("step==0 && a>b works\n");
            }

        }
        else if(step==1)
        {
            if(a<b)
                flag=0;
                else if(a>b)
                    step++;
        }
        else
        {
            if(a<=b)
                flag=0;
        }
        a=b;
    }
    if(flag)
        printf("YES");
        else
            printf("NO");
    return 0;
}
