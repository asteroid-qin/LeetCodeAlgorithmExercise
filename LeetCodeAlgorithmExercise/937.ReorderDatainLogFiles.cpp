//#include<iostream>
//#include<vector>
//#include<map>
//#include<queue>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：重复排列日志。。描述太长了。
//    // 思路：先准备一个vector用于存放所有数字日志的下标，再准备一个map，key放特殊处理的字符日志，value放下标
//    // 遍历logs，判断当前string的类型。
//    // 类型处理：先过滤标识符，来到空格然后观察下一个字符，如果是数字就代表是一个数字日志，直接下标加入到vector中
//    // 如果是字符，就代表是一个字符日志，把当前空格后的字符串去掉空格后在尾部拼上flag，最后放到map中。map会自动排序。
//    // 最后得到一个map和vector，遍历map再遍历vector，把结果放入新容器中再返回即可
//    // 好吧！这道题有点恶心，map的排序算法必须得重新修改，并且标识符不能简单的放在内容的后面。
//    // 也就是说想这么玩的话，map的key排序算法必须重写。
//    // 至于官方解，则是自己手写一个归并排序，更改比较的规则。。好烦，直接跳过了！！
//    vector<string> reorderLogFiles(vector<string>& logs) {
//        /*map<string, int> m;
//        queue<int> q;
//       
//
//        for (int i = 0; i < logs.size(); i++) {
//            string now = logs[i];
//            int j = 0;
//
//            for (; now[j] != ' '; ++j);
//
//            if (isalpha(now[j + 1])) { // 字符
//                // 内容放在标识前面，然后放入map中
//                m[now.substr(j + 1) + now.substr(0, j)] = i;
//            }
//            else {  // 数字
//                q.emplace(i);
//            }
//        }
//
//        // 准备返回结果
//        vector<string> res;
//
//        for (auto it = m.begin(); it != m.end(); it++) {
//            res.push_back(logs[it->second]);
//        }
//
//        while (!q.empty()) {
//            res.push_back(logs[q.front()]);
//            q.pop();
//        }
//        
//        return res;*/
//    }
//};
//
//int main() {
//	return 0;
//}