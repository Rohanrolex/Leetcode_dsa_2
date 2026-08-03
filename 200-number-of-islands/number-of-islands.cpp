class Solution {
   
public:

void dfs(int x ,int y , vector<vector<char>>& grid){
    int row = grid.size();
  int col = grid[0].size();

    if(x<0 || x>=row || y<0 || y>=col || grid[x][y]!='1') return;

    grid[x][y] = '2'; //mark visited;

    dfs(x+1,y,grid);
    dfs(x,y+1,grid);
    dfs(x-1,y,grid);
    dfs(x,y-1,grid);

}
    int numIslands(vector<vector<char>>& grid) {
  int row = grid.size();
  int col = grid[0].size();
  int iceland =0;


  for(int i=0 ;i<row;i++){
    for(int j=0;j<col ;j++){
        if(grid[i][j] == '1'){
            dfs(i,j, grid);
            iceland++;
        }
    }
  }



  return iceland;

    }
};