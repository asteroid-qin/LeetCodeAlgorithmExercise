//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺����a��b��c��������������a��b��c��������Ҫ��С�Ĳ��������Ĳ���
//    // ˼·�����ȵö�a��b��c�����ǵ�a<b<c��������������󣬾���c-b-1+b-a-1=c-a+2
//    // �ؼ�����Сֵ��ô������Ҫ�������ۣ�
//    // ���a��b��cǡ����������ô��Сֵ����0.
//    // ���a��b�и���һ��1����b��c�и���һ��1���ֻ��ߴ������������ڣ���ô��Сֵ����1
//    // ��������������2
//    // ���������˼·����ʵ�ּ���
//    vector<int> numMovesStones(int a, int b, int c) {
//        // �ȶ�����������
//        if (a > b) swap(a, b);
//        if (a > c) swap(a, c);
//        if (b > c) swap(b, c);
//
//        int maxNum = c - a - 2, minNum = 2;
//
//        if (a + 1 == b && b + 1 == c) {
//            minNum = 0;
//        }
//        else if (a + 1 == b || b + 1 == c || b - a == 2 || c - b == 2) {
//            minNum = 1;
//        }
//        
//        return { minNum, maxNum };
//    }
//};
//
//int main() {
//	return 0;
//}