//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // �������2.0
//    // ��һ���б�ֱ�ӷ��ظ����ڵ�һ�����ݡ��������⣬ֱ�Ӵ������ұ�����϶��ǲ��е�
//    // ʹ�ö�̬�滮����ǰ��ֵ��ǰ���ֵ���Ե�ǰ��ֵ-i��i
//    vector<int> getRow(int rowIndex) {
//        // ��ʼ��vector����
//        vector<int> v(rowIndex + 1, 1);
//
//        // ֱ��һ��forѭ������1��ʼ��
//        for (int i = 1; i < rowIndex; i++) {
//            // ��Ϊ����������˹�������⣬������Ҫ��ת��long,�����ǿת��int
//            v[i] = (int)(1L * v[i - 1] * 1L * (rowIndex - i + 1) / i);
//        }
//
//        return v;
//    }
//};
//
//int main() {
//
//	return 0;
//}