class Solution {
public:
// Aaryan08
    int maxArea(vector<int>& height) {
     int s = 0;
     int e = height.size() -1;
     int maxwater = 0;

     while(s < e){
        int area = (e-s) * min(height[e] , height[s]);
        maxwater = max(maxwater , area);
        if(height[s] < height[e]){
            s++;
        }else {
            e--;
        }
     }   
     return maxwater;
    }

};
