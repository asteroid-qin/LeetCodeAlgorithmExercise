//#include<iostream>
//#include<vector>
//using namespace std;
//
//class NumArray {
//public:
//    vector<int> preSum;
//
//    NumArray(vector<int>& nums) {
//        preSum.resize(nums.size()+1);
//        // ʹ�ö�̬�滮�Ѻͷ������cache��
//        for (int i = 0; i < nums.size(); i++) {
//            preSum[i + 1] = preSum[i] + nums[i];
//        }
//    }
//
//    // Ŀ�꣬���һ�����飬i��j��Χ�ڵĺ�
//    // ˼·��ֱ��һ��whileѭ����������
//    // PS: �����Ƿ���int��Ӧ�ò��������...
//    // �ðɣ���Ȼһ�ι���������ϸ��Լ��������������������ᱻ���÷ǳ����
//    // ���ԣ������ǿ����Ż��ģ���ʵ�����൱����һ�����棩
//    int sumRange(int i, int j) {
//        // ֱ��ȥcache��ȡ��ֵ��ע����Ҫ+1�������Ҫ���ϱ���,����i���Լ�ȥ1
//        return preSum[j + 1] - preSum[i];
//    }
//};
//
//int main() {
//    vector<int> v = {-2,0,3,-5,2,-1};
//    NumArray* n = new NumArray(v);
//
//    cout << n->sumRange(2,5) << endl;
//
//	return 0;
//}