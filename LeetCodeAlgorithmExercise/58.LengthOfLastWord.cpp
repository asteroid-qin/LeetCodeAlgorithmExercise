//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 写一个方法，返回最后一个单词的最大值（字符串长度>=1）
//    // 很简单的小问题，只要从右往左遍历就行
//    // 当然，如果遇上[qewqweqwq   ]这样的字符，其实从前往后遍历更好
//    // 下面的是从前往后遍历的（0ms就离谱，
//    // 老实说，我觉得我的速度应该和他差不多，为什么我一直是4ms？？？OK，终究还是出了一次0ms）
//    // 总而言之，方法是多样的，关键还是看场景适不适合
//    int lengthOfLastWord(string s) {
//        // 定义一个变量i记录单词的长度
//        int length = 0;
//
//        // 一个for循环，从右往左遍历
//        for (int i = s.size() - 1; i >= 0; i--) {
//            // 如果不是空格就后移，并把长度加一
//            if (s[i] != ' ') {
//                length++;
//            }
//            else {
//                // 如果是空格，判断此时length的长度
//                if (length != 0) {
//                    // 如果不为0，代表拿到了长度，并遇上了空格，所以可以结束xunh
//                    break;
//                }
//                // 不然的话，就需要继续走下去
//            }
//        }
//
//        return length;
//        
//    }
//};
//
//// 测试
//int main() {
//    // 直接在LeetCode上测试了
//    // 一次跑通！！
//
//	return 0;
//}