class Solution {
public:
    bool isCircularSentence(string sentence) {
        int n=sentence.length();
        if(sentence[0]!=sentence[n-1]) return 0;
        for(int i=0;i<sentence.length();i++){
            if(sentence[i]==' '){
                if((i>0 && sentence[i-1]) && (i<n-1 && sentence[i+1]!=sentence[i-1])) return 0;
            }
        }
        return 1;
    }
};