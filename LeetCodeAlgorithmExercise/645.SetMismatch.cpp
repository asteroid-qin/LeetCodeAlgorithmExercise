//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺һ��1-n��nums�У���һ�������������Σ������������������ǵ�����
//    // ˼·��ʹ��map����...һ�α������ӳ�䣬value�ǳ��ֵĴ������ٱ���һ��ӳ�䡣����ĸ�ֵ����2���ĸ�ֵ����0
//    // ��������ʱ�䡢�ռ临�Ӷȶ���O(n)������������Ż�һ�Ρ����粻�½�arr��ֱ�Ӳ���ԭ����
//    // ��ÿһ�γ��ֹ���Ԫ��ת�ɸ��������һ�����ڶ��Σ�Ҳ����С��0��������ô����������ظ�����
//    // �ٴ�1��nums.size()��ѯ���nums, �����һ��ֵ����������ôʧȥ���������������+1�����Ը������������
//    vector<int> findErrorNums(vector<int>& nums) {
//        vector<int> arr(nums.size(), 0);
//        for (auto i : nums) {
//            arr[i - 1]++;
//        }
//
//        int repeat = 0, missing = 0;
//
//        for (int i = 1; i <= nums.size(); i++) {
//            if (!arr[i - 1]) {
//                missing = i;
//            }else if (arr[i - 1] == 2) {
//                repeat = i;
//            }
//
//            if (repeat && missing) {
//                return { repeat , missing };
//            }
//        }
//
//        return {};
//    }
//
//    vector<int> findErrorNums3(vector<int>& nums) {
//        int dup = 0, missing = 0;
//        // �ҵ��ظ�ֵ
//        for (int n : nums) {
//            missing ^= abs(n);
//            if (nums[abs(n) - 1] < 0)
//                dup = abs(n);
//            else
//                nums[abs(n) - 1] *= -1;
//        }
//        // �ҵ�ȱʧ��ֵ
//        for (int i = 1; i <= nums.size(); i++) {
//            missing ^= i;
//        }
//
//        return { dup , missing ^ dup };
//    }
//
//    vector<int> findErrorNums2(vector<int>& nums) {
//        int dup = -1, missing = 1;
//
//        for (int n : nums) {
//            if (nums[abs(n) - 1] < 0)
//                dup = abs(n);
//            else
//                nums[abs(n) - 1] *= -1;
//        }
//        for (int i = 1; i < nums.size(); i++) {
//            if (nums[i] > 0)
//                missing = i + 1;
//        }
//
//        return {};
//    }
//};
//
//int main() {
//	return 0;
//}