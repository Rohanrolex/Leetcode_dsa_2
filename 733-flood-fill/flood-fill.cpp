class Solution {
public:
    void dfs(int x , int y , vector<vector<int>>& image, int oldcolor , int color){
        int row = image.size();
        int col = image[0].size();

        if(x <0 || y<0 || x>=row || y >= col) return;

        if(image[x][y] != oldcolor) return;

        image[x][y] = color;

   dfs(x-1 ,y ,image, oldcolor, color);
   dfs(x+1 , y ,image, oldcolor , color);
   dfs(x,y-1 ,image, oldcolor, color);
   dfs(x, y+1 ,image, oldcolor, color);

    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {

        int oldcolor = image[sr][sc];

         if(oldcolor == color)
            return image;
           
           dfs(sr , sc , image ,oldcolor , color);

           return image;
    }
};