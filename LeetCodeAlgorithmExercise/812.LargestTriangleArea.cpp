//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺points��������㣬Ҫ�����ÿ�����㹹���������е�������
//    // ˼·��ֻ�漰�����㣬ֱ������forѭ�����ɡ�����תһ�£�ʹ��dfs�������
//    double largestTriangleArea(vector<vector<int>>& points) {
//        double res = 0;
//        int sel[3] = { -1,-1,-1 };
//        dfs(points, sel, 0, 0, res);
//
//        return res / 2;
//    }
//
//    // ֱ�ӵݹ����ÿһ������
//    void dfs(vector<vector<int>>& points, int* sel, int step, int index, double& res) {
//        if (step == 3) {
//            int x1 = points[sel[0]][0], x2 = points[sel[1]][0], x3 = points[sel[2]][0];
//            int y1 = points[sel[0]][1], y2 = points[sel[1]][1], y3 = points[sel[2]][1];
//            // ���ĵ�һ�����������ʽ������(��������ٳ�2��)
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