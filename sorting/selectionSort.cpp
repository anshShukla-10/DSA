#include <vector>
using namespace std;

class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {

        for(int i = 0; i < nums.size() - 1; i++){
            int min = i;
            for(int j = i; j < nums.size(); j++){
                if( nums[min] > nums[j] ){
                    min = j;
                }
            }
            
            if(min != i ){
                int temp = nums[i];
                nums[i] = nums[min];
                nums[min] = temp;
            }
        }

        return nums;
    }
};
