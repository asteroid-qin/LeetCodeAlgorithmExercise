//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺��ִ�������� indices ָ�������������󣬷��ؾ����� ������ֵ��Ԫ�� ����Ŀ��
//    // ˼·����򵥵ľ��ǽ�һ����ά�������һ��indices��Ȼ���ٱ���һ�������������Ĵ���
//    // ������������İ취���������⣬indicesÿһ��x��y������ÿһ�к�ÿһ��+1
//    // ����ֻ��Ҫ��סÿ��+1�Ĵ�����ÿ��+1�Ĵ������͵ó���ǰ��+1�Ĵ���
//    // ������û��Ҫ׼��m*n��С�ľ��󣬶���m+n���㹻�ˣ���ɶԿռ���Ż���Ҳ����Ҫ������ÿһ��ÿһ��++��ʱ�临�Ӷ�Ҳ��������
//    // ������⣬���ַ�����ʵ����̫���ˡ�������Ļ�����������ֵ��Ԫ�����Ŀֻ�����������
//    // һ���ǵ�ǰ��Ϊ�桢��Ϊż����һ���ǵ�ǰ��Ϊż����Ϊ����
//    // ����û��Ҫÿһ�ֱ������У�����ʹ�ü�����ֱ�Ӽ����ÿһ�ֿ���
//    // ����ʵ���ǣ���Ϊ��������Ŀ*��Ϊż������Ŀ+��Ϊ��������Ŀ+��Ϊż������Ŀ
//    int oddCells(int n, int m, vector<vector<int>>& indices) {
//        vector<vector<int>> matrix;
//
//        for (auto v : indices) {
//            for (int i = 0; i < m; i++) {
//                matrix[v[0]][i]++;
//            }
//            for (int i = 0; i < n; i++) {
//                matrix[i][v[1]]++;
//            }
//        }
//        int count = 0;
//        for (auto& v : matrix) {
//            for (auto& i : v) {
//                if (i % 2 == 1) {
//                    count++;
//                }
//            }
//        }
//
//        return count;
//    }
//
//    int oddCellsP(int n, int m, vector<vector<int>>& indices) {
//        vector<int> row(n, 0);
//        vector<int> col(m, 0);
//
//        for (auto& v : indices) {
//            row[v[0]]++;
//            col[v[1]]++;
//        }
//        int count = 0;
//        for (auto& i : row) {
//            for (auto& j : col) {
//                if ((i + j) % 2 == 1) {
//                    count++;
//                }
//            }
//        }
//
//        return count;
//    }
//
//    // ̫����..
//    int oddCellsPP(int n, int m, vector<vector<int>>& indices) {
//        vector<int> row(n, 0);
//        vector<int> col(m, 0);
//
//        for (auto& v : indices) {
//            row[v[0]]++;
//            col[v[1]]++;
//        }
//        int obb_row = 0, obb_col = 0;
//        for (auto& i : row) {
//            if (i % 2 == 1) {
//                obb_row++;
//            }
//        }
//        for (auto& i : col){
//            if (i % 2 == 1) {
//                obb_col++;
//            }
//        }
//
//        return obb_row * (m - obb_col) + obb_col * (n - obb_row);
//    }
//};
//
//
//int main() {
//	return 0;
//}