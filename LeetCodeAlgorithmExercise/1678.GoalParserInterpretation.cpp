//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺����ָ����������ַ���ƴ��..
//    // ˼·������һ�鼴�ɡ�����if�ж�
//    string interpret(string command) {
//        string res;
//
//        for (int i = 0; i < command.size(); i++) {
//            if (command[i] == 'G') {
//                res.push_back('G');
//                continue;
//            }
//
//            if (command[i + 1] == ')') {
//                res.push_back('o');
//                i++;
//            }
//            else {
//                res.append("al");
//                i += 3;
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