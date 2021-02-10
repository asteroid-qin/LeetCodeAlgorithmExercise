//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<unordered_set>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：计算出A中特殊等价字符串组的数量。题目描述非常抽象，需要顺着示例慢慢缕清思路
//    // 举个例子，如果A中有3个字符串a、b、c，并且a和b能构成特殊等价字符串组，那么结果就返回2
//    // 如果有4个字符串a、b、c、d，并且a、b、c能够构成特殊等价字符串组，那么返回2
//    // 再说说思路：首先要计算出A的原始结构：分离出他的奇、偶数数下标的字符，分别得到两条字符串。
//    // 对这两个字符串进行排序，最后连接放入set中。
//    // 如果a和b是特殊等价的，那么计算出的连接字符串应该相同（因为字符串已经排序了）。
//    // 通过set，可以把构成特殊等价字符串组的字符串融合为1组，最终返回集合的size，就是想要的结果
//    int numSpecialEquivGroups(vector<string>& A) {
//        unordered_set<string> jihe;
//        for (int i = 0; i < A.size(); i++) {
//            string a = "", b = "";
//            for (int j = 0; j < A[i].size(); j++) {
//                if (j % 2 == 0)a += A[i][j];
//                else b += A[i][j];
//            }
//            sort(a.begin(), a.end());
//            sort(b.begin(), b.end());
//            jihe.insert(a + b);
//
//        }
//        return jihe.size();
//    }
//};
//
//int main() {
//	return 0;
//}