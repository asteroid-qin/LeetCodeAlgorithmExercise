//#include<iostream>
//#include<vector>
//using namespace std;
//
//
//class Solution {
//public:
//    // Ŀ�꣺����һ�����죬v[i][j] = 1����½�أ�v[i][j]=0 ����ˮ�����ܳ���
//    // ˼·������һ��������鼴�ɡ��ȴ���Խ����������жϵ�ǰ��ˮ��½�ء���ˮ�͹���
//    // ��½�ؾ��жϵ�ǰ½�ص�ǰ�����ҵ�����������ˮ�Ͱѱ߳�+1�������½�ؾͲ�����
//    // ���������������ά����Ϳ�������߳�����
//    int islandPerimeter(vector<vector<int>>& grid) {
//        int islandP = 0;
//
//        for (int i = 0; i < grid.size(); i++) {
//            for (int j = 0; j < grid[0].size(); j++) {
//                if (grid[i][j] == 0)
//                    continue;
//                // �����ǰ��½�أ���ʼ���������жϡ�Խ��ֱ��+1
//                if (j - 1 < 0 || !grid[i][j - 1]) {
//                    islandP++;
//                }
//                if (j + 1 >= grid[0].size() || !grid[i][j + 1]) {
//                    islandP++;
//                }
//                if (i - 1 < 0 || !grid[i - 1][j]) {
//                    islandP++;
//                }
//                if (i + 1 >= grid.size() || !grid[i + 1][j]) {
//                    islandP++;
//                }
//             }
//        }
//
//        return islandP;
//    }
//};
//
//int main() {
//    vector<vector<int>> v;
//    v.push_back({ 1,2,3,4 });
//    v.push_back({ 1,2,3,4 });
//    v.push_back({ 1,2,3,4 });
//
//    cout << v.size() << endl;
//    cout << v[0].size() << endl;
//
//	return 0;
//}