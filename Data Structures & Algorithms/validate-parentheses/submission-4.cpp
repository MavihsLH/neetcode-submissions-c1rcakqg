class Solution {
public:
    bool isValid(string &s) {
        std::stack<char> v;
        for(const char &c : s){
            if(c == '(' || c == '{' || c == '[')
            {
                v.push(c);
            }else{
                if(v.empty()) return false;
                char topChar = v.top();

                if(topChar == '(' && c == ')' || topChar == '{' && c == '}' || topChar == '[' && c == ']'){
                    v.pop();
                }else{
                    return false;
                }
            }
        }
            return v.empty();
    }
};
