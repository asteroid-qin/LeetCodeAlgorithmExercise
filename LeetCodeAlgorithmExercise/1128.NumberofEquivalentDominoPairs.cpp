//#include<iostream>
//#include<vector>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：找出 等价多米诺骨牌对的数量
//    // 思路：根据1 <= dominoes[i][j] <= 9，直接使用100大小的1位数组
//    // 记住！还有一个特别关键的点：要求找的是对数
//    // 所以，需要利用排列的知识。2条等价可以组成1对，3条等价可以组成3对，4条等价可以组成6对
//    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
//        int count = 0;
//        int m[100] = { 0 };
//        for (auto v : dominoes) {
//            int num = v[0] > v[1] ? v[1] * 10 + v[0] : v[0] * 10 + v[1];
//            count += m[num];
//            m[num]++;
//        }
//
//        return count;
//    }
//};
//
//int main() {
//	return 0;
//}