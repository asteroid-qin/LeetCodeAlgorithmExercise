//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：返回在比赛中进行的配对次数，
//    // 思路：whlie循环即可。题目公式都写好了...
//    // 再仔细想想，发现不对...共有n个队伍，一个冠军，需要淘汰n-1个 队伍。
//    // 每一场比赛淘汰一个队伍，因此进行了n-1场比赛。所以共有n - 1个配对。
//    int numberOfMatches(int n) {
//        int res = 0;
//        bool flag;
//
//        while (n > 1) { // 获胜条件是n=1，即只剩下一个队伍
//            flag = n & 1;
//            n >>= 1;
//            res += n;
//            n += flag; // 是奇数就+1
//        }
//
//        return res;
//    }
//
//    // 太离谱了..
//    int numberOfMatchesP(int n) {
//        return n - 1;
//    }
//};
//
//int main() {
//	return 0;
//}