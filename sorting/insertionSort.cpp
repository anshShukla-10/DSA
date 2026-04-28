#include <utility>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
        for( int i = 0; i < nums.size() - 1; i++){
            for( int j = i; j < nums.size(); j++){
                if(nums[j + 1] < nums[j]){
                    swap(nums[j+1], nums[j]);
                }
            }
        }
    }
};
