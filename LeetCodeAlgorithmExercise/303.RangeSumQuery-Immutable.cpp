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
//        // 使用动态规划把和放入这个cache中
//        for (int i = 0; i < nums.size(); i++) {
//            preSum[i + 1] = preSum[i] + nums[i];
//        }
//    }
//
//    // 目标，求出一个数组，i到j范围内的和
//    // 思路，直接一个while循环遍历即可
//    // PS: 这里是返回int，应该不会溢出吧...
//    // 好吧，虽然一次过，但是仔细看约束条件，发现这个方法会被调用非常多次
//    // 所以，绝对是可以优化的（其实就是相当于做一个缓存）
//    int sumRange(int i, int j) {
//        // 直接去cache中取出值，注意需要+1，最后还需要加上本身,所以i可以减去1
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