class Solution {
public:
    string interpret(string c) {
        string res="";
        
        for(int i=0;i<c.length();i++)
        {
            if(c[i]=='G')
            {
                res+='G';
            }
            else if(c[i]=='(')
            {
                if(c[i+1]==')')
                {
                    res+='o';
                    i++;
                }
                else if(c[i+1]=='a' && c[i+2]=='l' && c[i+3]==')')
                {
                    res+="al";
                    i+=3;
                }
            }
        }
        return res;
    }
};