#include<stdio.h>
int main()
{
    int i,j,tmp,t,r,a,sum;
    int s[35000];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&r);
        for(i=0;i<r;i++){
            scanf("%d",&s[i]);
        }
        for(i=0;i<r;i++){
            for(j=i+1;j<r;j++){
                if(s[i]<s[j]){
                    tmp=s[i];
                    s[i]=s[j];
                    s[j]=tmp;
                }
            }
        }
        a=r/2;
        sum=0;
        for(i=0;i<r;i++){
            if(s[i]>s[a]) sum+=s[i]-s[a];
            else sum+=s[a]-s[i];
        }
        printf("%d\n",sum);
        }
        return 0;
}
