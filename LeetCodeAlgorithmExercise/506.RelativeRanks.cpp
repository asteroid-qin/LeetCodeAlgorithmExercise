//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<unordered_map>
//#include<string>
//using namespace std;
//
//class Solution {
//public:
//    
//    
//    // Ŀ�꣺����ɼ����ɼ����ظ�����Ҫ�󷵻�11��Ӧ�����Ρ����е�һ�����ڶ�������������������ַ�����
//    // �Ժ�����������
//    // ˼·����������������һ��map��¼ÿ�������±꣬key�����ֵ�ֵ��value�����ֵ�����
//    // �ٱ������������nums����ÿ������map��ȡ������
//    vector<string> findRelativeRanks(vector<int>& nums) {
//        // ׼���������ܽ��
//        vector<string> res(nums.size());
//        // ��map��¼ÿ������ԭʼ�±�
//        unordered_map<int, int> myMap;
//        for (int i = 0; i < nums.size(); i++) {
//            myMap[nums[i]] = i;
//        }
//        // ��nums����(��������)
//        sort(nums.begin(), nums.end(), cmp1);
//        // �������������nums����ǰ����
//        for (int i = 0; i < nums.size(); i++) {
//            if (i == 0) {
//                res[myMap[nums[i]]] = "Gold Medal";
//            }
//            else if (i == 1) {
//                res[myMap[nums[i]]] = "Silver Medal";
//            }
//            else if (i == 2) {
//                res[myMap[nums[i]]] = "Bronze Medal";
//            }
//            else {
//                res[myMap[nums[i]]] = to_string(i + 1);
//            }
//        }
//
//        return res;
//    }
//
//    // ���ڵ���ķ���
//    static int cmp1(int a, int b)
//    {
//        return a > b;
//    }
//
//};
//
//int main() {
//	return 0;
//}