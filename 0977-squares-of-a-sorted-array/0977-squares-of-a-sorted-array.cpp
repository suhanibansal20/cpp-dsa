class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
       
        int h=nums.size();
        int m;
        
        for(int i=0;i<nums.size();i++){
             if(nums[i]>=0){
                m=i;
                break;
                
                  }
                  
        }

        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]*nums[i];
        }
int j=m;
int l=m-1;
        while(l>=0 && j<h){
         if(nums[l]>nums[j]){
            ans.push_back(nums[j]);
            j++;
         }
         else{
           ans.push_back(nums[l]);
           l--;
         }
        }
        while(l>=0){
            ans.push_back(nums[l]);
            l--;
        }
        while(j<h){
            ans.push_back(nums[j]);
            j++;
        }
        return ans;
    }
};