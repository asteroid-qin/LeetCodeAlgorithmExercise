//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺����һ���� �ǵݼ�˳�� ������������� nums
//    // ������ ÿ�����ֵ�ƽ�� ��ɵ������飬Ҫ��Ҳ�� �ǵݼ�˳�� ����
//    // ˼·:��򵥾��Ǳ���һ��ÿ��Ԫ�ض�ƽ������������ٷ��ء�
//    // ���Ž⣺�����������ֵ����Ϊnums��һ�����������飬���������ƽ�����ֵ�϶���ͷ����β�����ǳ���Ҫ��
//    // ���������˼·���Ϳ���ʹ��˫ָ���������������ÿ��ѡ�����ֵȻ����ƣ�ֱ��ָ����ȡ�
//    vector<int> sortedSquares(vector<int>& nums) {
//        vector<int> res(nums.size());
//
//        for (int i = 0, j = nums.size() - 1, index = j; index >= 0; index--) {
//            if (nums[i] * nums[i] > nums[j] * nums[j]) {
//                res[index] = nums[i] * nums[i];
//                i++;
//            }
//            else {
//                res[index] = nums[j] * nums[j];
//                j--;
//            }
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}