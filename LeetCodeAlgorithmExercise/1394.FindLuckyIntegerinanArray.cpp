//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�Ƽ�ֱ�ӿ�����...(�о�ûʲô�ܸ�����..)
//    // ��֮����Ҫ�õ� arr�г��ִ����ͱ���ֵһ����������ж���ͷ���ֵ���ģ�һ����û�оͷ���-1��Ĭ�ϣ�
//    // ˼·��1 <= arr[i] <= 500��ֱ�Ӽ�������Ȼ�������������ֵ�͵�ǰ�±�+1��ȵľ�ֱ��return��Ĭ�Ϸ���-1
//    int findLucky(vector<int>& arr) {
//        int buck[500] = { 0 };
//        for (int& i : arr) {
//            buck[i - 1]++;
//        }
//
//        for (int i = 499; i >= 0; i--) {
//            if (buck[i] == 0) continue;
//            if (buck[i] == i + 1) {
//                return buck[i];
//            }
//        }
//
//        return -1;
//    }
//
//};
//int main() {
//	return 0;
//}