//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：最大重复子字符串
//    // 思路：直接whlie循环，每一次循环res就+1，words就*2
//    // 然后尝试find，找到了就进入下一轮循环。找不到就直接return res
//    // 因为string的长度都比较短，所以很轻松就过了..事实上,绝对可以优化的..
//    int maxRepeating(string sequence, string word) {
//        int res = 0, pos;
//        string temp = word;
//
//        while (word.size() <= sequence.size()) {
//            pos = sequence.find(word);
//
//            if (pos == string::npos) {
//                return res;
//            }
//            res++;
//            word += temp;
//        }
//
//        return res;
//    }
//
//};
//int main() {
//	return 0;
//}