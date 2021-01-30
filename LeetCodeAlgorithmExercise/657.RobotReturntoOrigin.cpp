//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：输入一个字符串，UD和LR匹配，判断是否有多余的U、D、L、R。如果能够完全匹配就返回true
//    // 思路：用两个变量分别记录上下和左右出现的次数，上左就++，下右就--。最后返回是否两个数都等于0即可
//    bool judgeCircle(string moves) {
//        // 再加上一步优化：如果是奇数，那么肯定会有多出字符
//        if(moves.size() % 2 == 1) {
//            return false;
//        }
//
//        int upp = 0, lef = 0;
//        for (int i = 0; i < moves.size(); i++) {
//            if (moves[i] == 'U') {
//                upp++;
//            }
//            else if (moves[i] == 'D') {
//                upp--;
//            }
//            else if (moves[i] == 'L') {
//                lef++;
//            }
//            else if (moves[i] == 'R') {
//                lef--;
//            }
//        }
//
//
//        return (upp == 0) && (lef == 0);
//    }
//};
//
//int main() {
//	return 0;
//}