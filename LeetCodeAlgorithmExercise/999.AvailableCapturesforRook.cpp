//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：太长了...
//    // 思路，遍历board，先找到rock。找到了就从四个方向尝试吃子。越界或者遇到队友或者吃到了就停下来
//    // 这不够优雅，但是可以过: )
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