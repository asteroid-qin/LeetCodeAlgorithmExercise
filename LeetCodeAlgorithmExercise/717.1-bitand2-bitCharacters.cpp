//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//
//    // 目标：有三种组合方式：0、10、11.判断最后一个字符是否一定是第一种0
//    // 思路：最后一个字符肯定是0，所以唯一不匹配的字符是第二种10。如果10中间多出一个0，因为1最多匹配一个0，所以不论如何
//    // 都是true，或者1的个数为偶数那也是true。其他返回false。奇数个还是偶数个可以用^来提高效率
//    bool isOneBitCharacter(vector<int>& bits) {
//        // 注意得从倒数第二个下标开始！！！
//        int i = bits.size() - 2;
//        if (i >= 0 && !bits[i]) {
//            return true;
//        }
//        int count = 1;
//        while (i >= 0 && bits[i]) {
//            i--;
//            count ^= 1;
//        }
//
//        return count;
//    }
//};
//
//int main() {
//	return 0;
//}