//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺���� k ��Ǩ�Ʋ��������յõ��� ��ά����
//    // ˼·����grid������������k��Ǩ�ƾ��Ǵ�ָ���ƶ�k������KΪ��ͷ��
//    // ���Զ�k%��m*n�����õ��ľ����µ�ͷ��Ȼ�����һ��õ����
//    // �ؼ��ǰѶ�ά������ôת����һά����������
//    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
//        int m = grid.size(), n = grid[0].size();
//        vector<vector<int>> res(m, vector<int>(n));
//        for (int i = 0; i < m; i++) {
//            for (int j = 0; j < n; j++) {
//                int newCol = (j + k) % n;
//                int temp = (j + k) / n;
//                int newRow = (i + temp) % m;
//                res[newRow][newCol] = res[i][j];
//            }
//        }
//
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}