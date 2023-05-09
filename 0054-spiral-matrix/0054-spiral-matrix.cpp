class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
       vector<int> res;
    if(matrix.size() == 0) return res;
    
    int startRow = 0, endRow = matrix.size()-1;
    int startCol = 0, endCol = matrix[0].size() - 1;
    int dir = 0;
    
    while(startRow <= endRow && startCol <= endCol) {
        switch(dir) {
            case 0: //RIGHT
                for(int col = startCol; col <= endCol; col++)
                    res.push_back(matrix[startRow][col]);
                startRow++;
                break;
            case 1: //DOWN
                for(int row = startRow; row <=endRow; row++) 
                    res.push_back(matrix[row][endCol])    ;
                endCol--;
                break;
            case 2://LEFT
                for(int col = endCol; col >= startCol; col --) 
                    res.push_back(matrix[endRow][col]);
                endRow--;
                break;
            case 3://UP
                for(int row = endRow; row >= startRow; row--)
                    res.push_back(matrix[row][startCol]);
                startCol++;  
                break;
        }                                   
        dir = (dir+1)%4;                                                            
    }
    
    return res;
} 
    
};