//#include<iostream>
//#include<vector>
//#include<unordered_set>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    // ��һ��������棺��������ظ�����
//    // ˼·��ֱ�ӵ���api����
//    // ����һ�֣������������Ҫ�����ظ������Բ���ʹ��set���ò��÷���1��
//    // ������vector������˫ָ��������������ָ��ָ���ֵ��ͬ�ͷ���vector��
//    // ����Ȼ���жϴ�С���ƶ�ֵֵƫС��ָ��
//    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
//        vector<int> v;
//
//        sort(nums1.begin(), nums1.end());
//        sort(nums2.begin(), nums2.end());
//    
//        int i = 0, j = 0;
//
//        while (i < nums1.size() && j < nums2.size()) {
//            // �жϵ�ǰֵ
//            if (nums1[i] == nums2[j]) {
//                v.push_back(nums1[i]);
//                // ���ˣ���������������Ҫͬʱ����
//                i++;
//                j++;
//            }
//            else if (nums1[i] > nums2[j]) {
//                j++;
//            }
//            else {
//                i++;
//            }
//        }
//
//        return v;
//    }
//};
//
//int main() {
//	return 0;
//}