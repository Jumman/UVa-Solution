#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    char str[150];
    scanf("%d",&t);
    getchar();

    while(t--)
    {
        gets(str);

    stack<char> myStack;

    for(int i=0; str[i]; i++)
    {
        if(!myStack.empty() && myStack.top()=='(' && str[i]==')')
            myStack.pop();

        else  if(!myStack.empty() && myStack.top()=='[' && str[i]==']')
            myStack.pop();

        else if(str[i]!=' ')
            myStack.push(str[i]);
    }

    if(myStack.empty())
         printf("Yes\n");
    else
        printf("No\n");
    }

    return 0;
}

