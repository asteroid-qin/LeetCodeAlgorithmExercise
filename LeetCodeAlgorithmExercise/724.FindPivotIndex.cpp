//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�ҳ�һ��������±꣬Ҫ���±���ߵ���֮�͵����ұ�
//    // ˼·������ʹ��˫ָ������鷳�����Ի�һ��˼·������nums�ĺͣ�Ȼ�����nums����leftSum��¼��ߵĺ�
//    // ֻҪleftSum == num - nums[i] - leftSum����ô���i�����м����꣬���򷵻�-1
//    int pivotIndex(vector<int>& nums) {
//        int sum = 0;
//        for (auto i : nums) {
//            sum += i;
//        }
//
//        int leftSum = 0;
//        for (int i = 0; i < nums.size(); i++) {
//            if (leftSum == sum - leftSum - nums[i]) {
//                return i;
//            }
//            leftSum += nums[i];
//        }
//
//
//        return -1;
//    }
//};
//
//int main() {
//	return 0;
//}