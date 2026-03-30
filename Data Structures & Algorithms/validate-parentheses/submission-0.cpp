class Solution {
public:
    bool isValid(string s) {
        stack<char>stack;
        unordered_map<char,char> Cmap={
            {'}','{'},
            {']','['},
            {')','('}
        };
        for(char c:s){
            if(Cmap.count(c)){
                if(!stack.empty() && Cmap[c]==stack.top()){
                    stack.pop();
                }else{
                    return false;
                }
            }else{
                stack.push(c);
            }
        }
        return stack.empty();

    }
};
