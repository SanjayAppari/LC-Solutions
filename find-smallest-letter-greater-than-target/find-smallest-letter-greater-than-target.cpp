class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int lb=upper_bound(letters.begin(),letters.end(),target)-letters.begin();;
        if(lb==letters.size()) return letters[0];
        return letters[lb];
    }
};