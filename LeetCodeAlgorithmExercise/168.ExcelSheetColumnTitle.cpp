//#include<iostream>
//#include<string>
//using namespace std;
//
//class Solution {
//public:
//    // 其实就是一个进制转换的问题
//    string convertToTitle(int n) {
//        string s = "";
//
//        while (n > 0) {
//            // 按照题意，应该从1开始，所以需要减一
//            n--;
//            s.push_back(char(n % 26 + 65));
//            n /= 26;
//        }
//        reverse(s.begin(), s.end());
//        //cout << endl;
//
//        return s;
//    }
//};
//
//int main() {
//
//    Solution s;
//
//    string str = s.convertToTitle(28);
//
//    cout << str << endl;
//
//	return 0;
//}
