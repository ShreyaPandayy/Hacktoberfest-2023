" Merge sorting in c++
  Sample testcase: arr[] = [4, 5, 2, 1, 3]
  Output: 1, 2, 3, 4, 5
"

#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums, int left, int mid, int right) {
        vector<int> temp(right - left + 1);
        int i=left, j=mid+1, k=0;
        while(i <= mid && j <= right) {
            if(nums[i] <= nums[j]) 
                temp[k++]=nums[i++];
            else
                temp[k++]=nums[j++];
        }
        while(i <= mid) 
            temp[k++]=nums[i++];
        while(j <= right) 
            temp[k++]=nums[j++];
        for(int p=0; p<k; p++) 
            nums[left+p]=temp[p];
    }
    void merge_sort(vector<int>& nums, int left, int right) {
        if(left >= right)
            return;
        int mid=(left+right)/2;
        merge_sort(nums, left, mid);
        merge_sort(nums, mid+1, right);
        merge(nums, left, mid, right);
    }
    vector<int> sortArray(vector<int>& nums) {
        merge_sort(nums, 0, nums.size()-1);
        return nums;
    }


int main() {
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cout<<"\nEnter element "<<i+1<<" ";
        cin>>v[i];
    }

    merge_sort(v, 0, n-1);
    for(int x : v)
    	cout<<endl<<x;

    return 0;
}
