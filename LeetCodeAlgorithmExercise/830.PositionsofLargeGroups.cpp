//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺����s���ַ���������3�μ����ϵ��±꡾��ʼ������������Ϊ���ܴ��ڶ�������Է��ض�ά����
//    // ˼·����¼��ʼ�±ꡢ��ǰ�ַ������ִ���������������ڵ���3��ô�Ͱѳ�ʼ�±�͵�ǰ�±��¼����
//    vector<vector<int>> largeGroupPositions(string s) {
//        vector<vector<int>> res;
//        int i = 0, j = 0;
//
//        while (j < s.size()) {
//            char c = s[j];
//            int count = 1;
//
//            while (j + 1 < s.size() && s[j + 1] == c) {
//                count++;
//                j++;
//            }
//
//            if (count > 2) {
//                res.push_back({i, j});
//            }
//
//            j++;
//            i = j;
//        }
//
//        return res;
//    }
//};
//
//int main() {
//
//    Solution s;
//    s.largeGroupPositions("abcd");
//	return 0;
//}