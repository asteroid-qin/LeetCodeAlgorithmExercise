//#include<vector>
//#include<iostream>
//using namespace std;
//class Solution {
//public:
//    // Ŀ�꣺��һ�����������������ĳ˻�������
//    // ˼·�������������ֱ��¼��һ���ڶ��������������������������¼��һ���ڶ�С������
//    // ��󷵻ص�һ��*�ڶ���*������͵�һ��*��һС*�ڶ�С֮������ֵ����
//    // Ϊʲô�����������ȵڶ�С��ֵ���ڵ���0�����ֵС�ڵ���0������£���һ��*�ڶ���*�������ֵ����������
//    // ��������Ҫ���ǵ�һС�͵ڶ�С���Ǹ�����Ȼ�����ǵĳ˻��Ƿ���ڵڶ�*����
//    // �ܽ�����ķ���������ֽ��Ҫô�ǵ�һ��*�ڶ���*������Ҫô�ǵ�һ��*��һС*�ڶ�С������ֱ�ӷ�������֮������ֵ
//    // ����
//    int maximumProduct(vector<int>& nums) {
//        int i = INT_MIN, j = INT_MIN, k = INT_MIN;
//        int a = INT_MAX, b = INT_MAX;
//
//        for (auto n : nums) {
//            if (n > i) {
//                k = j;
//                j = i;
//                i = n;
//            }
//            else if (n > j) {
//                k = j;
//                j = n;
//            }
//            else if (n > k) {
//                k = n;
//            }
//
//            if (n < a) {
//                b = a;
//                a = n;
//            }
//            else if (n < b) {
//                b = n;
//            }
//        }
//        /*cout << "a:" << a << ", b:" << b << endl;
//        cout << "i:" << i << ", j:" << j << ", k:" << k << endl;*/
//        return max(a * b * i, i * j * k);
//    }
//};
//
//int main() {
//    Solution s;
//    vector<int> res = { 1,2,3,4 };
//    s.maximumProduct(res);
//    return 0;
//}