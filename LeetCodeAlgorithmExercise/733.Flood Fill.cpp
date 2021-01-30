//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺��(sc, sr)��ʼ��һ����ά������ÿһ����������ΪnewColor
//    // ˼·���ݹ飡�ǳ��򵥵�һ���⣬Ψһ��Ҫע����ǣ�����Ҫ��(sc,sr)��ʼֵת����newColor���������ֲ���ת����
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
//                // ������Ҫ����
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