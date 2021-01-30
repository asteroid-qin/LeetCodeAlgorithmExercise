//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//
//class Solution {
//public:
//    // ��������Ҫ��ʵ�ֲ�ѯ�ַ����������ԣ�������Ҫʵ��KMP�㷨��KMP�㷨��򵥣�����
//    int strStr(string haystack, string needle) {
//        // ��������������һ��ָ��haystack��һ��ָ��needle
//        int i = 0, j = 0;
//
//        // �Ƚ��зǿ��ж�
//        if (needle.size() == 0) {
//            // ���ǿ��ַ�����Ϊ0
//            if (haystack.size() == 0)
//                return 0;
//            // �����������-1
//            return -1;
//        }
//
//        // �õ�һ�������next����
//        vector<int> next = getStrNext(needle);
//
//        // ֱ��һ��whileѭ��,����Ϊi��j���벻������Ӧ�ַ����ĳ���
//        while (i != haystack.size() && j != needle.size()) {
//            // �ж�iָ����ַ��Ƿ����jָ����ַ�
//            if (j == -1 || haystack[i] == needle[j]) {
//                // ������ڣ���ô�ͼ���������Ƚ�
//                i++;
//                j++;
//            }
//            else {
//                // ��������ھͣ�����next��������j���±�
//                j = next[j];
//            }
//        }
//
//        // ���
//        if (j == needle.size()) {
//            return i - j;
//        }
//        else {
//            return -1;
//        }
//       
//
//    }
//
//    // ����һ���ַ��������ɶ�Ӧ��next����(���������ǰ���ǣ��ַ����ĳ��ȱ������0)
//    vector<int> getStrNext(const string str){
//        // ��vector�䵱����(ԭ���ǣ�c++���鲻֧���ñ���������С)
//        vector<int> next(str.size());
//
//        // �ȳ�ʼ��
//        next[0] = -1;
//        // next[1] = 0; // ����Ҫ����Ϊ��ʼ����ʱ��ȫ��1
//    
//        // һ��������¼��ǰ��һ���±��Ӧnext���±�
//        int n = 0;
//
//        // һ��forѭ������������ַ���
//        for (int i = 2; i < str.size(); i++) {
//            // ���õ���ǰ�±��ǰһ���±� ��Ӧ�� next��ֵ
//            n = next[i - 1];
//            // ֱ��whileѭ��(����-1����Ϊ���Ҳ�������Ҫ���ݣ������ݵ��±�Ϊ0��ֵ��-1��ʱ��Ӧ�ý�������)
//            // ������һ��ѭ������ʱi��ֵĬ��Ϊ0����Ϊ��vector������
//            while (n != -1) {
//                // �����ǰ�±����һ���±� ��Ӧ���ַ� ���� ��ǰ�±��ǰһ���±� ��Ӧ��nextֵ ��Ӧ���ַ�
//                // ��ô��ǰ�±��Ӧ��nextֵ���� ��ǰ�±��ǰһ���±� ��Ӧ��nextֵ �Ļ����ϼ�һ
//                if (str[i - 1] == str[n]) {
//                    next[i] = n + 1;
//                    break;
//                }
//                else {
//                    // ��Ȼ�Ļ�������Ҫ��
//                    // ָ��ǰ�±��ǰһ���±� ��Ӧ��nextֵ ��ָ����ַ� ����ָ���nextֵ
//                    // ��ֵ��n 
//                    n = next[n];
//                }
//            }
//
//        }
//        
//        cout << "��ӡ���next���飺" << endl;
//        printVector(next);
//
//        // ���������return��ȥ
//        return next;
//    }
//    
//    // ��ӡ�������
//    void printVector(vector<int>& v) {
//        for (int i = 0; i < v.size(); i++) {
//            cout << "��ǰ��ֵΪ��" << i << " -> "<< v[i] << endl;
//        }
//    }
//
//};
//
//// �����Լ�д��KMP�㷨���о�û��Ҫ���ԣ�
//int main() {
//    // ��ʼ����
//    Solution s;
//    // s.strStr("abc", "a");
//
//    int index = s.strStr("googllgoogoogle","google");
//    cout << "��ǰ�±�Ϊ��" << index <<  endl;
//	return 0;
//}