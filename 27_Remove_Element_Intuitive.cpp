#include <vector>

using namespace std;

int removeElement(vector<int>& nums, int val) {
    int i = 0, j = nums.size() - 1;
    int temp;
    int k = 0;
    for(int a = 0; a <= j; a ++)
    {
    	k += !(nums[a] == val);
    }
    while(i < j)
    {
    	if(nums[j] != val && nums[i] == val)
    	{
    		temp = nums[i];
    		nums[i] = nums[j];
    		nums[j] = temp;
    	}

    	if(nums[i] != val)
    		i += 1;

        if(nums[j] == val)
    		j -= 1;
    }
    return k;
}