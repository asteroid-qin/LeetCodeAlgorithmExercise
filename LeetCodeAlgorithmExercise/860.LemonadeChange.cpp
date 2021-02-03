//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：判断是否根据前面的数进行找零
//    // 思路：遍历bills，用map存金额和数量。
//    // 如果当前数等于5那就直接存，如果是10，那么需要找5并存入10。
//    // 如果当前数等于20，那么要么返回1张10和一张5要么返回3张5。由于面值5比10更更灵活，所以优先返回10
//    // 只要输入10或者20时，导致5的值小于0，那么返回false。不然默认true
//    // 好烦，写是写出来了，但是不够优雅..
//    bool lemonadeChange(vector<int>& bills) {
//        int fiv = 0, te = 0;
//
//        for (int i : bills) {
//            if (i == 5) {
//                fiv++;
//            }
//            else if (i == 10) {
//                if (fiv == 0) {
//                    return false;
//                }
//
//                fiv--;
//                te++;
//            }
//            else {
//                if (te >= 1 && fiv >= 1) {
//                    te--;
//                    fiv--;
//                }
//                else if (te == 0 && fiv >= 3) {
//                    fiv -= 3;
//                }
//                else {
//                    return false;
//                }
//            }
//        }
//
//
//        return true;
//    }
//};
//
//int main() {
//	return 0;
//}