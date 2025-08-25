class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_map<int,int> map;

        
        if(nums.size()==0){
            return 0;
        }if(nums.size()==1){
            return 1;
        }

        for(auto n : nums){
            map[n]++;
        }

        int MaxLen = INT_MIN;

        for(auto x : map){

            int v = x.first;
          

            if(map.find(v-1) == map.end()){
               
                int len = 1;
                
                while(map.find(v+1) != map.end()){
                    v=v+1;
                    len++;
                }

            MaxLen = max(MaxLen , len);
            

            }


        }



        return MaxLen > INT_MIN ? MaxLen : 0 ;
    }
};
