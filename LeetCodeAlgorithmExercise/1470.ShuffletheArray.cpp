//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺nums����2n��Ԫ�أ�Ҫ��ԭ����nΪ�ֽ��ߣ����н�������
//    // ˼·��׼��2n��С��res������nums���ѵ�ǰi��i+nԪ�ذ���˳�����res�С�������������res
//    vector<int> shuffle(vector<int>& nums, int n) {
//        vector<int> res(2 * n);
//
//        for (int i = 0; i < n; i++) {
//            res[i * 2] = nums[i];
//            res[i * 2 + 1] = nums[i + n];
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}