class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if (n == 0)
            return 0;
        sort(nums.begin(), nums.end());
        int lastSmaller = INT_MIN;
        int currentStreak = 0;
        int longestStreak = 1;
        for (int i = 0; i < n; i++) {
            if (nums[i] - 1 == lastSmaller) {
                currentStreak++;
                lastSmaller = nums[i];
            } else if (lastSmaller != nums[i]) {
                currentStreak = 1;
                lastSmaller = nums[i];
            }
            longestStreak = max(longestStreak, currentStreak);
        }
        return longestStreak;
    }
};