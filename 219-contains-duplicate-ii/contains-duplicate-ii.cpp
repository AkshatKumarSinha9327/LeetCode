class Solution {
public:
    bool containsNearbyDuplicate(std::vector<int>& nums, int k) {
        int n = nums.size();

        std::unordered_map<int, int> numIndices;

        for (int currentIndex = 0; currentIndex < n; ++currentIndex) {
            int currentNum = nums[currentIndex];
            
            if (numIndices.find(currentNum) != numIndices.end()) {

                if (currentIndex - numIndices[currentNum] <= k) return true;
            }
            
            numIndices[currentNum]= currentIndex;
        }
        
        return false;
    }
};