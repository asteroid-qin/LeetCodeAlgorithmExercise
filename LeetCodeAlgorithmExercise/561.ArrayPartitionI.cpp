//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//
//class Solution {
//public:
//    // Ŀ�꣺��һ������Ϊ2n�������ֳ����ӣ�ÿ��ȡ��Сֵ���������п�����ÿ�Ӻ͵����ֵ
//    // ˼·����Ҫÿһ�Ե���Сֵ�ĺ������ֵ����ôӦ����ѡһ����СֵȻ����������ѡһ�������������ֵ��
//    // ֻҪ��ÿ����֮��Ĳ�඼����ͣ���ô����ÿ�ӵ���Сֵ�ĺ;������ֵ
//    int arrayPairSum(vector<int>& nums) {
//        // ֱ������
//        sort(nums.begin(), nums.end());
//        // ��¼���
//        int res = 0;
//        // ֱ��ȡ��Сֵ����
//        for (int i = 0; i < nums.size(); i += 2) {
//            res += nums[i];
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}