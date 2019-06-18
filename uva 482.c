#include<stdio.h>
int main()
{
    int n,x,i,cnt,state=1;
    int  a1[1000];
    char a2[1000][1000];
    scanf("%d",&n);

    while(n--)
    {
    if (!state)  printf("\n");
      state = 0;
      cnt=0;
      while(1)
      {
          scanf("%d",&x);
          a1[x-1]=cnt++;
          if(getchar()=='\n')
            break;
      }
      for(i=0;i<cnt;i++)
        scanf("%s",a2[i]);
      for(i=0;i<cnt;i++)
        printf("%s\n",a2[a1[i]]);
    }
    return 0;
}
