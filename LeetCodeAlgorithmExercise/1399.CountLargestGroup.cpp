//#include<iostream>
//#include<unordered_map>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺ֱ�ӿ���ĿҪ���..��֮���ǰ�1-nÿ����������λ�ͽ��з��飨2��11����һ�飩��
//    // ��ɷ���������������Ŀ�����������ж��ٸ�
//    // ˼·�������Ǹ�����λ�ͽ��з��飬������map�����з��飬key����λ�ͣ�value�Ǹ�����
//    // ����n�����з��飬�õ�map,��ͬʱ���������Ŀ���ֵ��Ҳ����m[sum]++������ֵ����
//    // �����һ����������¼������ֵ���ֵĴ���������map�����ؼ���
//    int countLargestGroup(int n) {
//        unordered_map<int, int> m;
//        int maxNum = -1;
//        while (n) {
//            int i = n, sum = 0;
//
//            while (i) {
//                sum += i % 10;
//                i /= 10;
//            }
//
//            m[sum]++;
//            maxNum = max(maxNum, m[sum]);
//            n--;
//        }
//
//        int count = 0;
//        for (auto& it : m) {
//            if (it.second == maxNum) {
//                count++;
//            }
//        }
//        
//        return count;
//    }
//};
//
//int main() {
//	return 0;
//}