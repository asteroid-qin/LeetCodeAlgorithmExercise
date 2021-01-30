//#include<iostream>
//#include<vector>
//#include<unordered_set>
//using namespace std;
//
//class Solution {
//public:
//    // 思路：把words中每一个string转成摩斯密码，然后返回有多少组不重复的摩斯密码
//    // 利用set的不可重复性，把得到的摩斯密码放入set中，最后返回set的长度即可
//    int uniqueMorseRepresentations(vector<string>& words) {
//        string s_map[26] = { ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.." };
//
//        unordered_set<string> bucket;
//        for (auto s : words) {
//            string temp;
//            for (auto c : s) {
//                temp += s_map[c - 'a'];
//            }
//
//            bucket.insert(temp);
//        }
//
//        return bucket.size();
//    }
//};
//
//int main() {
//	return 0;
//}