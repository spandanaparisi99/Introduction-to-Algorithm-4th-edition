#include <iostream> 
#include <stdio.h>
#include <vector>

using namespace std;


int main()
{
    vector<int> nums = {5,2,4,6,1,3};
    int length = nums.size();

    //insertion sort algorithm
    // we start from the second index, i = 1, as we consider the first element sorted

    for(int i = 1; i < length; i++){
        int key = nums[i]; //we will compare this key to each element of the sorted array 
        int j = i - 1; // the comparison of the sorted array will start from index 1 less than the current key index

        while(j > -1 && nums[j] > key){ // we are running this loop until we reach the end of the sorted array
        // and the value of the jth index is greater than key
            nums[j+1] = nums[j]; // if the number at the index is greater than key then shift that number to the next index
            j--; // we are decrementing j to move to the next index in the sorted subarray;
        }
        nums[j+1] = key; 
    }

    for(auto i: nums){
        cout << i;
    }

}