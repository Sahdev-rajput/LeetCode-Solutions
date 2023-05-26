class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int steps=1;
        int cap=capacity;
        for(int i=0;i<plants.size()-1;i++)
        {
            steps+=1;
            cap-=plants[i];
            if(plants[i+1]>cap)
            {
                steps+=2*(i+1);
                cap=capacity;
            }
        }
        return steps;
    }
};