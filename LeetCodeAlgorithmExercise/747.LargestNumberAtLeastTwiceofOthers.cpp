//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//
//    // Ŀ�꣺�ҳ�һ�������ǵڶ������������
//    // һ��forѭ�����ҳ���һ�͵ڶ��������ж������Ƿ�������Ǿͷ��ص�һ�������±꣬���򷵻�-1
//    int dominantIndex(vector<int>& nums) {
//        int f = -1, s = -1, maxIndex = -1;
//
//        for (int i = 0; i < nums.size(); i++) {
//            if (nums[i] > f) {
//                s = f;
//                f = nums[i];
//                maxIndex = i;
//            }
//            else if (nums[i] == f) {
//                continue;
//            }
//            else if (nums[i] > s) {
//                s = nums[i];
//            }
//
//        }
//
//        return (f < s * 2) ? -1 : maxIndex;
//    }
//};
//
//int main() {
//	return 0;
//}