//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：points包含多个点，要求计算每三个点构成三角形中的最大面积
//    // 思路：只涉及三个点，直接三层for循环即可。这里转一下，使用dfs解决问题
//    double largestTriangleArea(vector<vector<int>>& points) {
//        double res = 0;
//        int sel[3] = { -1,-1,-1 };
//        dfs(points, sel, 0, 0, res);
//
//        return res / 2;
//    }
//
//    // 直接递归计算每一个可能
//    void dfs(vector<vector<int>>& points, int* sel, int step, int index, double& res) {
//        if (step == 3) {
//            int x1 = points[sel[0]][0], x2 = points[sel[1]][0], x3 = points[sel[2]][0];
//            int y1 = points[sel[0]][1], y2 = points[sel[1]][1], y3 = points[sel[2]][1];
//            // 核心的一步！用面积公式求出面积(这里最后再除2！)
//            double S = (x1 * y2 - x2 * y1 + x2 * y3 - x3 * y2 + x3 * y1 - x1 * y3);
//
//            res = max(res, abs(S));
//            return;
//        }
//
//        for (int i = index; i < points.size(); i++) {
//            sel[step] = i;
//            dfs(points, sel, step + 1, i + 1, res);
//        }
//    }
//};
//
//int main() {
//	return 0;
//}