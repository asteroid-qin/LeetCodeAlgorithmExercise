//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//
//class Solution {
//public:
//    // 根据提议要求实现查询字符串（很明显，这里需要实现KMP算法，KMP算法算简单？？）
//    int strStr(string haystack, string needle) {
//        // 声明两个变量，一个指向haystack，一个指向needle
//        int i = 0, j = 0;
//
//        // 先进行非空判断
//        if (needle.size() == 0) {
//            // 都是空字符串就为0
//            if (haystack.size() == 0)
//                return 0;
//            // 其他情况返回-1
//            return -1;
//        }
//
//        // 得到一个特殊的next数组
//        vector<int> next = getStrNext(needle);
//
//        // 直接一个while循环,条件为i和j必须不超过对应字符串的长度
//        while (i != haystack.size() && j != needle.size()) {
//            // 判断i指向的字符是否等于j指向的字符
//            if (j == -1 || haystack[i] == needle[j]) {
//                // 如果等于，那么就继续往下面比较
//                i++;
//                j++;
//            }
//            else {
//                // 如果不等于就，根据next数组设置j的下标
//                j = next[j];
//            }
//        }
//
//        // 最后
//        if (j == needle.size()) {
//            return i - j;
//        }
//        else {
//            return -1;
//        }
//       
//
//    }
//
//    // 传入一个字符串，生成对应的next容器(这个方法的前提是：字符串的长度必须大于0)
//    vector<int> getStrNext(const string str){
//        // 用vector充当数组(原因是：c++数组不支持用变量声明大小)
//        vector<int> next(str.size());
//
//        // 先初始化
//        next[0] = -1;
//        // next[1] = 0; // 不需要，因为初始化的时候全是1
//    
//        // 一个变量记录当前上一个下标对应next的下标
//        int n = 0;
//
//        // 一个for循环遍历后面的字符串
//        for (int i = 2; i < str.size(); i++) {
//            // 先拿到当前下标的前一个下标 对应的 next的值
//            n = next[i - 1];
//            // 直接while循环(条件-1是因为在找不到后需要回溯，当回溯到下标为0，值是-1的时候，应该结束回溯)
//            // 进入下一个循环，此时i的值默认为0（因为是vector容器）
//            while (n != -1) {
//                // 如果当前下标的上一个下标 对应的字符 等于 当前下标的前一个下标 对应的next值 对应的字符
//                // 那么当前下标对应的next值是在 当前下标的前一个下标 对应的next值 的基础上加一
//                if (str[i - 1] == str[n]) {
//                    next[i] = n + 1;
//                    break;
//                }
//                else {
//                    // 不然的话，就需要把
//                    // 指向当前下标的前一个下标 对应的next值 所指向的字符 最终指向的next值
//                    // 赋值给n 
//                    n = next[n];
//                }
//            }
//
//        }
//        
//        cout << "打印这个next数组：" << endl;
//        printVector(next);
//
//        // 将这个容器return出去
//        return next;
//    }
//    
//    // 打印这个数组
//    void printVector(vector<int>& v) {
//        for (int i = 0; i < v.size(); i++) {
//            cout << "当前的值为：" << i << " -> "<< v[i] << endl;
//        }
//    }
//
//};
//
//// 测试自己写的KMP算法（感觉没必要测试）
//int main() {
//    // 开始测试
//    Solution s;
//    // s.strStr("abc", "a");
//
//    int index = s.strStr("googllgoogoogle","google");
//    cout << "当前下标为：" << index <<  endl;
//	return 0;
//}