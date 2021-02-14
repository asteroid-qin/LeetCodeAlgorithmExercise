//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：计算最少时间
//    // 思路：切比雪夫距离(官方题解有详细证明)
//    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
//        int res = 0;
//        for (int i = 0; i + 1 < points.size(); i++) {
//            int x = abs(points[i][0] - points[i + 1][0]);
//            int y = abs(points[i][1] - points[i + 1][1]);
//            res += max(x, y);
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}