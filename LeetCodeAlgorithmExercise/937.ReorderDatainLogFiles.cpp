//#include<iostream>
//#include<vector>
//#include<map>
//#include<queue>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�ظ�������־��������̫���ˡ�
//    // ˼·����׼��һ��vector���ڴ������������־���±꣬��׼��һ��map��key�����⴦����ַ���־��value���±�
//    // ����logs���жϵ�ǰstring�����͡�
//    // ���ʹ����ȹ��˱�ʶ���������ո�Ȼ��۲���һ���ַ�����������־ʹ�����һ��������־��ֱ���±���뵽vector��
//    // ������ַ����ʹ�����һ���ַ���־���ѵ�ǰ�ո����ַ���ȥ���ո����β��ƴ��flag�����ŵ�map�С�map���Զ�����
//    // ���õ�һ��map��vector������map�ٱ���vector���ѽ���������������ٷ��ؼ���
//    // �ðɣ�������е���ģ�map�������㷨����������޸ģ����ұ�ʶ�����ܼ򵥵ķ������ݵĺ��档
//    // Ҳ����˵����ô��Ļ���map��key�����㷨������д��
//    // ���ڹٷ��⣬�����Լ���дһ���鲢���򣬸��ıȽϵĹ��򡣡��÷���ֱ�������ˣ���
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
//            if (isalpha(now[j + 1])) { // �ַ�
//                // ���ݷ��ڱ�ʶǰ�棬Ȼ�����map��
//                m[now.substr(j + 1) + now.substr(0, j)] = i;
//            }
//            else {  // ����
//                q.emplace(i);
//            }
//        }
//
//        // ׼�����ؽ��
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