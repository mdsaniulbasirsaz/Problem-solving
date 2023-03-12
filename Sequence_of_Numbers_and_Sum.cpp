#include<stdio.h>
int main(int argc, char **argv){
    int a,b;
    while(1)
    {
        scanf("%d%d",&a,&b);
        if(a==0 || b==0 ||a<0 ||b<0)
        {
            break;
        }
        
        int sum=0;
        if(a<b)
        {
            for(int i=a;i<=b;i++)
            {
                printf("%d ",i);
                sum+=i;
            }
            printf("Sum=%d\n",sum);
        }
        else
        {
            for(int i=b;i<=a;i++)
            {
                printf("%d ",i);
                sum+=i;
            }
            printf("Sum=%d\n",sum);
        }

    }
}