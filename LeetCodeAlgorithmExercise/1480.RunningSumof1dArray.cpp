//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺nums[i]��ֵ���� ��ǰֵ+ǰi-1��ֵ��sum
//    // ˼·���ñ�����¼ǰi-1���ͣ�Ȼ�����ǰi��ֵ
//    // ��ȻҲ���Դ�1��ʼ��������ǰi��ֵ���ڵ�ǰֵ+i-1��ֵ
//    vector<int> runningSum(vector<int>& nums) {
//        int sum = 0;
//        for (auto& i : nums) {
//            i += sum;
//            sum = i;
//        }
//
//        return nums;
//    }
//
//    // ������ʵ�����..��ʵֻҪ���ñ�������
//    vector<int> runningSum(vector<int>& nums) {
//        for (int i = 1; i < nums.size(); i++) {
//            nums[i] += nums[i - 1];
//        }
//
//        return nums;
//    }
//
//};
//int main() {
//	return 0;
//}
