class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if(grid[0][0]!=0)
        {
            return -1;
        }
        int drow[]={-1,-1,-1,0,1,1,1,0};
        int dcol[]={-1,0,1,1,1,0,-1,-1};
        queue<pair<int,pair<int,int>>> q;
        int n=grid.size();
        if(n==1)
        {
            return 1;
        }
        vector<vector<int>> dist(n,vector<int>(n,1e9));
        q.push({1,{0,0}});
        dist[0][0]=0;
        while(!q.empty())
        {
            auto itr=q.front();
            q.pop();
            for(int i=0;i<8;i++)
            {
                int currrow=itr.second.first+drow[i];
                int currcol=itr.second.second+dcol[i];
                if(currrow>=0 && currrow<n && currcol>=0 && currcol<n && grid[currrow][currcol]==0 && itr.first+1<dist[currrow][currcol])
                {
                    if(currrow==n-1 && currcol==n-1)
                    {
                        return itr.first+1;
                    }
                    dist[currrow][currcol]=itr.first+1;
                    q.push({itr.first+1,{currrow,currcol}});
                }
            }
        }
        return -1;
    }
};