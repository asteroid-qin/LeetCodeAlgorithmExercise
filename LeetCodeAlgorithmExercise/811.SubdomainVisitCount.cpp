//#include<iostream>
//#include<vector>
//#include<string>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺����������ķ��ʴ���...��ֱ�ӿ����Ľ��ͼ��ɣ���Ȼ�Ƚϳ������Ǻ�������
//    // ˼·��cpdomains�е�ÿһ��string���������ͷ��ʴ���������ȡ�����ʴ�����Ȼ���ڰ�����ȡ��ÿһ������
//    // ��ÿһ�������ʹ�������map�У����������map���Ѵ�����������Ӧ����vector�м���
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
//                // ���ģ���ÿһ����ȡ�����Ӹ���������map�в��ۼ�num
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