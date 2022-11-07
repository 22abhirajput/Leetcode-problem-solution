class Solution {
public:
    string reverseWords(string s) 
{
        reverse(s.begin(),s.end()); // reverse the string
        
        
    int l = 0, r = 0 , i = 0 , n = s.length();
        while( i<n ){
            
            while(i<n  && s[i] != ' '){ // copying the first word of reverse string
                s[r++] = s[i++];
            }
            
            if(l<r) {   // 
                reverse(s.begin()+l, s.begin()+r); //reversing the first reverse word 
                if(r==n) break;  // if  we reach to the size of string will break out of loop
                s[r++] = ' ';    // will add space after every word
                l = r;     //  updating  l value
            }
            i++;
            
    }
        
       if( r > 0 &&  s[r-1] == ' ' ) r--; //  removing white spaces from string if there any
        s.resize(r); // resizing the string 
        return s;
        
}
    
};