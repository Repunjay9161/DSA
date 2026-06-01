1class Solution {
2public:
3    vector<int> twoSum(vector<int>& arr, int tar)
4     { unordered_map<int ,int> m;
5     vector<int> ans;
6      for(int i=0;i<arr.size();i++){
7        int first = arr[i];
8        int sec = tar - first;
9       if(m.find(sec)!= m.end()){
10            ans.push_back(i);
11            ans.push_back(m[sec]);
12            break;
13        }
14        m[first] = i;
15     }   
16     return ans;
17    }
18};