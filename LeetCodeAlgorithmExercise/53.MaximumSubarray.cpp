//#include<iostream>
//#include<vector>
//using namespace std;
//class Solution {
//public:
//    // ��Ȼ���Ǻ�����⣬���Ǳ���ù�
//    // ʹ�ö�̬�滮���һ������������������⣨�о���ţ�Ǽ��ˣ�
//    // ��һ��Math��ÿ���õ����Ž⣬���������ұ�����ÿһ���֮ǰ��
//    // �ڶ���Math�������仯�����е����ֵ������������
//    int maxSubArray(vector<int>& nums) {
//        int sum = nums[0], result = nums[0];
//
//        if (nums.size() == 1)
//            return result;
//
//        for (int i = 1; i <= nums.size() - 1; i++)
//        {
//            // ��֤ÿ�εõ��Ķ������ֵ
//            sum = max(nums[i], sum + nums[i]);
//            result = max(sum, result);
//        }
//        return result;
//    }
//};
//
//// ����Ҫ�����ˣ�ֱ����LeetCode������д����
//int main() {
//
//
//    return 0;
//}