//#include<iostream>
//#include<vector>
//#include<unordered_set>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�ڴ�СΪ 2N ������ A ���� N+1 ����ͬ��Ԫ�أ�������һ��Ԫ���ظ��� N �Ρ�
//    // ˼·���������⣬�������ظ���Ԫ��ֻ��һ����
//    // ��ô������set��¼ÿһ�����ֵ�Ԫ�أ��ڶ��γ���ʱֱ�ӷ������Ԫ��
//    int repeatedNTimes(vector<int>& A) {
//        unordered_set<int> set;
//
//        for (auto& i : A) {
//            if (set.count(i)) {
//                return i;
//            }
//            set.insert(i);
//        }
//
//        return -1;
//    }
//};
//
//int main() {
//	return 0;
//}