//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺ɾ��S�е��ظ���������ظ���Ԫ�ؾ��������õ��µ��ַ���Ȼ���ٳ���������ֱ��������������������������
//    // ˼·��������ջ�Ƚ������˼�����������⣨�ú�c++�е�string�Ϳ��Ե���ջһ���棩
//    string removeDuplicates(string S) {
//        // �������ɣ���S��ÿһ���ַ������ж�
//        // ���ȵ�ǰƴ�ӵ�res�Ƿ�Ϊ�գ�Ϊ������������������
//        // �����Ϊ�գ���ô�ж����һ��Ԫ���Ƿ���ڵ�ǰԪ�أ�������ھ͵���β��Ԫ�ز���ʼ��һ��ѭ��
//        // ��ˣ����������󣬵õ���res����������Ҫ�Ľ��
//        string res;
//
//        for (char& c : S) {
//            if (res.size() != 0 && res.back() == c) {
//                res.pop_back();
//            }
//            else {
//                res.push_back(c);
//            }
//        }
//        return res;
//    }
//};
//
//int main() {
//    string res = "";
//
//    cout << "���~~" << endl;
//    // cout << res.back() << endl; ע�⣡���ַ������ܵ���back
//
//	return 0;
//}