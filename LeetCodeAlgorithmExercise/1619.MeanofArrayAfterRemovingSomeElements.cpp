//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺������ɾ����С 5% �����ֺ���� 5% �����ֺ�ʣ�����ֵ�ƽ��ֵ
//    // ˼·��������Ȼ�����5%��Χ�ķ�Χrange��Ȼ�����arr��sum��ֻ���㴦��range��m - range���ڵ�����
//    // ��󷵻� sum / (m - 2 * range) ����
//    double trimMean(vector<int>& arr) {
//        sort(arr.begin(), arr.end());
//        int sum = 0, m = arr.size(), range = m * 0.05;
//
//        for (int i = 0; i < m; i++) {
//
//            if (i >= range && i < m - range) {
//                sum += arr[i];
//            }
//        }
//
//        double temp = m - 2 * range;
//        return sum / temp;
//    }
//};
//
//int main() {
//	return 0;
//}