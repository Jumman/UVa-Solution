#include<stdio.h>
int main()
{
    int s,b,i,j,l,r;
    int Ls[100050],Rs[100050];
    while((scanf("%d%d",&s,&b))==2&&(s!=0||b!=0))
    {
        for(i=0;i<=s;i++)
        {
           Ls[i]=i-1;
           Rs[i]=i+1;
        }

        for(i=0;i<b;i++)
        {
            scanf("%d%d",&l,&r);
           if(Ls[l]<1) printf("* ");
           else printf("%d ",Ls[l]);

           if(Rs[r]>s) printf("*\n");
           else printf("%d\n",Rs[r]);

           Ls[Rs[r]]=Ls[l];
           Rs[Ls[l]]=Rs[r];
        }
        printf("-\n");
    }
    return 0;
}
