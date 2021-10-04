class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        
        int count = 0 ;
        
        for(int i = 0  ; i < grid.size(); i++){            
            for(int j = 0 ; j < grid[i].size(); j++){
                int temp = 4;
                if(grid[i][j] == 1){
                    //up
                    if(i-1 >= 0 and grid[i-1][j]) temp -=1;   
                    //down
                    if(i+1 < grid.size() and grid[i+1][j]==1)temp -=1;
                    //left                     
                    if(j-1 >=0 and grid[i][j-1] == 1)temp -=1;
                    //down
                    if(j+1 < grid[i].size() and grid[i][j+1] == 1) temp -=1;  
                    
                    count += temp;
                }
                
            }
        }
        return count;
    }
};