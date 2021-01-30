//#include<iostream>
//#include<vector>
//#include<string>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：计算出域名的访问次数...（直接看中文解释即可，虽然比较长，但是很清晰）
//    // 思路：cpdomains中的每一个string包含域名和访问次数，先提取出访问次数，然后在挨个提取出每一个域名
//    // 把每一个域名和次数放入map中，最后遍历这个map，把次数和域名对应放入vector中即可
//    vector<string> subdomainVisits(vector<string>& cpdomains) {
//        vector<string> res;
//        unordered_map<string, int> m;
//
//        for (auto str : cpdomains) {
//            int i = 0;
//            while (str[i] != ' ') {
//                i++;
//            }
//
//            int num = stoi(str.substr(0, i));
//            int j = str.size() - 1;
//
//            while (i < j) {
//                while (i < j && str[j] != '.') {
//                    j--;
//                }
//                // 核心！把每一个截取到的子父域名放入map中并累加num
//                m[str.substr(j + 1, str.size() - 1)] += num;
//                j--;
//            }
//        }
//
//        for (auto it = m.begin(); it != m.end(); it++) {
//            res.push_back(to_string(it->second) + " " + it->first);
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}