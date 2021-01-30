//#include<iostream>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：判断字符串magazine中是否包含ransomNote
//    // 限制条件：两个字符串均只含有小写字母
//    // 思路：其实是判断字母异位，也就是ransomNote中的字母出现多少次，magazine相应的字母也要出现多少次
//    // 设计判断是否异位，可以先遍历magazine，使用hash，key作为字母，value作为出现的次数
//    // 再遍历ransomNote，出现字母就数量--，如果值小于0那就返回false
//    // 好吧，这里是可以优化的！注意题意，只含有小写字母，也就是说可以使用数组，而非hashmap，从而减少内存消耗
//    bool canConstruct(string ransomNote, string magazine) {
//        // 把magazine转成一个map
//        unordered_map<char, int> magazineMap;
//
//        for (char c : magazine) {
//            magazineMap[c]++;
//        }
//
//        // 再遍历这个ransomNote
//        for (char c : ransomNote) {
//            magazineMap[c]--;
//            if (magazineMap[c] < 0) {
//                return false;
//            }
//        }
//
//        return true;
//    }
//
//
//    bool canConstructPlus(string ransomNote, string magazine) {
//        // 把magazine转成一个数组map(因为条件说了字符串只包含26个小写字母)
//        int magazineMap[26]= { 0 };
//
//        for (char c : magazine) {
//            magazineMap[c-'a']++;
//        }
//
//        // 再遍历这个ransomNote
//        for (char c : ransomNote) {
//            magazineMap[c-'a']--;
//            if (magazineMap[c-'a'] < 0) {
//                return false;
//            }
//        }
//
//        return true;
//    }
//};
//
//int main() {
//    // 这样一写就是26个0...
//    int magazineMap[26] = { 0 };
//    int length = sizeof(magazineMap) / sizeof(int);
//    for (int i = 0; i < length; i++) {
//        if ((i + 1) % 5 - 1 == 0) {
//            cout << endl;
//        }
//        cout << magazineMap[i] << "->";
//    }
//    cout << endl;
//
//	return 0;
//}