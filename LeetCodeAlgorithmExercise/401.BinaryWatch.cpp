//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺��Ŀ̫����...���ܶ���֮������������һ������Сʱ��1248��ʱ�������е��������
//    // ��һ��������ӣ�12481632��ͬ��ʱ�������е�������ӣ�����num�����˶��ٵƣ�����ܵ�ʱ���
//    // �漰�����ݣ���֮���ǱȽ��ѣ��ڿ���������д�����󣬻��Ǿ����Լ�����дһ���������
//    vector<string> readBinaryWatch(int num) {
//        vector<string> v;
//
//        // ����˫forѭ��
//        for (int i = 0; i < 12; i++) {
//            for (int j = 0; j < 60; j++) {
//                // ���־��Ǳ�������ÿһ�������ֻҪi��j�Ķ����Ƹ����ǵ���num�ģ��Ǿ�����һ�ֿ���
//                if (getBitCount(i) + getBitCount(j) == num) {
//                    v.push_back(to_string(i)+":"+ (j > 9?to_string(j):"0"+to_string(j) ));
//                }
//            }
//        }
//
//        return v;
//    }
//
//    // ����һ����������ת���ɶ�����ʱ���ж��ٸ�1(ע��������Ϣ��n�϶��Ǵ���0��)
//    int getBitCount(int n) {
//        int res  = 0;
//
//        while (n != 0) {
//            // �����ж��ٸ�1
//            res += (n & 1);           
//            n >>= 1;
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}