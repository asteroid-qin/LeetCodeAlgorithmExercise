//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺sentence���Ի����ַ������飬����˳�򷵻ص�һ����searchWordΪǰ׺���ַ������±�+1
//    // �Ҳ�������-1
//    // ˼·�����Ȱ�sentenceת���ַ������飬Ȼ�����������飬������searchWordƥ��ǰ׺�����ƥ��ɹ�return i+1
//    // Ĭ�Ϸ���-1
//    // ��Ȼ�����ת�ַ�������Ļ������˷�һ���Ŀռ�..����������������ܲ�����sentence��ֱ�Ӳ���...
//    // ���ǣ���Ȼ���ԣ�ֱ�ӵ���api����find searchWord
//    // ����Ҫ�ҵ������ж�pos-1ָ����ַ��Ƿ���ڿո�����Ǿ�break������һֱ��...
//    // whileѭ���������ж�pos�Ƿ��ҵ��ˣ��ҵ��˾ʹ�0������pos�������ж��ٸ��ո�ʹ���ǰ�ǵڼ������ʣ���󷵻ؼ���
//    int isPrefixOfWord(string sentence, string searchWord) {
//        int pos = sentence.find(searchWord);
//        while (pos != string::npos) {
//            if (pos == 0 || sentence[pos - 1] == ' ') {
//                break;
//            }
//            pos = sentence.find(searchWord, pos + searchWord.size());
//        }
//
//        int count = 1;
//        if (pos != string::npos) {
//            for (int i = 0; i < pos; i++) {
//                if (sentence[i] == ' ') {
//                    count++;
//                }
//            }
//
//            return count;
//        }
//
//        return -1;
//    }
//};
//
//int main() {
//    return 0;
//}