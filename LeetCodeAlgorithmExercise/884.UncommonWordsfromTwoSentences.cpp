//#include<iostream>
//#include<vector>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：求A、B中只出现一次且独有的单词
//    // 思路：把A、B里面的单词做成set，然后求A-（A和B的交集）和B-（A和B的交集）.
//    // 好吧，虽然上面的思路确实可行但是，速度太慢了，需要优化！！！再仔细考虑题目要求：
//    // 求存在A不在B、存在B不存在A且只出现一次的单词。可以把A、B看成一个整体，其实就是求这个整体中唯一一次出现的单词！！
//    // 只需要使用一个map即可！！
//    vector<string> uncommonFromSentences(string A, string B) {
//        unordered_map<string, int> m;
//        for (int i = 0, j = 0; j < A.size(); ++j, i = j) {
//            while (j < A.size() && A[j] != ' ') {
//                j++;
//            }
//            m[A.substr(i, j - i)]++;
//        }
//        for (int i = 0, j = 0; j < B.size(); ++j, i = j) {
//            while (j < B.size() && B[j] != ' ') {
//                j++;
//            }
//            m[B.substr(i, j - i)]++;
//        }
//
//        vector<string> res;
//
//        for (auto it = m.begin(); it != m.end(); it++) {
//            if (it->second == 1) {
//                res.push_back(it->first);
//            }
//        }
//        
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}