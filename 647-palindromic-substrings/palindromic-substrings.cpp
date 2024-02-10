class Solution {
public:
    int c=0;
    bool palin(int i,string s)
    {
        // if(s==NULL) return 0;
        if(i>=s.size()/2) return 1;
        if(s[i]!=s[s.size()-i-1]) return 0;
        return palin(i+1,s);
    }
        
    void fun(string s,int i,string t)
    {       
        if(i==s.length()) return;
        if(palin(0,t)) c++;
        fun(s,i+1,t+s[i+1]);
    }
    int countSubstrings(string s) {
        string f=s;
       sort(s.begin(),s.end());
        cout<<s<<" ";
        if(s[0]==s[s.size()-1]) return ((s.size())*(s.size()+1))/2;
        s=f;
        for(int i=0;i<s.length();i++)
        {
            string x="";
            x+=s[i];
            fun(s,i,x);
           
        }
         return c;
    }
};