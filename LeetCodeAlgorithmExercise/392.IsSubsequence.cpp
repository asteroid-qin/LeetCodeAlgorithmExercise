//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：判断s是否是t的子序列，也就是t除去一些字符，在不改变顺序的情况下，是否能够得到s
//    // 限制条件： <= s.length <= 100，0 <= t.length <= 10 ^ 4，并且s和t只由小写字母组成
//    // 思路：使用双指针，i指向sj指向t，遍历比较大的t，如果指针指向的值相等就把i++，直到i或j达到指向字符串的长度
//    // 此时，如果i等于字符串s的长度，就代表其实已经找到了
//    // 这是自己第一个想到的双指针，一次过。看了官方解，发现还有一种解法：使用动态规划。太妙了，看了很久差不多理解了
//    bool isSubsequence(string s, string t) {
//        int i = 0, j = 0;
//
//        while (i < s.size()  &&  j < t.size()) {
//            // 判断当前指向的字符是否相等
//            if (s[i] == t[j]) {
//                // 如果等于，就把i后移
//                i++;
//            }
//           
//            // 默认j必须后移
//            j++;
//        }
//
//        // while循环结束有两种可能，一种是i到s了，也就是s是t的子序列
//        // 还有一种就是j到指定长度退出循环
//        return i == s.size();
//    }
//
//    // 使用动态规划求解这个问题！！
//    bool isSubsequencePlus(string s, string t) {
//        int sSize = s.size(), tSize = t.size();
//
//        // 先初始化dp数组
//        vector<vector<int>> v(tSize + 1, vector<int>(26));
//
//        for (int i = 0; i < 26; i++) {
//            v[tSize][i] = tSize;
//        }
//        // 开始准备求解dp数组
//
//        /*
//            大概思路：双指针问题在处理非常多的子串比较时非常浪费资源，所以算出一个表，来记录
//            字符串t中，每个字符在当前位置往后出现的位置，从0到t,size()，把每个字符的位置全部记录下来，这样
//            就算有一千个一万个，也可以通过查表的方式，快速判断当前是否是子串。
//
//            // 关键问题是如何求出这张表，这里使用动态规划的思想，设v[i][j] 是自i处，字符i+‘a’出现的位置
//            // 通过遍历字符串t，得到这个数组。如果当前字符恰好相等，就是v[i][j] = i
//            //（注意这个位置都是可以直接从t处取出的，是绝对的，而不是相对的）
//            // 如果不相等，那就是v[i+1][j]，为什么是这个呢？这个太难解释了。.只能说写出动态规划方程得需要一定的理解
//            // 因为求的是自i处，字符出现的位置，所以需要从后往前遍历。
//            
//        */
//
//        for (int i = tSize - 1; i >= 0; i--) {
//            for (int j = 0; j < 26; j++) {
//                if (j == t[i] - 'a') {
//                    v[i][j] = i;
//                }else{
//                    v[i][j] = v[i+1][j];
//                }
//            }
//        }
//
//        int add = 0;
//        // 在得到这个数组后，问题就好办了，只需要遍历一次s即可
//        for (int i = 0; i < s.size(); i++) {
//            // 判断当前字符能否在t中找到
//            if (v[add][s[i] - 'a'] == tSize) {
//                return false;
//            }
//            // 如果能够找到，那add就可以直接跳到那个位置的后面
//            add = v[add][s[i] - 'a'] + 1;
//        }
//
//
//        return true;
//    }
//};
//
//int main() {
//
//    string s = "abc";
//    string t = "ahbgdc";
//    Solution so;
//    so.isSubsequencePlus(s, t);
//
//	return 0;
//}