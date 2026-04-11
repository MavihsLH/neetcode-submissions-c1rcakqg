class Solution {
private:
    std::stack<int> sc;
public:
    int evalRPN(vector<string>& tokens) {
        for(const std::string &t : tokens){
            if(t == "+" || t == "-" || t == "*" || t == "/"){
                int b = sc.top(); sc.pop();
                int a = sc.top(); sc.pop();

                if(t == "+") sc.push(a + b); 
                if(t == "-") sc.push(a - b); 
                if(t == "*") sc.push(a * b);
                if(t == "/") sc.push(a / b);
            } else {
                sc.push(std::stoi(t));
            }
        }
        return sc.top();
    }
};
