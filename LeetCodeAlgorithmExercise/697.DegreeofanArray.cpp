//#include<iostream>
//#include<vector>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺������Ķȣ�Ȼ����ݶ����������������
//    // ˼·�������������Ķȣ��ȿ��ܳ��ֶ������Ҫ�������¼��
//    // ��Ϊ������������������������һ�γ��ֵ�����-��һ�γ��ֵ�����+1�����Ե���map����ס��һ�κ͵ڶ��γ��ֵ�
//    // ����
//    int findShortestSubArray(vector<int>& nums) {
//        int curMap[50000] = {0};
//        int left[50000] = {0};
//        int right[50000] = {0};
//        int count = 0;
//        vector<int> v;
//        for (int i = 0; i < nums.size(); i++) {
//            int x = nums[i];
//
//            curMap[x]++;
//
//            if (curMap[x] == 1)left[x] = i;
//            right[x] = i;
//
//            if (curMap[x] > count) {
//                count = curMap[x];
//                v.clear();
//                v.push_back(x);
//            }
//            else if (curMap[x] == count) {
//                v.push_back(x);
//            }
//        }
//        // ����ÿ���ȵ���С�����鳤
//        int res = INT_MAX;
//        for (auto i : v) {
//            res = min(res, right[i] -  left[i] + 1);
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}