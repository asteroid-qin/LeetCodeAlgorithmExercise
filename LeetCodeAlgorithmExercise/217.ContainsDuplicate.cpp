//#include<iostream>
//#include<vector>
//#include<unordered_set>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺��һ��vector���飬�ж������Ƿ�����ظ���
//    // ˼·���Ƿ�����ظ���������ʹ��set���߱����߷ţ������ȡ���ʹ������ظ���
//    // ����ʵ�ֳ����򵥣����Կ���һ�ι�����
//    bool containsDuplicate(vector<int>& nums) {
//        // ׼��һ��set����
//        unordered_set<int> mySet;
//
//        for (int i = 0; i < nums.size(); i++) {
//            if (mySet.count(nums[i])) {
//                return true;
//            }
//            mySet.insert(nums[i]);
//        }
//
//        return false;
//    }
//};
//
//int main() {
//	return 0;
//}