//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<numeric>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺��ǵ���˳�����С������
//    // ˼·���������⣺��nums����󣬶�nums��ͣ�
//    // Ȼ��Ӻ�����ǰ�������ѵ�ǰֵ����vector�к��ж��Ƿ����sum-��ǰֵ���Ǿ�ֱ��return
//    // ���������һ��ѭ�������ݣ�1 <= nums[i] <= 100��Ҳ����ʹ�ü�������
//    vector<int> minSubsequence(vector<int>& nums) {
//        int sum  = accumulate(nums.begin(), nums.end(), 0);
//        sort(nums.begin(), nums.end());
//
//        vector<int> res;
//
//        for (int i = nums.size() - 1, num = 0; i >= 0; i--) {
//            num += nums[i];
//            res.push_back(nums[i]);
//            if (num > sum - num) {
//                return res;
//            }
//        }
//
//        return {};
//    }
//};
//
//int main() {
//	return 0;
//}