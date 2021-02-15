//#include<iostream>
//#include<unordered_set>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：判断路径是否相交
//    // 思路：设置出发点为x=0,y=0,用set记录所有的点
//    // 遍历path，先按照当前字符走两步，然后查询当前x、y是否存在，存在直接false。默认true
//    // 关键问题还是在于：1 <= path.length <= 10^4，根据这个算hash映射
//    bool isPathCrossing(string path) {
//        unordered_set<int> us;
//        int x = 0, y = 0;
//        us.insert(0);
//
//        for (char& c : path) {
//            if (c == 'N') {
//                x++;
//            }
//            else if (c == 'S') {
//                x--;
//            }
//            else if (c == 'W') {
//                y--;
//            }
//            else {
//                y++;
//            }
//
//            if (us.count( getHash(x,y) )) {
//                return true;
//            }
//
//            us.insert(getHash(x, y));
//        }
//
//        return true;
//    }
//
//    // 得自个写一个hash函数
//    int getHash(int x, int y) {
//        return x * 20001 + y;
//    }
//
//};
//int main() {
//	return 0;
//}