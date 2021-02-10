//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标: 把 (IPv4)address里面的. 替换成[.]
//    // 思路：最简单就是string拼接（这个太简单了...）
//    // 另一种思路就是在address上改动，首先往后面加6个无意义字符，
//    // 然后以原始长度从后往前遍历，用一个变量记录当前的偏移量，每设置成功一个字符就++。
//    // 如果当前字符不是.就把当前字符赋给偏移后的下标，偏移量++
//    // 如果当前字符是.就把当前偏移后的下标再往前2个位置(包括当前位置)，设置成[.]，然后偏移+3
//    string defangIPaddr(string address) {
//        // 这是简单写法..
//        string s;
//        for (char& c : address) {
//
//            if (c == '.') {
//                s += "[.]";
//            }
//            else {
//                s.push_back(c);
//            }
//        }
//
//        return s;
//
//
//        // 这是直接在address上改动
//        /*int i = address.size() - 1;
//        address += "######";
//
//        for (int pos = 0, m = i + 6; i >= 0; i--) {
//            if (address[i] != '.') {
//                address[m - pos++] = address[i];
//            }
//            else {
//                address[m - pos] = ']';
//                address[m - pos - 1] = '.';
//                address[m - pos - 2] = '[';
//                pos += 3;
//            }
//        }
//
//        return address;*/
//    }
//};
//
//int main() {
//	return 0;
//}