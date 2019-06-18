#include<stdio.h>
int main()
{
    int a,b=0,n,m,sum,i,j,k,ts[15];
    int grid[15][15];
    while(scanf("%d",&n)==1&&n!=0){
        b++;
        for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                    scanf("%d",&grid[i][j]);
                }
        }
        if(n%2!=0){
            m=n/2+1;
        }
        else{
            m=n/2;
        }
        a=0;
        for(k=0;k<m;k++){
            sum=0;
            for(i=k;i<n-k;i++){
                for(j=k;j<n-k;j++){
                    if(i>k&&i<n-k-1){
                        sum=sum+grid[i][j]+grid[i][n-k-1];
                        break;
                    }
                    else{
                        sum=sum+grid[i][j];
                    }
                }
            }
            ts[a]=sum;
            a++;
        }
        printf("Case %d:",b);
        for(i=0;i<a;i++){
            printf(" %d",ts[i]);
        }
        printf("\n");
    }
    return 0;
}
