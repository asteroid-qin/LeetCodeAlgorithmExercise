//#include<iostream>
//#include<vector>
//#include<unordered_set>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺����email���ж��ٲ�ͬ���ַ��������������������ַ���
//    // һ����@ǰ���.����Ҫ���ˡ�һ����@ǰ���+����Ҫ����+��@���ڵ��������ݡ�
//    // ˼·��׼��һ��set�����������Ŀ�����emails������ÿ���ַ������д���Ȼ�����set�У���󷵻�set��size
//    int numUniqueEmails(vector<string>& emails) {
//        unordered_set<string> set;
//
//        for (auto& s : emails) {
//            // ƴ���ַ���
//            string str;
//            
//            for (int i = 0; i < s.size(); ) {
//                if (s[i] == '.') {
//                    i++;
//                }
//                else if (s[i] == '+') {
//                    while (s[i] != '@') { // ֱ������@
//                        i++;
//                    }
//                }
//                else if (s[i] == '@') { // ��@��ֱ���ַ�����ȡ
//                    str += s.substr(i, s.size() - i);
//                    break;
//                }
//                else {
//                    str += s[i++];
//                }
//            }
//
//            set.insert(str);
//        }
//
//        return set.size();
//    }
//};
//
//int main() {
//	return 0;
//}