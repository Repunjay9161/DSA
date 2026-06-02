1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4     unordered_set<int> seen;
5        
6        for (int num : nums) {
7
8            if (seen.find(num) != seen.end()) {
9                return true;
10            }
11            
12            seen.insert(num);
13        }
14        
15        return false;
16      
17    }
18};