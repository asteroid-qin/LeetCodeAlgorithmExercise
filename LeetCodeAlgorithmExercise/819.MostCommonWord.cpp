//#include<iostream>
//#include<vector>
//#include<unordered_map>
//#include<unordered_set>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�����ȿ��ٷ����ͣ���Ϊ�Ƚϳ���
//    /*  ����һ������(paragraph) ��һ�����õ����б�(banned)�����س��ִ�����࣬ͬʱ���ڽ����б��еĵ��ʡ�
//        ��Ŀ��֤������һ���ʲ��ڽ����б��У����Ҵ�Ψһ��
//        �����б��еĵ�����Сд��ĸ��ʾ�����������š������еĵ��ʲ����ִ�Сд���𰸶���Сд��ĸ��*/
//    // �򵥳���һ�£���ʵ���ǰ�paragraph�еĵ��ʶ�����ȡ������Ȼ��ù��˵�banned�д��ڵĵ��ʣ�Ȼ�󷵻�
//    // ���ִ������ĵ��ʡ�
//    // ˼·����paragraph�еĵ�����ȡ���������ɣ�����ֱ��ʹ��set��ѯ���ɡ���󵥴ʺͳ��ֵĴ�����������map��
//    // һ��������¼��������һ����¼�������εĵ��ʡ���ǰ���������������Ǿ͸����������͵��ʣ�����
//    string mostCommonWord(string paragraph, vector<string>& banned) {
//        int i = 0, j = 0, m = paragraph.size();
//        unordered_map<string, int> mp;
//        unordered_set<string> s;
//        int count = 0;
//
//        for (auto str : banned) {
//            s.insert(str);
//        }
//
//        string res;
//
//        while (j < m) {
//            while (j < m && isalpha(paragraph[j])) {
//                paragraph[j] = tolower(paragraph[j]);
//                j++;
//            }
//
//            string now = paragraph.substr(i, j - i);
//
//            if (!s.count(now)) {
//                mp[now]++;
//
//                if (mp[now] > count) {
//                    res = now;
//                    count = mp[now];
//                }
//            }
//
//            while (j < m && !isalpha(paragraph[j])) {
//                j++;
//            }
//
//            i = j;
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}