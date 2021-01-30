//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 靠，栽了一个大跟头，明明是简单题，但是需要使用动态规划...
//	// 真正自己写完后，发现这个算法确实妙	
//    int rob(vector<int>& nums) {
//        if (nums.size() == 0)
//            return 0;
//
//        if (nums.size() == 1) {
//            return nums[0];
//        }
//
//        // 关键就是列出动态规划方程：
//        // 设k为总天数，当k 》 2，则有两种可能，
//        // 一种是第k天抢，那么k-1天就不能抢，所以第k天能拿到的金额是k-2天拿到的总金额加上第k天拿到的金额
//        // 另一种是第k天不抢，那么总金额是第k-1天时的总金额
//
//        // 通过上面的分析，我们需要有两个变量来记录第k-1天和第k-2天的总金额
//        // 这里将second作为结果返回，因为要排除k=2的情况
//        // 还有就是为了减少内存消耗，使用滚动数组来存放数据
//        int first = nums[0], second = max(first, nums[1]);
//
//        for (int i = 2; i < nums.size(); i++) {
//            int temp = second;
//            second = max(first + nums[i], second);
//            first = temp;
//        }
//
//
//        return second;
//    }
//};
//
//int main() {
//
//	return 0;
//}