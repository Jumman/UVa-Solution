#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,m=0,tmp,n,len,cnt[130],sum[130],ar[130];
    char s[1001];
    while((gets(s))){
        len=strlen(s);
        k=0;
         for(i=0;i<130;i++){
        sum[i]=1;
        cnt[i]=0;
    }
        for(i=0;i<len;i++){
            n=s[i];
            if(cnt[n]==0){
                for(j=i+1;j<len;j++){
                    if(s[j]==s[i]){
                        sum[n]+=1;
                    }
                }

            ar[k]=n;
            k++;
            cnt[n]=1;
            }
        }
        for(i=0;i<k;i++){
            for(j=i+1;j<k;j++){
                if((sum[ar[i]]>sum[ar[j]])){
                    tmp=ar[i];
                    ar[i]=ar[j];
                    ar[j]=tmp;
                }
                else if((sum[ar[i]]==sum[ar[j]])){
                    if(ar[i]<ar[j]){
                    tmp=ar[i];
                    ar[i]=ar[j];
                    ar[j]=tmp;
                    }
                }
            }
        }
        if(m>0){
            printf("\n");
            }
        for(i=0;i<k;i++){
            printf("%d %d\n",ar[i],sum[ar[i]]);
            m++;
        }
    }
    return 0;
}
