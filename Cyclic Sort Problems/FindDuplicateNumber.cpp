// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive. There is only one repeated number in nums, return this repeated number.

#include<iostream>
#include<vector>
using namespace std;
int findDuplicate(vector<int>& nums){
    int n = nums.size();
    int i = 0;
    while(i < n){
        int currIdx = nums[i];
        if(nums[currIdx] == nums[i]) return nums[i];
        else swap(nums[i],nums[currIdx]);
    }
    return 100;
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
    cout<<"Repeated number : "<<findDuplicate(nums);
}