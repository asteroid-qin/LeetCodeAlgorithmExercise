//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：判断words中每个字符是否在allowed中出现
//    // 思路：把allowed做成arr数组，value代表出现。默认0代表未出现
//    // 然后遍历words，对里面每一个字符，去arr中查，如果值等于0就break。如果字符统统满足就count++
//    // 最后返回count
//    int countConsistentStrings(string allowed, vector<string>& words) {
//        int count = 0;
//
//        int arr[26] = { 0 };
//        for (char& c : allowed) {
//            arr[c - 'a']++;
//        }
//
//        for (string& s : words) {
//            for (char& c : s) {
//                if (!arr[c - 'a']) {
//                    count--;
//                    break;
//                }
//            }
//            count++;
//        }
//
//        return count;
//    }
//};
//
//int main() {
//	return 0;
//}