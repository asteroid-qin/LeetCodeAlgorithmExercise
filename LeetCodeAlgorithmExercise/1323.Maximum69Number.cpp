//#include<iostream>
//#include<string>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺����һ���������� 6 �� 9 ��ɵ������� num��
//    // �����ֻ�ܷ�תһλ���֣��� 6 ��� 9�����߰� 9 ��� 6 ��
//    // �뷵������Եõ���������֡�
//    // ��ǰ����������ҵ���һ��6Ȼ������ĳ�9���ɡ�
//    // ��Ϊ�Ǵ�ǰ����������Կ��԰�intתstring����findȥ���һ��6���鵽���˸ģ������תint�ٷ���
//    // û�鵽�ͷ��ر���
//    int maximum69Number(int num) {
//        string s = to_string(num);
//
//        int pos = s.find('6');
//        if (pos != string::npos) {
//            s[pos] = '9';
//            return stoi(s);
//        }
//
//        return num;
//    }
//};
//
//int main() {
//	return 0;
//}