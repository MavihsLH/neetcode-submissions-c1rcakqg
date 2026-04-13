class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        std::vector<pair<int, int>> cars;
        std::stack<float> s;
        for(int i = 0; i < position.size(); i++){
            cars.emplace_back(position[i], speed[i]);
        }

        std::sort(cars.begin(), cars.end(), [](std::pair<int, int> a, std::pair<int, int> b){
            return a.first > b.first;
    });

        for(int i = 0; i < cars.size(); i++)
        {
            float time = static_cast<float>(target - cars[i].first)/cars[i].second;

            if(s.empty() || time > s.top()){ 
                s.push(time);
            }
        }
        return s.size();
    }
};
