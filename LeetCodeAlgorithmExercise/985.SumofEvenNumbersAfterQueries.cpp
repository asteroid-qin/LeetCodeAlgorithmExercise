//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺ÿִ��һ��queries�����������޸�A������������Ͱ�A�����ż���ͷ��������У���󷵻��������
//    // ˼·������϶�����ִ��һ������ͱ���һ��A������̫���ˡ����Եû�һ��˼·�������A�е�ż���ͣ���sum��
//    // ��ô����A����Ĳ������Խ��з������ۣ�
//    // �������������������
//    //      ����֮����ż������ô��Ҫ�����ż������sum��
//    //      ������������ͷŹ�
//    // �������������ż����
//    //      ����֮����ż������ô��Ҫ�����ż������sum��
//    //      ��������������ô����Ҫ�����ż����sum���Ƴ�
//    // �ܽ������˼·������һ���������ж��Ƿ�Ϊż�����Ǿʹ�sum���Ƴ���Ȼ�����������в����������ż����������
//    // �����������sum�С�ÿִ��һ����ѯ���Ͱ�sum���������У���󷵻��������
//    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
//        vector<int> res(queries.size());
//
//        int sum = 0;
//        for (auto& i : A) {
//            if (i % 2 == 0) {
//                sum += i;
//            }
//        }
//
//        for (int i = 0; i < res.size(); i++) {
//            int index = queries[i][1], val = queries[i][0];
//
//            if (A[index] % 2 == 0) {
//                sum -= A[index];
//            }
//            A[index] += val;
//
//            if (A[index] % 2 == 0) {
//                sum += A[index];
//            }
//
//            res[i] = sum;
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}