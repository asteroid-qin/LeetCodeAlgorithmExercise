//#include<iostream>
//#include<vector>
//#include<numeric>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�ж�һ��arr�Ƿ��ܹ��ֳ����ȷ֡�
//    // ˼·����֮ǰ�������ж��ܷ񱻷ֳ����ȷ����ͣ��������A�ĺ�.��ע����ж�A�ܷ�3��������������������
//    // Ȼ�����һ��A,��Ҫ�ҵ���һ��num = A / 3���ҵ��˾�break����Ҫ�����ʱi�Ѿ����׵����
//    // Ȼ���ٱ���һ��A����Ҫ�ҵ���һ��num = A * 2 / 3��λ�á�ע���ʱi���ж�������һ��Ҫ��β��һ��λ��
//    bool canThreePartsEqualSum(vector<int>& A) {
//        int sum = accumulate(A.begin(), A.end(), 0);
//
//        int i = 0, num = 0, n = A.size();
//
//        if (sum % 3 != 0)
//            return false;
//
//        while (i < n) {
//            num += A[i++];
//            if (num == sum / 3) {
//                break;
//            }
//        }
//
//        if (i == n) {
//            return false;
//        }
//
//        while (i + 1 < n) { // ע�⣡��ΪҪ�ֳ����ȷ֣�����һ��Ҫ��һ��λ��
//            num += A[i++];
//            if (num == 2 * sum / 3) {
//                return true;
//            }
//        }
//        
//
//        return false;
//    }
//};
//
//int main() {
//    vector<int> test = { 1,2,3,4 };
//    Solution s;
//
//    s.canThreePartsEqualSum(test);
//
//	return 0;
//}