#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {

vector<int> resul;

    for(int i = 0; i < nums.size(); i++){
        int prov = target - nums[i];
        if(prov >= 0){
            for(int j = 0; j <= nums.size() - 1 - i; j++){
                if(nums[i] + nums [j] == target){
                    resul.push_back(i);
                    resul.push_back(j);
                }
            }
        }
    }
}

int main(){

    //Declaracion de variables
    int target = 9;
    vector<int> nums;

    nums.push_back(2);
    nums.push_back(7);
    nums.push_back(11);
    nums.push_back(15);

    twoSum(nums,target);
}