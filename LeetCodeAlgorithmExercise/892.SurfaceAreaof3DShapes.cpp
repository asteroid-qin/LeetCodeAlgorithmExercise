//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺������λ����ı����...(����Ҳ��..)
//    // ˼·��forѭ������������飬�����������Ҷ���Ϊ0���߲���ȡ����ô��+1�����+4��Ȼ���κ�һ����0Ԫ�ؿ���+2.
//    // �����������õ����
//    int surfaceArea(vector<vector<int>>& grid) {
//        int res = 0;
//        int offsetX[] = { -1,1,0,0}; // ��������������
//        int offsetY[] = { 0,0,-1,1};
//
//        for (int i = 0; i < grid.size(); i++) {
//            for (int j = 0; j < grid[0].size(); j++) {
//                // �����ж����������Ƿ��ȡ
//                for (int k = 0, x, y, dif; k < 4; k++) {
//                    x = i + offsetX[k];
//                    y = j + offsetY[k];
//                    bool over = ((x < 0 || x >= grid.size()) || (y < 0 || y >= grid[0].size()) );
//                    if (over || grid[x][y] == 0) {
//                        res += grid[i][j];
//                    }
//                    else { // ����������ϰ����������ǰ���ϰ���Ҫ�ߣ���ô�ͰѸ߳��Ĳ�����Ϊ�����
//                        dif = grid[i][j] - grid[x][y];
//                        if (dif > 0) {
//                            res += dif;
//                        }
//                    }
//                }
//                if (grid[i][j]) { // �����ǰ����0���Ͱ������������ȥ
//                    res += 2;
//                }
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