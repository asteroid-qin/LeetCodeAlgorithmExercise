//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�ж�A�Ƿ���B����ת�ַ���
//    // ˼·����ת�ַ���Ҳ������ζ�ŵ�1�������Ƶ����Ҳ�п��ܵ�1��2λ�ƶ������...
//    // Ҳ�п�����Aǰn-1�ƶ������n��A�ĳ��ȣ�����������������ֱ��A+A�������Ϳ��԰�ÿһ�ֿ����г�����
//    // Ȼ��ʹ��KMP�㷨������B�ܲ���ƥ�伴�ɡ�����Լ�дKMP�㷨��Ȼ�󳤶�ȡģʵ���������Ӽ򵥣������ٶȲ�����
//    bool rotateString(string A, string B) {
//        // ֻ��Ҫע����ǣ�c++��find�Ҳ�����Ĭ�Ϸ���string::npos
//        return A.size() == B.size() && (A + A).find(B) != string::npos;
//    }
//};
//
//int main() {
//	return 0;
//}