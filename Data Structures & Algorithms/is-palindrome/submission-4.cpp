class Solution {
public:
    bool isPalindrome(string &s) {
        int leftPointer = 0;
        int rightPointer = s.size() - 1;
        bool isAlnum = false;

        for(auto &c : s){
            if(isalnum(c))
            {
               isAlnum = true; 
            }
            if(!isAlnum){
                return true;
            }
        }

        while(leftPointer < rightPointer){

            if(s.empty())
                return true;
            while(!isalnum(s[leftPointer])){
                leftPointer++;
            }
            while(!isalnum(s[rightPointer])){
                rightPointer--;
            }

            if(std::tolower(s[leftPointer]) != std::tolower(s[rightPointer])){ 
                return false;
            }
            leftPointer++;
            rightPointer--;
        }
        return true;
    }
};
