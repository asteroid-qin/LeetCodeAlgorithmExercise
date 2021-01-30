//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：从(sc, sr)开始将一个二维数组中每一个数都设置为newColor
//    // 思路：递归！非常简单的一道题，唯一需要注意的是，是需要把(sc,sr)初始值转换成newColor（其他数字不能转！）
//    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
//        int color = image[sr][sc];
//
//        if (color != newColor) {
//            dfs(image, sr, sc, newColor, color);
//        }
//
//        return image;
//    }
//
//    void dfs(vector<vector<int>>& image, int sr, int sc, int& newColor, int& color) {
//        if ( (sr >= 0) && (sr < image.size()) && (sc >= 0) && (sc < image[0].size()) ) {
//            if (image[sr][sc] == color) {
//                // 这点很重要！！
//                image[sr][sc] = newColor;
//
//                dfs(image, sr - 1, sc, newColor, color);
//                dfs(image, sr + 1, sc, newColor, color);
//                dfs(image, sr, sc - 1, newColor, color);
//                dfs(image, sr, sc + 1, newColor, color);
//            }
//        }
//
//    }
//};
//
//int main() {
//    Solution s;
//
//    vector<vector<int>> test = { {0,0,0},{0,0,0} };
//
//    s.floodFill(test, 0 , 0 ,2);
//
//    for (auto v : test) {
//        for (auto i : v) {
//            cout << i << "->";
//        }
//        cout << endl;
//    }
//
//	return 0;
//}