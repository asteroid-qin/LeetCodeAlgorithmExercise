//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺����һ���ǵݼ��� ���� �������飬��֪���������ǡ����һ�����������ĳ��ִ�����������Ԫ�������� 25%��
//    // �����ҵ��������������
//    // ˼·������arr������ģ����Կ��������Ƚϱ���
//    // Ĭ��������1��ʼ����ǰ�ͺ�һ����Ⱦ�++�����Ⱦ�������λ1
//    // ���Ԫ���ܺ͵�25%��ֻҪ�������ھ�ֱ��return��Ĭ�Ϸ��ص�һ��Ԫ�أ�1 <= arr.length <= 10^4��
//    int findSpecialInteger(vector<int>& arr) {
//        int count = 1, maxNum = arr.size() / 4;
//
//        for (int i = 0; i < arr.size() - 1; i++) {
//            if (arr[i] == arr[i + 1]) {
//                count++;
//            }
//            else {
//                count = 1;
//            }
//
//            if (count > maxNum) {
//                return arr[i];
//            }
//        }
//
//        return arr[0];
//    }
//};
//
//int main() {
//	return 0;
//}