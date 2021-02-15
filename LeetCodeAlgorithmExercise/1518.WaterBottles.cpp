//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：最多 能喝到多少瓶酒。
//    // 思路：首先由numBottles个酒和numBottles个空瓶子，空瓶子不够了，只能换到0瓶酒就直接退出
//    // 返回值等于 numBottles + 递归（空瓶子换的酒，空瓶子-换酒需要的瓶子数+空瓶子换的酒， 固定exc）
//    // 我去...官方居然没用递归写...(感觉自己又想复杂了..)
//    int numWaterBottles(int numBottles, int numExchange) {
//        return dfs(numBottles, numBottles, numExchange);
//    }
//
//    int dfs(int num, int blank, int& exc) {
//        if (num == 0) { // 空瓶子不够了，只能换到0瓶酒就直接退出
//            return 0;
//        }
//        int excNum = blank / exc;
//
//        return num + dfs(excNum, blank - excNum * exc + excNum, exc);
//    }
//
//};
//
//int main() {
//	return 0;
//}