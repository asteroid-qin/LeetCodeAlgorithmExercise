//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�ж�nums�Ƿ�������Ա�ɷǵݼ�����
//    // ˼·���������ߵ�ֵ���ڵ������ұߵ�ֵ�ʹ����������Ҳ���ǻ�������ֵ�����ұߵ������
//    // ���Ǹ������⣬��ʹ�ǳ����������ֵ�����ұߵ����Ҳֻ�ܳ���һ�Ρ��ڶ���ֱ�Ӿ���false
//    // Ĭ�Ϸ���true��
//    bool check(vector<int>& nums) {
//        int n = nums.size();
//        //�о�����ת
//        bool isCount = nums[0] >= nums[n - 1];
//
//        for (int i = 1; i < n; i++) {
//
//            if (nums[i] < nums[i - 1]) {
//                if (isCount) {
//                    isCount = false;
//                }
//                else {
//                    return false;
//                }
//            }
//
//        }
//        return true;
//    }
//};
//
//int main() {
//	return 0;
//}