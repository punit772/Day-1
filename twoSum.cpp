#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    vector<int> twoSum(vector<int> &nums, int target){
        int n = nums.size();
        vector<int> ans;
        for (int i = 0; i < n; i++){
            int sub = target - nums[i];
            for (int j = 0; j < n; j++){
                if (nums[j] == sub && i != j){
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        return ans;
    }
};

int main(){
    vector<int> nums={3,2,4};
    int target=6;
    Solution pair;
    vector<int> ans=pair.twoSum(nums,target);
    for(auto idx:ans){
        cout<<idx<<" ";
    }
    cout<<endl;
    return 0;
}