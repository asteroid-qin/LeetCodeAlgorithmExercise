//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺дһ�����ֲ��ҡ����ڷ����±꣬�����ڷ���-1��ע�����⣬�ǲ�������ģ�
//    int search(vector<int>& nums, int target) {
//        int l = 0, r = nums.size() - 1, mid;
//
//        while (l <= r) {
//            mid = (l + r) / 2;
//
//            if (nums[mid] == target) {
//                return mid;
//            }
//            else if (nums[mid] > target) {
//                r = mid - 1;
//            }
//            else {
//                l = mid + 1;
//            }
//        }
//
//        return -1;
//    }
//
//};
//int main() {
//	return 0;
//}