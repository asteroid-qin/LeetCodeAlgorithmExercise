//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺����δ�����������������������еĳ���
//    // ˼·��res��¼�����count��¼�������������е�ֵ����0��ʼ�������ǰ��>=�ڶ�������count=1,
//    // �����ǰ��<�ڶ�������count++
//    int findLengthOfLCIS(vector<int>& nums) {
//        int res = 0, count = 1;
//
//        for (int i = 0; i + 1 < nums.size(); i++) {
//            count = (nums[i] < nums[i + 1]) ? count + 1 : 1;
//            res = max(res, count);
//        }
//
//        return nums.size() == 0 ? 0 :res;
//    }
//};
//
//int main() {
//	return 0;
//}