//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�� k ��ȱʧ��������
//    // ˼·��1 <= arr[i] <= 2000��ʹ�ü�������k��arr[i]����ӣ�����*2��
//    // �Ȱ�arr����������������У�Ȼ������������
//    // �������ֵ����0������0�ʹ���ǰ����ȱʧ�ģ�����ôk--
//    // ���ж�k==0���������0�ͷ��ص�ǰ�±�+1.��Ĭ�Ϸ���-1��
//    // ����ֱ����arr�������k��ȱʧ����������˼·��
//    // ����arr����¼��һ��i��ֵ������һ��i��ֵ+1��������ǰi����num��¼ѭ���Ĵ���
//    // ��num==kʱ�����ص�ǰָ���ֵ
//    // ����ѭ��������Ĭ�Ϸ���arr���һ����+k-num
//    int findKthPositive(vector<int>& arr, int k) {
//        int A[2000] = { 0 };
//        for (int& i : arr) {
//            A[i - 1]++;
//        }
//        for (int i = 0; i < 2000; i++) {
//            if (A[i] == 0) {
//                k--;
//                if (k == 0) {
//                    return i + 1;
//                }
//            }
//        }
//
//        return -1;
//    }
//
//    int findKthPositiveP(vector<int>& arr, int k) {
//        int pre = 0, num = 0;
//        for (int& i : arr) {
//            for (int j = pre + 1; j < i; j++) {
//                num++;
//                if (num == k) {
//                    return j;
//                }
//            }
//
//            pre = i;
//        }
//
//        return arr[arr.size() - 1] + k - num;
//    }
//
//    // ��Ը��Ϊ�ռ��棬��������д��...
//    int findKthPositiveP(vector<int>& arr, int k) {
//        for (int i = 0; i < arr.size(); i++) {
//            if (arr[i] <= k) {
//                k++;
//            }
//        }
//
//        return k;
//    }
//};
//
//int main() {
//	return 0;
//}