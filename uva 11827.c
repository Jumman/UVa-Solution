#include<stdio.h>
#include<string.h>
int GCD(int m,int p){
 int gcd,temp;
 if(m==0){
    gcd=p;
 }
 else if(p==0){
    gcd=m;
 }
 else {
    while(p!=0){
        temp=p;
        p=m%p;
        m=temp;
    }
    gcd=m;
 }
 return gcd;
}
int main()
{
    int i,j,n,l,k,m,p,gCd,max,x,len;
    char s[1000],*word;
    int y[1000];
    scanf("%d",&n);
    while(n--){
            scanf(" %[^\n]",s);
            l=0;
            word=strtok(s," ");
            while(word!='\0'){
                   len=strlen(word);
                     x=0;
                     for(i=0;i<len;i++){
                       x=(x*10)+word[i]-48;
                     }
                    y[l]=x;
                      l++;
                word=strtok('\0'," ");
            }
            max=0;
        for(j=0;j<l;j++){
            for(k=j+1;k<l;k++){
                m=y[j],p=y[k];
                gCd=GCD(m,p);
                if(gCd>max){
                    max=gCd;
                }
            }
        }
        printf("%d\n",max);
    }
    return 0;
}
