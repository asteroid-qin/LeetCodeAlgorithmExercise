//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺���� ˳�򷵻� words �����������ʵ����ַ��������е��ʡ�����["mass","as"],�ͷ���["as"]��
//    // ˼·������һ��words�����������е��ʽ���ƴ���õ�һ������ַ�����Ȼ���ٱ���words��
//    // �����ǰ�ַ����ܹ��ڴ���ַ���ƥ�䳬�����Σ���ô�Ͱѵ�ǰ�ַ�������res��
//    // ע�⣡Ϊ�˷�ֹ�������ʽ������ӣ��м���Ҫ�������ַ�������
//    vector<string> stringMatching(vector<string>& words) {
//        vector<string> res;
//        string buck;
//        for (string& s : words){
//            buck.append(s + ",");
//        }
//
//        for (string& s : words) {
//            int pos = buck.find(s);
//            if (buck.find(s, pos + s.size()) != string::npos) {
//                res.push_back(s);
//            }
//        }
//
//        return res;
//    }
//};
//
//int main() {
//
//	return 0;
//}