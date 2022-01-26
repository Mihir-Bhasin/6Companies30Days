    int maxDistance(vector<vector<int>>& grid) {
        int val=0;
        int i=0,n=grid.size(),m=grid[i].size();
        queue<pair<int,int>> q;
        for(;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1)
                    q.push({ i, j});
                
            }
        }
        while(!q.empty()){
            pair<int,int> cur =q.front();
            q.pop();
            piar<int,int> loc[4]= { {0,1},{0,-1},{1,0},{-1,0}};
            
            for(auto x : loc){
                int nx= x.first + cur.first;
                int ny= x.second + cur.second;
                if(nx>=0 && nx<n && ny>=0 && ny<m && grid[nx][ny]==0)
                {
                    q.push({ nx, ny });
					grid[nx][ny] = grid[cur.first][cur.second] + 1;
                    val =max(grid[nx][ny],val);
            }
            }
        }
        return (val>0? val-1: -1);
    }
