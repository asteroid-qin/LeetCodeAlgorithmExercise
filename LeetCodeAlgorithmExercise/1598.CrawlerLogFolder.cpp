//#include<iostream>
//#include<vector>
//#include<stack>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺ �������ļ����������С���� ��
//    // ˼·������ջ���ɡ�����logs
//    // �����ǰ�ַ���"../",����ջ��Ϊ�գ��Ͱѵ���ջ��Ԫ�أ��൱��������һ��Ŀ¼��
//    // �����ǰ�ַ��ǣ�"./",�����κδ���
//    // �����ǰ�ַ��ǣ������ַ������뵽ջ�У���������ֻҪ��С��������ʵû��Ҫ������������־�ַ���������һ���������У�
//    // ����ϸ��һ����������ջ������ʡ����ֱ����һ������step����¼��ǰ�Ĳ�����
//    // ����logs����"../"��--����Ȼ������step>0������Ĳ�����
//    // ��"./"��continue�� ���������ַ���step++.
//    // ��󷵻����step����
//    int minOperations(vector<string>& logs) {
//        stack<string> st;
//
//        for (auto& s : logs) {
//            if (s == "../") {
//                if (!st.empty()) {
//                    st.pop();
//                }
//            }
//            else if (s != "./") {
//                st.push(s);
//            }
//        }
//
//        return st.size();
//    }
//
//    int minOperations(vector<string>& logs) {
//        int step = 0;
//
//        for (auto& s : logs) {
//            if (s == "./") continue;
//            if (s == "../") {
//                if (step > 0) {
//                    step--;
//                }
//            }
//            else {
//                step++;
//            }
//        }
//
//        return step;
//    }
//};
//
//int main() {
//	return 0;
//}