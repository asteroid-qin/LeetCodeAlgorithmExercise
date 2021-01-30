//#include<iostream>
//#include<string>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：把一个十进制数转成16进制数
//    // 思路：计算机底层就是采用的二进制，所以想办法把二进制数转成16进制转换即可
//    // 如果使用进制转换公示的话，需要考虑负数的情况，所以比较麻烦，推荐不做
//    string toHex(int num) {
//        // 排除特殊情况
//        if (!num) {
//            return "0";
//        }
//            
//        // 初始值
//        string s = "";
//        // 准备一个字符表，方便把数字直接转成对应的十六进制字符
//        string sHex = "0123456789abcdef";
//
//        // 注意！负数右移并不会让这个值等于0，又因为num是int类型占32字节，所以可以限制右移不能超过8次
//        while (num != 0 && s.size() < 8) {
//            // 每次保留后四位的数字，使用0xf做&操作即可
//            // 根据这四位数字去sHex中取到对应的十六进制字符，然后把这个字符加在s的前面
//            s = sHex[num & 0xf] + s;
//            // 每循环一次就右移四位
//            num >>= 4;
//        }
//        
//        return s;
//    }
//
//    
//};
//
//int main() {
//
//    Solution s;
//
//    cout << s.toHex(18) << endl;
//	return 0;
//}