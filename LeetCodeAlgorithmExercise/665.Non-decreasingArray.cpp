//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�ж����ֻ�ı�һ�������Ƿ��ܹ�����������ɷǵݼ�����
//    // ˼·���ӵڶ�������λ�ÿ�ʼ���ۡ�
//    // �����ǰ��ߵ�ֵС�ڵ����ұߵ�ֵ�������ǰֵ�����ұߵ�ֵ�ͼ�¼���޸�һ�Σ������õ�ǰֵΪ��ֵ
//    // �������ۿ����������ɵ��...
//    bool checkPossibility(vector<int>& nums) {
//        int flag = 0;
//
//        // ������Ϊ1������Ϊ3��ʼ����������Ϊ2û��Ҫ����
//        for (int i = 1; i + 1 < nums.size(); i++) {
//            if (nums[i - 1] < nums[i + 1]) {
//                if ((nums[i] > nums[i + 1]) || (nums[i] < nums[i - 1])) {
//                    nums[i] = nums[i - 1];
//                    flag++;
//                }
//            }
//            else if (nums[i - 1] == nums[i + 1]) {
//                if (nums[i] != nums[i - 1]) {
//                    nums[i] = nums[i - 1];
//                    flag++;
//                }
//            }
//            else{  // �����ֵ������ֵ,��Ҫ�жϵ�ǰֵ�Ƿ�С����ֵ 9 2 5
//                if (nums[i] <= nums[i + 1]) {
//                    flag++;
//                }
//                else if (nums[i] >= nums[i - 1]) {  // �����ǰֵ���ڻ��ߵ�����ֵ
//                    nums[i + 1] = nums[i];
//                    flag++;
//                }
//                else {
//                    return false;
//                }
//            }
//
//            if (flag == 2) {
//                return false;
//            }
//        }
//        
//
//        return true;
//    }
//
//    // ����д��̫��ª��..����һЩ�Ż�
//    bool checkPossibility(vector<int>& nums) {
//        int count = 0, pre = INT_MIN;
//
//        for (int i = 0; i + 1 < nums.size() && count != 2; i++) {
//            if (nums[i] > nums[i + 1]) {
//                if (pre > nums[i + 1]) {
//                    nums[i + 1] = nums[i];
//                }
//                count++;
//            }
//            pre = nums[i];// 4 2
//        }
//
//        return count != 2;
//    }
//};
//
//int main() {
//	return 0;
//}