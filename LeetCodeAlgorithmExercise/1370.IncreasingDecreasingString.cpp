//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�����½��ַ���
//    // ˼·��������Ȼ�������������ǱȽϼ򵥵ģ�ƴ���ַ�������
//        
//    // ���Ȱ�sת��26�����飬ֵ�����ֵĴ�С��
//    // Ȼ����С�������������0����
//    // �ҵ�������0�ģ���--��Ȼ��ѵ�ǰ�ַ����ڽ���ַ���res��ĩβ
//    // Ȼ���ٴӴ�С������������һ�����ҵ�ֵ��Ϊ0����--���ٰѲ�����0���ַ�����res��β��
//    // ���ֻҪres�ĳ��ȵ���s�Ϳ����˳����ַ���ѡ����.��
//    string sortString(string s) {
//        string res;
//        int arr[26] = { 0 };
//        for (auto& c : s) {
//            arr[c - 'a']++;
//        }
//
//        while (res.size() != s.size()) {
//            for (int i = 0; i < 26; i++) {
//                if (arr[i] == 0) continue;
//                res.push_back(i + 'a');
//                arr[i]--;
//            }
//            for (int i = 25; i >= 0; i--) {
//                if (arr[i] == 0) continue;
//                res.push_back(i + 'a');
//                arr[i]--;
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