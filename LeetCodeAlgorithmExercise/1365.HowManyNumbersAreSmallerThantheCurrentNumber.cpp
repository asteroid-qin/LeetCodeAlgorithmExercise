//#include<iostream>
//#include<vector>
//#include<set>
//#include<unordered_map>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：对于每个 nums[i] 你必须计算出有效的 j 的数量，其中 j 满足 j != i 且 nums[j] < nums[i]
//    // 思路：用temp copy nums，然后对temp进行排序。然后把temp做成map。key是值，value是多少数比当前小
//    // 最后遍历nums，去map查然后赋值
//    // 好吧，还有一种思路：0 <= nums[i] <= 100，根据这个可以使用计数排序
//    // 先遍历一遍，把nums里面的值放入101大小的桶中，然后从大到小遍历这个桶
//    // 跳过值等于0，并用一个变量记录有多少元素比当前要大 pre
//    // 如果当前值不等0，那么把当前值作为key，把总大小-pre-当前值的数量作为value放入map中。最后让pre+当前值的数量
//    // 遍历完成后，得到map。最后遍历一遍nums，查map赋值即可
//    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
//        vector<int> temp(nums.begin(), nums.end());
//        sort(temp.begin(), temp.end(), greater<int>());
//        unordered_map<int, int> m;
//
//        int len = temp.size();
//        for (int i = 0; i < len;) {
//            int num = temp[i];
//            int count = 1;
//
//            while (i + 1 < len && num == temp[i + 1]) {
//                i++;
//                count++;
//            }
//
//            m[num] = len - i - 1;
//        }
//
//        for (auto& i : nums) {
//            i = m[i];
//        }
//
//        return nums;
//    }
//
//    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
//        int bucket[101] = { 0 };
//        for (auto& i : nums) {
//            bucket[i]++;
//        }
//
//        unordered_map<int, int> m;
//        for (int i = 100, pre = 0, size = nums.size(); i >= 0; i--) {
//            if (bucket[i] == 0) continue;
//            m[i] = size - pre - bucket[i];
//            pre += bucket[i];
//        }
//
//        for (auto& i : nums) {
//            i = m[i];
//        }
//
//        return nums;
//    }
//};
//
//int main() {
//	return 0;
//}