class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() -1;
        int ans = INT_MIN;

        while( i < j){
            int b = min( height[j],height[i] );
            int l = j - i ;

            ans = max(l*b , ans);

            if(height[i] > height[j]){
                j--;
            }else{
                i++;
            }

        }
        return ans;
    }
};
