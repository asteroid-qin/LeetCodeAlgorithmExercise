//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�ҳ�nums������ֵ��
//    // ˼·��������1 <= nums.length <= 100��˫forѭ�����Կ��Խ����
//    // ��������ʱ�临�Ӷ���O(n^2),���Կ��ٹ�������Ҫ��취�Ż�
//    // ˼·�ǣ�������׼��һ��nums+1��С�����飨��Ϊ�������⣬����ֵ���ֻ��ȡ��nums.size(),nums��С���㹻�ˣ�
//    // ��nums���������У�ֵ���ǳ��ֵ�����
//    // Ȼ�������������飬i���Ե�������ֵ���������㵱ǰarr[i] += arr[i+1](��Ҫ�Ѻ�������������)
//    // ���arr[i]==i��ֱ�ӷ���i��Ĭ�Ϸ���-1��Ϊ�˷�ֹ�����i��Ҫ<mʱ�����㣩
//    int specialArray(vector<int>& nums) {
//        for (int i = 1; i <= 100; i++) {
//            int count = 0;
//            for (auto& num : nums) {
//                count += (num >= i);
//            }
//            if (count = i) return i;
//        }
//
//        return -1;
//    }
//
//    int specialArrayP(vector<int>& nums) {
//        int m = nums.size();
//        vector<int> arr(m + 1);
//        for (auto& i : nums) {
//            arr[min(i,m)]++; // Ϊ�˷�ֹ�����ȡ��Сֵ
//        }
//
//        for (int i = m; i > 0; i--) {
//            if (i < m) {
//                arr[i] += arr[i + 1];
//            }
//            
//            if (arr[i] == i) {
//                return i;
//            }
//        }
//        
//
//        return -1;
//    }
//};
//
//int main() {
//	return 0;
//}