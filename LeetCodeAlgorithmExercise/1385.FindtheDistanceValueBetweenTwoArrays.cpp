//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺���������������� arr1 �� arr2 ��һ������ d �����㷵����������֮��� ����ֵ ��ֱ�ӿ��ٷ�������
//    // ��ʵ���Ǽ����ж��ٸ�Ԫ������|arr1[i]-arr2[j]| <= d ��
//    // ˼·: ��̫����..ֱ�ӱ�����������(Ҫô������Ҫô����)
//    // ��������д���Կ�ʹ...��������api������ܶ�
//    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
//        sort(arr2.begin(), arr2.end());
//        int count = 0;
//
//        for (auto& x : arr1) {
//            unsigned p = lower_bound(arr2.begin(), arr2.end(), x) - arr2.begin();
//            bool flag = true;
//            if (p < arr2.size()) { // С��arr2������Ԫ�ض���xҪС���Ӷ�����pԽ��
//                flag &= (arr2[p] - x > d);
//            }
//            if (p - 1 >= 0 && p - 1 < arr2.size()) { // unsigned-1��Ҳ��Խ�磡��
//                flag &= (x - arr2[p - 1] > d);
//            }
//            count += flag;
//        }
//
//        return count;
//    }
//
//};
//int main() {
//	return 0;
//}