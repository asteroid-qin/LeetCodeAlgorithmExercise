//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺��nums��ÿ����ͬ�����ֵ�һ�飬���˵�����С��1���飬Ȼ����ÿ��Ķ����ĺͣ�ÿ��n��Ԫ�أ�ÿ��ѡ2����
//    // ˼·������1 <= nums[i] <= 100��ʹ��bucket��¼ÿ����������
//    // Ȼ�����������飬���˵�ֵС��2��
//    // ����1�ͼ��㵱ǰֵ*��ǰֵ-1/2��Ȼ��ӵ�res�С���󷵻����res
//    int numIdenticalPairs(vector<int>& nums) {
//        int res = 0;
//        int buck[100] = { 0 };
//        for (auto& i : nums) {
//            buck[i - 1]++;
//        }
//        for (auto& i : buck) {
//            if (i < 2) continue;
//            res += i * (i - 1) / 2;
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}