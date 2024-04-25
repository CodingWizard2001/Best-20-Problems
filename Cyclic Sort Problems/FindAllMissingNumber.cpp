// Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.

#include<iostream>
#include<vector>
using namespace std;
vector<int> missingNumber(vector<int>& nums){
    int n = nums.size();
    int i = 0;
    while(i < n){
        int currIdx = nums[i];
        if(nums[currIdx] == nums[i]) ++i;
        else swap(nums[i],nums[currIdx]);
    }
    vector<int>ans;
    for(int i = 1;i <= n;i++){
        if(i != nums[i]) ans.push_back(i);
    }
    return ans;
}
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    vector<int>nums;
    cout<<"Give input : ";
    for(int i = 0;i < size;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    vector<int>ans = missingNumber(nums);
    cout<<"All missing numbers are : ";
    for(int i = 0;i < ans.size();i++){
        cout<<ans[i]<<" ";
    }
}