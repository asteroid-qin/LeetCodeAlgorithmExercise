//#include<iostream>
//#include<string>
//using namespace std;
//
//class Solution {
//public:
//    // 将一个2的32次方范围内的数字反转
//    int reverse(int x) {
//        // 用一个数字去记录返回值结果
//        int rev = 0;
//
//        // 用一个数字去记录当前数对10取余的余数
//        int rem = 0;
//
//        // while 循环
//        while (x != 0) {
//            // 记录最后一位的值
//            rem = x % 10;
//            // x自除10，向右移一位
//            x /= 10;
//            
//            // 中间判断当前数字是否过大(这里是因为INT_MAX的最后一位是7)
//            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && rem > 7)) {
//                return 0;
//            }
//            // 中间判断数字是否过小(这里是因为INT_MIN的最后一位是8)
//            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && rem < -8)) {
//                return 0;
//            }
//
//            // 最后结果是
//            rev = rev * 10 + rem;
//        }
//
//
//        return rev;
//    }
//
//    // 将一个2的32次方范围内的数字反转 自我改进(开头就直接判断,结局失败，想的太简单了)
//    int reverse2(int x) {
//        if (x > 0) {
//            int x_size = to_string(x).size();
//            if (x_size > 10 || (x_size == 10 && x % 10 > 7)) {
//                return 0;
//            }
//        }
//        else if(x < 0){
//            int x_size = to_string(x).size();
//            cout << "被转成负数：" << to_string(x) << endl;
//            cout << "被转成负数后的长度：" << to_string(x).size() << endl;
//
//            // 这里是因为负数转字符串会多一个最前方的-号
//            if (x_size > 11 || (x_size == 11 && (x % 10 < -8) )) {
//                return 0;
//                cout << "走了if判断" << endl;
//            }
//        }
//        else {
//            return x;
//        }
//        
//        cout << "此时的x：" << x << endl;
//        cout << "此时的x对10取余：" << x%10 << endl;
//
//        // 用一个数字去记录返回值结果
//        int rev = 0;
//
//        // 用一个数字去记录当前数对10取余的余数
//        int rem = 0;
//
//        // while 循环
//        while (x != 0) {
//            // 记录最后一位的值
//            rem = x % 10;
//            // x自除10，向右移一位
//            x /= 10;
//
//            // 最后结果是
//            rev = rev * 10 + rem;
//        }
//
//        return rev;
//    }
//};
//
//int main() {
//    // 测试反转int范围内数字
//    Solution s;
//    int num = s.reverse2(-2147483412);
//
//    cout << "反转成功！结果为：" << num << endl;
//    cout << "打印最小值：" << INT_MIN<< endl;
//    return 0;
//}