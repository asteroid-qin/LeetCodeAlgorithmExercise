//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�ҳ������±꣬������(nums[i]-1)*(nums[j]-1)��Ҫ�󷵻����ֵ
//    // ˼·�����������-1������ͱ������nums[i] * nums[j]�������ֵ
//    // �������⣬��i��jȡ�������ֵ����������Сֵʱ���Ϳ��Ի�ȡ���ֵ
//    // Ҳ���Ƕ�nums�������򣬷��ط���������Сֵ���������ֵ�˻������ֵ����
//    // �ȵȣ�����ϸ���⣬���֣�1 <= nums[i] <= 10^3�����Ը���û��Ҫ���Ǹ�ֵ�����...
//    int maxProduct(vector<int>& nums) {
//        sort(nums.begin(), nums.end()); // ע�⣺�������api��Ȼˬ����ʱ�临�Ӷ���O(nlogn),�ռ临�Ӷ���O(logn)
//        // �������û�¸ɣ�����ֱ�ӱ���һ��nums������������ڶ���ֵ�����أ�����ʱ�临�Ӷ���O(n),�ռ���O(1)��
//
//        return (nums[nums.size() - 1] - 1) * (nums[nums.size() - 2] - 1);
//    }
//
//    // ֱ�ӳ��ģ����������ֵ����Сֵ��ô�򵥵��Ѿ�����д��..
//    int maxProduct(vector<int>& nums) {
//        int max1 = 0, max2 = 0; //max1Ϊ���ֵ,max2Ϊ�δ�ֵ
//        for (int num : nums) {
//            if (num > max1) {  
//                max2 = max1;
//                max1 = num;
//            }
//            else if (num > max2) {
//                max2 = num;
//            }
//        }
//
//        return (max1 - 1) * (max2 - 1);
//    }
//};
//
//int main() {
//	return 0;
//}