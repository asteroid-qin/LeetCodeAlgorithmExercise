//#include<iostream>
//#include<vector>
//#include<unordered_set>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺����������Ľ���
//    // ˼·������1�������Ȱ�������������ʹ��˫ָ���ͷ����������������飬
//    // ���ֵ��Ⱦͷ����½��������У�����Ⱦ͸������ѡ���Եİ�ָ��++
//    // ����2��˵���󽻼�����Ӧ���뵽���ϡ����԰���������ת�ɼ��ϣ����󼯺ϵĽ��������ѽ�������vector�в�����
//    // �����ԣ�����2�������㣡
//    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//        // ��Ž��
//        vector<int> v;
//
//        // ��ת�ɼ���
//        unordered_set<int> set1(nums1.begin(),nums1.end());
//        unordered_set<int> set2(nums2.begin(), nums2.end());
//        // ���������ϵĽ���������ֱ�ӵ���api���ɣ���ȻҲ�����Լ�дһ��
//        // ���޷��Ǳ�������һ�����ϣ���setֵ����һ�������в飬�鵽�˾ʹ��룩
//        // ���ˣ�����㷨��Ķ���
//        // ����Ż�һ�£�ѡ������С�ı���,���˲��Ż���..������Ȼ��������
//        for (auto key1 : set1) {
//            if (set2.count(key1)) {
//                v.push_back(key1);
//            }
//        }
//
//       
//        return v;
//    }
//};
//
//int main() {
//	return 0;
//}