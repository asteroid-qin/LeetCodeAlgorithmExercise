//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // ��һ���������Ŀ�꣺��ת�ַ����е�Ԫ����ĸ(ע�⣬������Сд)
//    // ˼·���ȵõ�����Ԫ����ĸ���±꣬Ȼ��һ��forѭ����������
//    // ��Ȼ����һ�ַ�����ʹ��˫ָ�룬������û��Ҫ�½�һ�����鲢��һ��forѭ��
//    string reverseVowels(string s) {
//        // ׼��һ�����飬��Ԫ����ĸ���±�Ž�ȥ
//        vector<int> v;
//
//        for (int i = 0; i < s.size(); i++) {
//            if (isVowels(s[i]))
//                v.push_back(i);
//        }
//
//        int size = v.size();
//        // ��һ��forѭ����������
//        for (int i = 0; i < size / 2; i++) {
//            swap(s[v[i]], s[v[size - i - 1]]);
//        }
//
//        return s;
//    }
//
//    // perfect��
//    string reverseVowelsPlus(string s) {     
//        // һ��forѭ���㶨
//        for (int i = 0, j = s.size() - 1; i < j; i++, j--) {
//            // �жϵ�ǰi��jָ����Ƿ���Ԫ����ĸ��������Ǿ�++����Ҫһֱָ��Ԫ����ĸ
//             // ע����ܳ���һ���ַ���ȫ������Ԫ����ĸ���������������while���������һ���жϣ�
//            while(i < j && !isVowels(s[i])) {
//                i++;
//            }
//            while (i < j && !isVowels(s[j])) {
//                j--;
//            }
//           
//            // ����whileѭ��������i��jָ���һ����Ԫ����ĸ�����Կ��Խ���
//            swap(s[i], s[j]);
//        }
//
//        return s;
//    }
//
//    bool isVowels(char& c) {
//        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
//            || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
//    }
//};
//
//int main() {
//    Solution s;
//    string str =  s.reverseVowelsPlus("hello");
//
//    cout << str << endl;
//	return 0;
//}