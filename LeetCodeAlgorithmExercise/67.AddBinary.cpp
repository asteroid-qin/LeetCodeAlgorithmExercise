//#include<iostream>
//#include<string>
//#include<stack>
//#include<bitset>
//using namespace std;
//
//class Solution {
//public:
//    // 将两个二进制字符串相加得到新的二进制字符串
//    // 很明显，这道题最笨的方法就是把两个二进制数遍历转换成十进制数
//    // ，相加后，再把结果转成二进制数，最后返回
//    // 很明显这道题不应该用这种方法
//    // 解题思路：写一个while循环，从后往前遍历，把两个数相加，这里需要考虑往前进一位的问题
//    // 如果是1+1==2很明显需要往前进一位，因为二进制数肯定不止一位，所以有可能出现1+0+1==2，或者1+1+1==3的情况，
//    // 所以需要算出当前数加上位数为sum，判断sum是否大于等于2，如果是那当前数应该是sum%2，不然就是sum
//    // 除此以外还有一个问题需要考虑，那就是两个二进制数不一定一样长，所以第一段while循环结束后还需要执行后面两段while循环
//    // 最后一个需要注意的问题：那就是三个while循环结束后carry的值依然为1，这意味着所有数之和需要往前进一位
//    // OK，一套收工
//    string addBinary(string a, string b) {
//        // 准备两个变量用于遍历a和b
//        int i = a.size() - 1, j = b.size() - 1;
//
//        // 用一个变量记录当前数之和
//        int sum = 0;
//        // 用一个变量记录当前进位数
//        int carry = 0;
//        // 准备一个stack用于存放每一个字符
//        stack<int> myStack;
//
//        // 只要两个字符串其中有一个遍历到了头就需要退出循环(注意i和j可以取到0)
//        while (i != -1 && j != -1) {
//            // 因为字符1转换成数字为49，所以两个字符相加，他们的值需要减去两个48
//            sum = a[i] + b[j] - 48 * 2 + carry;
//
//            if (sum >= 2) {
//                // 需要进位
//                myStack.push(sum % 2);
//                carry = 1;
//            }
//            else {
//                // 不需要进位
//                myStack.push(sum);
//                carry = 0;
//            }
//            i--;
//            j--;
//        }
//
//        // 遍历完成后需要继续两个while循环
//        while (i != -1) {
//            // 如果此时是i不等于-1，那肯定是j等于-1，需要把a剩下的字符放入stack中
//            sum = a[i] + carry - 48;
//
//            // 判断当前的值加上位数是否大于等于2（其实顶多等于2）
//            if (sum == 2) {
//                // 说明需要进位
//                myStack.push(0);
//                carry = 1;
//            }
//            else {
//                // 同上
//                myStack.push(sum);
//                carry = 0;
//            }
//            i--;
//        }
//        while (j != -1) {
//            // 如果此时是i不等于-1，那肯定是j等于-1，需要把a剩下的字符放入stack中
//            sum = b[j] + carry - 48;
//
//            // 判断当前的值加上位数是否大于等于2（其实顶多等于2）
//            if (sum == 2) {
//                // 说明需要进位
//                myStack.push(0);
//                carry = 1;
//            }
//            else {
//                // 同上
//                myStack.push(sum);
//                carry = 0;
//            }
//            j--;
//        }
//    
//        // 三个while循环结束后，按照正常逻辑应该问题已经解决了，只需要把栈中的数据放入stack中就行了
//        // 但是可能出现一种极端情况——carry==1，也就是需要往前进一位
//        if (carry == 1) {
//            myStack.push(1);
//        }
//
//        // 遍历这个栈，把数据放入string中
//        string s;
//        while (!myStack.empty()) {
//            // 把1或者0转成字符放入字符串中
//            int num = myStack.top();
//
//            s.push_back(char(num+48));
//            myStack.pop();
//        }
//
//        return s;
//    }
//
//    
//};
//
//// 测试两个二进制数相加
//int main() {
//    Solution s;
//    string str = s.addBinary("111","1");
//    
//
//    cout << "测试：" << str << endl;
//    
//	return 0;
//}