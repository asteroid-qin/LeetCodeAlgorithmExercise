//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺����һ�������·�Χ��vector�������������
//    // ��ȣ��������ֱ���ͷ��β��һλ��������������������ͷ��β��ֵ����1���÷ֿ�
//    // ˼·����Ҫ��һ��������¼��ʼ�ضϵ�λ�ã�����ǰԪ�غ���һ��Ԫ������ʱ���Ϳ��Լ����������
//    // ֱ��������ֵͬ����ʱ�ȽϿ�ʼ�ض�λ�õ�ֵ�͵�ǰ��ֵ����Ⱦ���ͬһ��Ԫ�أ�����Ⱦ���Ҫ�γ��±�
//    // �����½׶�λ�õ�ֵ
//    vector<string> summaryRanges(vector<int>& nums) {
//        // ׼��һ���Ž��������
//        vector<string> r;
//
//        // ��¼ͷλ��
//        int k = 0;
//
//        // ʹ��˫ָ���whileѭ��
//        for (int i = 0, j  = 0; j < nums.size(); j++) {
//            if (j + 1 < nums.size() && nums[j + 1] == nums[j] + 1) {
//                continue;
//            }
//            if (i == j) {
//                // �����ȣ���ֻ��Ҫ���뵥��
//                r.push_back(to_string(nums[i])+"");
//            }
//            else {
//                // ����Ⱦ���Ҫ�ض�
//                r.push_back(to_string(nums[i]) + "->" + to_string(nums[j]));
//            }
//            i = j + 1;
//        }
//
//        return r;
//    }
//};
//
//int main() {
//	return 0;
//}