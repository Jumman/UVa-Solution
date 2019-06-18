#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,cnt,mirror;
    char s[100];
    while((scanf("%s",&s))==1)
    {
      l=strlen(s),cnt=0;
      for(i=0;i<l;i++)
      {
          if(s[i]==s[l-i-1]) cnt++;
      }
      mirror=0;
      for(i=0;i<l;i++)
      {
          if((s[i]=='A'&&s[l-i-1]=='A')||(s[i]=='E'&&s[l-i-1]=='3')||(s[i]=='H'&&s[l-i-1]=='H')||(s[i]=='I'&&s[l-i-1]=='I')||(s[i]=='J'&&s[l-i-1]=='L')||(s[i]=='L'&&s[l-i-1]=='J')||(s[i]=='M'&&s[l-i-1]=='M')||(s[i]=='O'&&s[l-i-1]=='O')||(s[i]=='S'&&s[l-i-1]=='2')||(s[i]=='T'&&s[l-i-1]=='T')||(s[i]=='U'&&s[l-i-1]=='U')||(s[i]=='V'&&s[l-i-1]=='V')||(s[i]=='W'&&s[l-i-1]=='W')||(s[i]=='X'&&s[l-i-1]=='X')||(s[i]=='Y'&&s[l-i-1]=='Y')||(s[i]=='Z'&&s[l-i-1]=='5')||(s[i]=='1'&&s[l-i-1]=='1')||(s[i]=='2'&&s[l-i-1]=='S')||(s[i]=='3'&&s[l-i-1]=='E')||(s[i]=='5'&&s[l-i-1]=='Z')||(s[i]=='8'&&s[l-i-1]=='8'))
          {
            mirror++;
          }
      }

        if(cnt!=l&&mirror!=l) printf("%s -- is not a palindrome.\n\n",s);
        else if(cnt==l&&mirror!=l) printf("%s -- is a regular palindrome.\n\n",s);
        else if(cnt!=l&&mirror==l) printf("%s -- is a mirrored string.\n\n",s);
        else if(cnt==l&&mirror==l) printf("%s -- is a mirrored palindrome.\n\n",s);
    }
    return 0;
}
