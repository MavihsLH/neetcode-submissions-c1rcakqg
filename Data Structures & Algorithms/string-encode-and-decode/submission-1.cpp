class Solution {
public:

    string encode(vector<string>& strs) {
        std::string encoded_string = "";
        for(const auto &s : strs){
            encoded_string += std::to_string(s.length()) + "#" + s;
        }
        return encoded_string;
    }

    vector<string> decode(string &s) {
        //"3#Dog3#Cat5#Mouse6#Spouse"
        //"0123456789"

        std::vector<std::string> res;
        int i = 0;
        while(i < s.length()){
            int j = i;
            while(s[j] != '#'){
                j++;
            }
            int length = std::stoi(s.substr(i, j - i));

            i = j + 1;
            std::string word = s.substr(i, length);
            res.push_back(word);

            i += length;
        }
        return res;
    }
};
