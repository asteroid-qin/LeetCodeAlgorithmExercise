//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    /*
//    * 直接看官方需求：
//    * 你总共有 n 枚硬币，你需要将它们摆成一个阶梯形状，第 k 行就必须正好有 k 枚硬币。
//    * 给定一个数字 n，找出可形成完整阶梯行的总行数。
//    *  n 是一个非负整数，并且在32位有符号整型的范围内。
//    */
//    // 思路：使用递归，如下:
//    // 或者使用迭代
//	  // 杀手锏：使用高斯求和公式直接算根号得到结果
//    int arrangeCoins(int n) {
//        return dfs(1 , n);
//    }
//
//    // step是层数，residuce是剩余的数
//    // 先尝试该一层，如果多了就把剩下的去盖下一层
//    // 如果当前层盖不了了，就返回当前层数的上一层，也就是-1
//    int dfs(int step, int residuce) {
//        // 如果盖不了当前的层数，就返回当前层数-1
//        if (residuce < step) {
//            return step - 1;
//        }
//
//        // 不然就去排下一层
//        return dfs(step + 1, residuce - step);
//    }
//
//    // 运用数学知识，使用高斯求和公式和开根号直接求解这个问题
//    // 不用想，肯定是双100%
//    int arrangeCoinsPlus(int n) {
//        return static_cast<int>(sqrt(2 * (long)n + 0.25) - 0.5);
//    }
//};
//
//int main() {
//
//	return 0;
//}