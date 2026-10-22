class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) { 
        //[-1,0,1,2,-1,-4]
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
       for (int i =0; i<nums.size(); i++){  

        if( i==0 || (i>0 &&nums[i] !=nums[i-1] )){
        int sum = 0-nums[i] , lo= i+1 , hi= nums.size()-1;

       while (lo<hi){
        if (nums[lo] + nums[hi]==sum){
         vector<int> temp;
         temp.push_back(nums[i]);
         temp.push_back(nums[lo]) ;
         temp.push_back(nums[hi]);
         res.push_back(temp); 
               //move both hi and lo to skip duplicates
         while(lo<hi &&  nums[lo] == nums[lo+1]) lo++;
         while (lo<hi && nums[hi]== nums[hi-1]) hi--;

         // move both anyways
         lo++; hi--; 
               }
        else if (nums[lo]+nums[hi]< sum) lo++;
        else hi--;
          }
         }
        }
        return res;
    }
};
