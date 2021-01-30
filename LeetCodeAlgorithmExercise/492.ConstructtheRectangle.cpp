//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：构造矩形，其实就是求一个数的因子
//    // 1. 你设计的矩形页面必须等于给定的目标面积。
//    // 2. 宽度 W 不应大于长度 L，换言之，要求 L >= W 。
//    // 3. 长度 L 和宽度 W 之间的差距应当尽可能小。
//    // 思路：求出这个数的所有因子，记录他们的差距。最后返回差距最小的即可
//    // 注意！求这个因子可以优化。因为很明显，越靠近根号area，两个根的差距就会越小
//    // 所以可以从根号area开始出发，找到的第一个值绝对就是最小因子
//    vector<int> constructRectangle(int area) {
//        // 经典求因子（这里可以从根号area开始）
//        for (int i = sqrt(area); i >= 1; i--) {
//            // 如果整除就把结果返回
//            if (area % i == 0) {
//                return { area / i ,i };
//            }
//        }
//        return {};
//    }
//};
//
//int main() {
//	return 0;
//}