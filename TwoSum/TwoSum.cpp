#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {

vector<int> resul;

    for(int i = 0; i < nums.size()-1; i++){
        resul.clear();
        int prov = target - nums[i];
        resul.push_back(i);
            for(int j = i+1; j < nums.size(); j++){
                if(nums [j] == prov){
                    resul.push_back(j);
                    break;
                }
            }
            if(resul.size() == 2){
                break;
            }
    }
    return resul;
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