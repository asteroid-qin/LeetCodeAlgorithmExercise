//#include<iostream>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    // 一开始题意理解错了..希望这次重写后，可以一次过
//    // 好吧，还有一处细节，又理解错了，算了，这道题就直接过了..
//    bool isIsomorphic(string s, string t) {
//        unordered_map<char, char> s2t;
//        unordered_map<char, char> t2s;
//        int len = s.length();
//        for (int i = 0; i < len; ++i) {
//            char x = s[i], y = t[i];
//            if ((s2t.count(x) && s2t[x] != y) || (t2s.count(y) && t2s[y] != x)) {
//                return false;
//            }
//            s2t[x] = y;
//            t2s[y] = x;
//        }
//        return true;
//    }
//};
//
//int main() {
//	return 0;
//}