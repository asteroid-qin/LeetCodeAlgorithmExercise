//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ��: �� (IPv4)address�����. �滻��[.]
//    // ˼·����򵥾���stringƴ�ӣ����̫����...��
//    // ��һ��˼·������address�ϸĶ��������������6���������ַ���
//    // Ȼ����ԭʼ���ȴӺ���ǰ��������һ��������¼��ǰ��ƫ������ÿ���óɹ�һ���ַ���++��
//    // �����ǰ�ַ�����.�Ͱѵ�ǰ�ַ�����ƫ�ƺ���±꣬ƫ����++
//    // �����ǰ�ַ���.�Ͱѵ�ǰƫ�ƺ���±�����ǰ2��λ��(������ǰλ��)�����ó�[.]��Ȼ��ƫ��+3
//    string defangIPaddr(string address) {
//        // ���Ǽ�д��..
//        string s;
//        for (char& c : address) {
//
//            if (c == '.') {
//                s += "[.]";
//            }
//            else {
//                s.push_back(c);
//            }
//        }
//
//        return s;
//
//
//        // ����ֱ����address�ϸĶ�
//        /*int i = address.size() - 1;
//        address += "######";
//
//        for (int pos = 0, m = i + 6; i >= 0; i--) {
//            if (address[i] != '.') {
//                address[m - pos++] = address[i];
//            }
//            else {
//                address[m - pos] = ']';
//                address[m - pos - 1] = '.';
//                address[m - pos - 2] = '[';
//                pos += 3;
//            }
//        }
//
//        return address;*/
//    }
//};
//
//int main() {
//	return 0;
//}