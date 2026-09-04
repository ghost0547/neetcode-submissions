class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>m;
        unordered_map<char,int>n;
        for(int i=0;i<s.length();i++){
            if(m.find(s[i])==m.end()){
                m.insert({s[i],1});
            }
            else{
                m[s[i]]++;
            }
        }
        for(int j=0;j<t.length();j++){
            if(n.find(t[j])==n.end()){
                n.insert({t[j],1});
            }
            else{
                n[t[j]]++;
            }
        }
        if(m==n){
            return true;
        }
        else{
            return false;
        }
    }
};
