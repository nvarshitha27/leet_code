class Solution {
public:
    bool judgeCircle(string moves) {
       int move1=0,move2=0;
           for(int i=0;i<=moves.length();i++)
        {
            if(moves[i]=='U')
            {
                move1++;
            }
            else if(moves[i]=='D')
            {
                move1--;
            }
            else if(moves[i]=='R')
            {
                move2++;
            }
            else if(moves[i]=='L')
            {
                move2--;
            }
        }
        
        if(move1==0 && move2==0)
        {
            return true;
        }
        return false;
    }
};