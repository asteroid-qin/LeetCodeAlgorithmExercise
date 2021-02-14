//#include<iostream>
//#include<unordered_map>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：直接看题目要求把..总之就是把1-n每个数按照数位和进行分组（2和11就在一组），
//    // 完成分组后，求分组数字数目并列最多的组有多少个
//    // 思路：首先是根据数位和进行分组，可以用map来进行分组，key是数位和，value是个数。
//    // 遍历n，进行分组，得到map,并同时计算分组数目最大值（也就是m[sum]++后的最大值）。
//    // 最后用一个变量来记录这个最大值出现的次数，遍历map，返回即可
//    int countLargestGroup(int n) {
//        unordered_map<int, int> m;
//        int maxNum = -1;
//        while (n) {
//            int i = n, sum = 0;
//
//            while (i) {
//                sum += i % 10;
//                i /= 10;
//            }
//
//            m[sum]++;
//            maxNum = max(maxNum, m[sum]);
//            n--;
//        }
//
//        int count = 0;
//        for (auto& it : m) {
//            if (it.second == maxNum) {
//                count++;
//            }
//        }
//        
//        return count;
//    }
//};
//
//int main() {
//	return 0;
//}