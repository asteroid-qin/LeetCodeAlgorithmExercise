//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�ж��ܷ��γɵȲ�����
//    // ˼·����arr�������򣬸���2 <= arr.length <= 1000���㣬ǰ����Ĺ���
//    // �ӵ�����Ԫ�ؿ�ʼ������ֻҪ��ǰԪ��-��һ��Ԫ�ز����ڹ����false��Ĭ��true
//    bool canMakeArithmeticProgression(vector<int>& arr) {
//        sort(arr.begin(), arr.end());
//        int d = arr[1] - arr[0];
//        for (int i = 2; i < arr.size(); i++) {
//            if (arr[i] - arr[i - 1] != d) {
//                return false;
//            }
//        }
//
//        return true;
//    }
//};
//
//int main() {
//	return 0;
//}