//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // ��������һ�����ͷ�������Ǽ��⣬������Ҫʹ�ö�̬�滮...
//	// �����Լ�д��󣬷�������㷨ȷʵ��	
//    int rob(vector<int>& nums) {
//        if (nums.size() == 0)
//            return 0;
//
//        if (nums.size() == 1) {
//            return nums[0];
//        }
//
//        // �ؼ������г���̬�滮���̣�
//        // ��kΪ����������k �� 2���������ֿ��ܣ�
//        // һ���ǵ�k��������ôk-1��Ͳ����������Ե�k�����õ��Ľ����k-2���õ����ܽ����ϵ�k���õ��Ľ��
//        // ��һ���ǵ�k�첻������ô�ܽ���ǵ�k-1��ʱ���ܽ��
//
//        // ͨ������ķ�����������Ҫ��������������¼��k-1��͵�k-2����ܽ��
//        // ���ｫsecond��Ϊ������أ���ΪҪ�ų�k=2�����
//        // ���о���Ϊ�˼����ڴ����ģ�ʹ�ù����������������
//        int first = nums[0], second = max(first, nums[1]);
//
//        for (int i = 2; i < nums.size(); i++) {
//            int temp = second;
//            second = max(first + nums[i], second);
//            first = temp;
//        }
//
//
//        return second;
//    }
//};
//
//int main() {
//
//	return 0;
//}