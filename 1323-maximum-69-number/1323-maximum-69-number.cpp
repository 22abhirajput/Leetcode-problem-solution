class Solution {
public:
    int maximum69Number (int num) {
        
        int newnum = num;
        int firstoccurence = -1; // first occurence of 6;
        int currindex = 0;
        
        while(newnum >0){
            
            
            if(newnum % 10 == 6)
                firstoccurence = currindex;
                
                
                newnum /= 10;
                currindex++;
                
            
        }
        
        
         return firstoccurence == -1 ? num: num+ 3 * (int)pow(10,firstoccurence) ;
        
        
        
    }
};