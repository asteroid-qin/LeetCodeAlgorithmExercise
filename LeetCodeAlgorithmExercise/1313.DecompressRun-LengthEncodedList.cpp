//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺����һ�����г̳��ȱ���ѹ���������б� nums ��
//    // ˼·�������������ˣ������Ŀ�ͷǳ��򵥣�
//    vector<int> decompressRLElist(vector<int>& nums) {
//        vector<int> res;
//
//        for (int i = 0; i < nums.size(); i += 2) {
//            while (nums[i]) {
//                res.push_back(nums[i + 1]);
//                nums[i]--;
//            }
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}