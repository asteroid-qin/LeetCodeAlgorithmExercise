//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺����һ���������� nums�����㷵������λ��Ϊ ż�� �����ֵĸ�����
//    // ˼·�������������ˡ�1 <= nums[i] <= 10^5
//    // �ؼ�����θ���һ���������ж�λ��Ϊ ż����
//    // ������<10Ϊ����,<100ż����<1000������<10000ż����<100000����
//    // ֱ��дһ����������
//    int findNumbers(vector<int>& nums) {
//        int sum = 0;
//
//        for (auto& i : nums) {
//            if (judgeEven(i)) {
//                sum++;
//            }
//        }
//        
//        return sum;
//    }
//
//    bool judgeEven(int n) {
//        if (n < 10 || (n >= 100 && n < 1000) || (n >= 10000 && n < 100000)) {
//            return false;
//        }
//
//        return true;
//    }
//
//};
//int main() {
//	return 0;
//}