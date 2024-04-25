// Write a C++ program to sort an array using cyclic sort

#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>& nums){
    for(int i = 0;i < nums.size();i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}
void cyclicSort(vector<int>& nums){
    int n = nums.size() - 1,i = 0;
    while(i < n){
        int currIdx = nums[i];
        if(i == currIdx) i++;
        else swap(nums[i],nums[currIdx]);
    }
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
    cout<<"Before Sorting : ";
    print(nums);
    cyclicSort(nums);
    cout<<"After Sorting : ";
    print(nums);
}