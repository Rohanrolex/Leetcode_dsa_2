class Solution {
   void  mark_island(vector<vector<char>>& matrix, int x , int y , int r ,int c){
       if(x<0 || x>=r || y<0 || y>=c || matrix[x][y]!='1') return;

       matrix[x][y] ='2';

       mark_island(matrix , x+1 ,y ,r,c); //for down
       mark_island(matrix , x ,y+1 ,r,c); //for right
       mark_island(matrix , x-1 ,y ,r,c); //for top
       mark_island(matrix , x ,y-1 ,r,c); //for left
   }
public:
    int numIslands(vector<vector<char>>& grid) {

        int rows = grid.size();
        if(rows==0) return 0;
        int cols = grid[0].size();

        int island =0;
        for(int i =0 ;i<rows ;++i){
            for(int j =0 ;j<cols ;++j){
                if(grid[i][j]=='1'){
                    mark_island(grid , i ,j ,rows,cols);
                    island+=1;            

                }

            }
        }
        return island;

    }
};