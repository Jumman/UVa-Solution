#include<iostream>
#include<stdio.h>
#include<queue>
#include<vector>
#include<map>

using namespace std;

int main()
{
    int n,m,indeg[110];
    int cs=1;
    char mname[55],name[110][55];
    while(scanf("%d",&n)==1)
    {
        map<string,int>mp;
        vector<int>vec[110];
        for(int i=0;i<n;i++)
        {
            scanf("%s",name[i]);
            mp[name[i]]=i;
            indeg[i]=0;
        }

        scanf("%d",&m);
        for(int i=0;i<m;i++)
        {
            scanf("%s",mname);
            int u=mp[mname];
            scanf("%s",mname);
            int v=mp[mname];
            vec[u].push_back(v);
            indeg[v]++;
        }

        //now start top sort from here.
        priority_queue< int > q ;
        for(int i=0;i<n;i++)
            if(indeg[i]==0)
                q.push(-i);
        printf("Case #%d: Dilbert should drink beverages in this order:",cs++);
        while(!q.empty())
        {
            int u=-1*(q.top());
            q.pop();
            for(int i=0;i<vec[u].size();i++)
            {
                indeg[vec[u][i]]--;
                if(indeg[vec[u][i]]==0)
                    q.push(-(vec[u][i]));
            }
            printf(" %s",name[u]);
        }
        printf(".\n\n");
    }
    return 0;

}
