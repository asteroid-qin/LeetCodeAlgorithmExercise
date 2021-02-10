//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：给定a、b、c三个数，返回让a、b、c连续所需要最小的步数和最大的步数
//    // 思路：首先得对a、b、c排序，是的a<b<c。最大步数很容易求，就是c-b-1+b-a-1=c-a+2
//    // 关键是最小值怎么求，这需要分类讨论：
//    // 如果a、b、c恰好连续，那么最小值就是0.
//    // 如果a与b中隔了一个1或者b与c中隔了一个1，又或者存在两个数相邻，那么最小值就是1
//    // 此外如何情况都是2
//    // 按照上面的思路代码实现即可
//    vector<int> numMovesStones(int a, int b, int c) {
//        // 先对三个数排序
//        if (a > b) swap(a, b);
//        if (a > c) swap(a, c);
//        if (b > c) swap(b, c);
//
//        int maxNum = c - a - 2, minNum = 2;
//
//        if (a + 1 == b && b + 1 == c) {
//            minNum = 0;
//        }
//        else if (a + 1 == b || b + 1 == c || b - a == 2 || c - b == 2) {
//            minNum = 1;
//        }
//        
//        return { minNum, maxNum };
//    }
//};
//
//int main() {
//	return 0;
//}