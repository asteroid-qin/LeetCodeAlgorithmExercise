//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // �üһ��д���ж��Ƿ���3���ݴη�����������һ���ж��Ƿ���4���ݴη�,ֱ�ӷ���4����
//    bool isPowerOfFour(int n) {
//        // ��Ϊ����������ȼ����ڹ�ϵ����������Ա���ʹ�����ţ���
//        return (n > 0) && ((n & (n - 1)) == 0) && ((n & 0xaaaaaaaa) == 0);
//    }
//};
//
//
//int main() {
//    long long i = 4;
//
//    while (i < INT_MAX) {
//        i = i * 4;
//        cout << "��ʱ��i:" << i <<  endl;
//    }
//    
//    cout << i / 4 << endl;
//
//
//	return 0;
//}