class Solution {
public:
    int minimumChairs(string s) {
      int p=0,c=0;
      for(int i = 0; i < s.size(); i++){
        if(s[i] == 'E'){
           p++;
           if(p>c){
            c=p;
           }
        }else{
            p--;
        }
      } 
      return c; 
    }
};