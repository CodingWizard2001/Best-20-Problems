// Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

#include<iostream>
#include<vector>
using namespace std;
int missingNumber(vector<int>& nums){
    int n = nums.size();
    int i = 0;
    while(i < n){
        int currIdx = nums[i];
        if(i == currIdx || nums[i] == n) ++i;
        else swap(nums[i],nums[currIdx]);
    }
    for(int i = 0;i < n;i++){
        if(i != nums[i]) return i;
    }
    return n;
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
    cout<<"Missing number : "<<missingNumber(nums);
}