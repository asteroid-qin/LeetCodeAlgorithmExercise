//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：给你一个整数 n，请你返回 任意 一个由 n 个 各不相同 的整数组成的数组，并且这 n 个数相加和为 0 。
//    // 思路：判断是奇数还是偶数。先创建n大小的数组
//    // 如果是偶数，那么遍历一遍，i+=2，每次i=i+1，i+1=（i+1）*-1。最终得到结果
//    // 如果是奇数，那么遍历一遍，先满足偶数部分。最后一位等于0
//    vector<int> sumZero(int n) {
//        vector<int> res(n);
//
//        for (int i = 0; i < n - 1; i += 2) {
//            res[i] = i + 1;
//            res[i + 1] = (i + 1) * -1;
//        }
//
//        if(n % 2 == 1) res[n - 1] = 0;
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}