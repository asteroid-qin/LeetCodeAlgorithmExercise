//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺����һ�� m * n �ľ��� grid�������е�Ԫ�������ǰ��л��ǰ��У����Էǵ���˳�����С� 
//    // ����ͳ�Ʋ����� grid �� ���� ����Ŀ��
//    // ˼·��ֱ�ӱ������ñ�����¼�������������ɡ�������������Ż������������
//    // ����һ�У������ǰ������0��break����û��Ҫ����
//    // �ðɣ����Խ����Ż���˳�����ÿһ�У��������ÿһ��
//    // �Ż����֣���һ����������¼�ж����С������ĸ����͵�������*ʣ������
//    int countNegatives(vector<vector<int>>& grid) {
//        int count = 0;
//
//        for (int i = 0; i < grid.size(); i++) {
//            for (int j = grid[0].size() - 1; j >= 0; j--) {
//                if (grid[i][j] < 0) {
//                    count++;
//                }
//                else {
//                    break;
//                }
//            }
//        }
//
//        return count;
//    }
//
//    // �Ż���ĵ��������ʱ�临�Ӷ�O(m+n)
//    int countNegativesP(vector<vector<int>>& grid) {
//        int res = 0, m = grid.size(), n = grid[0].size();
//
//        for (int i = 0, pos = 0; i < m; i++) {
//            int count = 0;
//            for (int j = n - 1 - pos; j >= 0 && grid[i][j] < 0; j--, count++);
//
//            pos += count;
//            res += count * (m - i);
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}