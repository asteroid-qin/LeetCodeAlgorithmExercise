//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺��������k������������ƽ����
//    // ˼·��ʹ�ö�̬�滮���ȼ���ÿ����������k-1���ĺͣ�Ȼ��ȡ���ֵ����󷵻�������ֵ/k����
//    double findMaxAverage(vector<int>& nums, int k) {
//        int res = 0, preSum = 0, curSum = 0;
//
//        for (int i = 0; i < nums.size(); i++) {
//            if (i < k) {
//                preSum += nums[i];
//                res = preSum;
//            }
//            else {
//                curSum = preSum - nums[i - k] + nums[i];
//                res = max(res, curSum);
//
//                preSum = curSum;
//            }
//        }
//
//        return res * 1.0 / k;
//    }
//};
//
//int main() {
//    Solution s;
//    vector<int> res = { 0,4,0,3,2 };
//    cout << "result:" << s.findMaxAverage(res, 1) << endl;
//
//	return 0;
//}