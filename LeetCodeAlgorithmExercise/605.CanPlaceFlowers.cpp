//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：如果一个数组只有1和0，要求1不能紧邻1。在原有的数组之上，判断能否放n个1
//    // 思路：一个大for循环，每次跳两格。如果当前数是1，那么这个数右边肯定是0，直接去下层循环，看当前数右边右边的值
//    // 如果当前数是1，那么如果当前数能取到右边的值，那么就判断右边的值不是等于1的，是的话就i+1，指针移动到这个1上面
//    // ，然后就按照上面的思路，继续执行。否则就n--，即当前设为1了，所以i继续+2.
//    // 在这个过程中n一直--，如果等于0，就代表n已经满足了，所以可以在循环条件上加一个n，来提高效率
//    // 最后只要判断这个n是否等于0即可。
//    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
//        for (int i = 0; i < flowerbed.size() && n; i += 2) {
//            // 如果当前数是0
//            if (!flowerbed[i]) {
//                // 判断后面一位数是否能够取,能取就判断后一位的数是1还是0
//                if ((i + 1 < flowerbed.size()) && flowerbed[i + 1]) {
//                    i++;
//                }
//                else {
//                    n--;
//                }
//
//            }
//        }
//
//
//        return n == 0;
//    }
//};
//
//int main() {
//	return 0;
//}