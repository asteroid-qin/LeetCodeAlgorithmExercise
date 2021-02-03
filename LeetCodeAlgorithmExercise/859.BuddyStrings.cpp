//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：判断A能否交换两个字符的位置得到B
//    // 思路：首先A和B的长度必须相等并且都不为空，然后分类讨论：
//    // 如果A=B，例如abcd和abcd那么结果一定是false，但是如果是aab和aab这种有重复字母的情况，那么就是true（可以交换）
//    // 如果A不等于B，那么记录不等于的下标和次数，次数超过2返回false，次数等于0就是相等。
//    // 唉，过是过了(0ms)，但是写的实在太难看了...
//    bool buddyStrings(string A, string B) {
//        if (A.size() != B.size() || A.size() == 0 || B.size() == 0) {
//            return false;
//        }
//
//        int count = 0, a = -1, b = -1;
//        for (int i = 0; i < A.size(); i++) {
//            if (A[i] == B[i]) continue;
//
//            count++;
//            // 记录错误下标
//            if (a == -1) {
//                a = i;
//            }
//            else {
//                b = i;
//            }
//
//            if (count > 2) {
//                return false;
//            }
//        }
//
//        // 如果A恰好等于B，那么需要判断A里面是否有重复元素
//        if (count == 0) {
//            int arr[26] = { 0 };
//            for (auto c : A) {
//                if (arr[c - 'a'] != 0) {
//                    return true;
//                }
//                arr[c - 'a']++;
//            }
//
//            return false;
//        }
//        
//            // 不然就判断是否有两个可以交换的字符并且恰好A[a] = B[b] && B[a] == A[b]
//        if (a != -1 && b != -1 && A[a] == B[b] && A[b] == B[a]) {
//            return true;
//        }
//
//        return false;
//    }
//};
//
//int main() {
//	return 0;
//}