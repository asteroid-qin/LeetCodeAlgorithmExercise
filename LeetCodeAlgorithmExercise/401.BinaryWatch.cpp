//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：题目太长了...，总而言之，有两个数，一个代表小时，1248，时间是所有灯亮的相加
//    // 另一个代表分钟，12481632，同理时间是所有灯亮的相加，现在num是亮了多少灯，求可能的时间段
//    // 涉及到回溯，总之就是比较难！在看了其他人写的题解后，还是决定自己照着写一个暴力版的
//    vector<string> readBinaryWatch(int num) {
//        vector<string> v;
//
//        // 暴力双for循环
//        for (int i = 0; i < 12; i++) {
//            for (int j = 0; j < 60; j++) {
//                // 这种就是暴力遍历每一种情况，只要i和j的二进制个数是等于num的，那就算是一种可能
//                if (getBitCount(i) + getBitCount(j) == num) {
//                    v.push_back(to_string(i)+":"+ (j > 9?to_string(j):"0"+to_string(j) ));
//                }
//            }
//        }
//
//        return v;
//    }
//
//    // 传入一个数，计算转换成二进制时，有多少个1(注意隐含信息：n肯定是大于0的)
//    int getBitCount(int n) {
//        int res  = 0;
//
//        while (n != 0) {
//            // 计算有多少个1
//            res += (n & 1);           
//            n >>= 1;
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}