//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺jewels��ÿ���ַ�Ϊ�����ַ�����stonees���������ַ�������
//    // ˼·����jewelsת��map���������⣬�������ʹ��int���飩������stones
//    // ��ÿһ���ַ���map�飬���ھ�count++����󷵻�count����
//    int numJewelsInStones(string jewels, string stones) {
//        int a[128] = { 0 };
//        for (char c : jewels) {
//            a[c - 'A']++;
//        }
//
//        int res = 0;
//        for (char c : stones) {
//            if (a[c - 'A'] != 0) {
//                res++;
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