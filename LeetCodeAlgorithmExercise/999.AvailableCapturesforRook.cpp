//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺̫����...
//    // ˼·������board�����ҵ�rock���ҵ��˾ʹ��ĸ������Գ��ӡ�Խ������������ѻ��߳Ե��˾�ͣ����
//    // �ⲻ�����ţ����ǿ��Թ�: )
//    int numRookCaptures(vector<vector<char>>& board) {
//        int x = -1, y = -1, m = board.size(), n = board[0].size();
//
//        for (int i = 0; i < m; i++) {
//        
//            for (int j = 0; j < n; j++) {
//                if (board[i][j] == 'R') {
//                    x = i;
//                    y = j;
//                    goto outer;
//                }
//            }
//        }
//
//        outer:int res = 0;
//
//        for (int i = x; i - 1 >= 0;i--) {
//            if (board[i][y] == 'B') {
//                break;
//            }
//            else if (board[i][y] == 'p') {
//                res++;
//                break;
//            }
//        }
//
//        for (int i = x; i + 1 < m; i++) {
//            if (board[i][y] == 'B') {
//                break;
//            }
//            else if (board[i][y] == 'p') {
//                res++;
//                break;
//            }
//        }
//
//        for (int i = y; i - 1 >= 0; i--) {
//            if (board[x][i] == 'B') {
//                break;
//            }
//            else if (board[x][i] == 'p') {
//                res++;
//                break;
//            }
//        }
//
//        for (int i = y; i + 1 < n; i++) {
//            if (board[x][i] == 'B') {
//                break;
//            }
//            else if (board[x][i] == 'p') {
//                res++;
//                break;
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