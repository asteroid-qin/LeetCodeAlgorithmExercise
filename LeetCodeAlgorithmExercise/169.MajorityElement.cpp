//#include<iostream>
//#include<vector>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    // �������⣬����һ��vector�����е��������������һ���뵽��������map
//    int majorityElement(vector<int>& nums) {
//        // ׼��һ��map
//        unordered_map<int, int> map;
//        // ׼��һ��������¼������һ����¼���Ĵ���
//        int majority = 0, count = 0;
//        // �������nums
//        for (auto i : nums) {
//            ++map[i];
//            if (map[i] > count) {
//                count = map[i];
//                // ���������������
//                majority = i;
//            }
//        }
//
//        cout << "map[2]:" << map[2] << ", map[3]:" << map[3] << endl;
//        cout << "�����" << majority << endl;
//
//        return majority;
//    }
//};
//
//int main() {
//    vector<int> v = {3,2,3};
//
//    Solution s;
//    s.majorityElement(v);
//
//	return 0;
//}