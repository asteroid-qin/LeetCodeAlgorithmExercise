//#include<iostream>
//#include<stack>
//#include<map>
//#include<string>
//using namespace std;
//
//
//
//class Solution {
//private:
//    // ׼��һ��map
//    map<char, char> m;
//
//public:
//    // ����������ʼ��map
//    Solution() {
//        this->m[')'] = '(';
//        this->m[']'] = '[';
//        this->m['}'] = '{';
//    }
//    // ����������������һ������
//    bool isValid(string s) {
//        // �õ��ַ����ĳ���
//        int length = s.size();
//        // �жϵ�ǰ�ַ����ĳ����Ƿ���2�ı���
//        if (length % 2 != 0) {
//            // ������ǣ��򲻿�������Ч������
//            return false;
//        }
//        // ��ʼ��һ��ջ
//        stack<char> brackets;
//        
//        // forѭ�����������ַ���
//        for (int i = 0; i < length; i++) {
//            // �õ���ǰ�������ַ�
//            char c = s.at(i);
//
//            // ȥmap�����
//            map<char, char>::iterator mit = this->m.find(c);
//
//            // ����鵽�ˣ��Ǿʹ�����������
//            if (mit != m.end()) {
//                char top = '#';
//
//                // ��ջ��ȡ��Ԫ�أ�һ��Ҫע�⴦��ջΪ�յ������
//                if (!brackets.empty()) {
//                    // ��Ϊc++��pop�����ص�����ֵ�����Ա���ʹ��top����
//                    top = brackets.top();
//                    // �õ�ֵ���ٵ���
//                    brackets.pop();
//                }
//
//                // ��ӡ
//                cout << "************" << endl;
//                cout << "��ǰ��top:" << top << "��ǰ�ı���Ԫ�أ�" << mit->second << endl << endl;
//
//                // �ж�ջ��Ԫ���Ƿ�͵�ǰԪ��ƥ��
//                // �����ƥ�䣬��ô����϶�������Ч����
//                if (top != mit->second) {
//                    return false;
//                }
//            }
//            else {
//                // ��Ȼ���������ţ���Ҫ����ջ��
//                brackets.push(c);
//            }
//        }
//
//        // forѭ���������ж�ջ�Ĵ�С�Ƿ�Ϊ0������ǣ���ô�����������ˣ�����Ч����
//        return brackets.empty();
//    }
//};
//
//
//// �ж��Ƿ�����Ч����
//int main() {
//    string str = "()[]{}";
//
//    Solution s;
//    bool flag = s.isValid(str);
//    cout << "����һ���ַ������ź󣬽��Ϊ��" << flag << "  ->";
//
//    if (flag) {
//        cout << "��Ч" << endl;
//    }
//    else {
//        cout << "��Ч" << endl;
//    }
//
//
//	return 0;
//}