class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Boyer-Moore Voting Algorithm
        int cnt = 0, el = 0;
        for (int num : nums) {
            if (cnt == 0) {
                el = num;
                cnt = 1;
            } else if (el == num) {
                cnt++;
            } else {
                cnt--;
            }
        }
        return el;
    }
};