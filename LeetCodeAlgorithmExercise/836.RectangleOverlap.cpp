//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：判断两个矩阵是否重叠
//    // 思路：完完全全考验自己的数学功底。这里可以用逆向思维法，如果resc2在rec1的上、下、左、右侧，那么就不相邻
//    // 最后对结果取反即可（注意这种得注意重叠是线段的情况！）
//    // 还有一种就是检查区域。如果两个矩形重叠，那么它们的x、y左边绝对有相交的地方。问题就转成了：判断两条线段是否
//    // 有交集。也就是：min(rec1[2], rec2[2]) > max(rec1[0], rec2[0]) 时，这两条线段有交集
//    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
//        return  (min(rec1[2], rec2[2]) > max(rec1[0], rec2[0])) &&
//                (min(rec1[3], rec2[3]) > max(rec1[1], rec2[1]));
//    }
//};
//
//int main() {
//	return 0;
//}