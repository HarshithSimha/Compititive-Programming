class Solution {
public:
    vector<vector<int>>dp;
    int dfs(vector<vector<int>>&mat, int i, int j, int n,int m){
        if(dp[i][j]!=-1) return dp[i][j];
        int a=0,b=0,c=0,d=0;
        if(i-1>=0 && mat[i-1][j]<mat[i][j]) a=1+dfs(mat,i-1,j,n,m);
        if(j-1>=0 && mat[i][j-1]<mat[i][j]) b=1+dfs(mat,i,j-1,n,m);
        if(i+1<n && mat[i+1][j]<mat[i][j])  c=1+dfs(mat,i+1,j,n,m);
        if(j+1<m && mat[i][j+1]<mat[i][j])  d=1+dfs(mat,i,j+1,n,m);
        dp[i][j]=max(max(a,b),max(c,d));
        return dp[i][j];
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        dp.resize(n,vector<int>(m,-1));
        int ans=1;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                int a=1+dfs(matrix,i,j,n,m);
                ans=max(ans,a);
            }
        }
        return ans;
    }
};
