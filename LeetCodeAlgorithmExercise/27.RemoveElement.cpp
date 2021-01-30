//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	// 成功可用，一次过（但是可以优化）
//	// 规定需要满足o(1)空间复杂度，所以很难走弯路（一次过，4ms）
//	// 好吧，可以再优化，可以让j记录有多少重复元素的同时，记录后面元素的偏移量
//	// 看了一下答案的两种解决方案，太妙了！！果断选择第二种
//    int removeElement(vector<int>& nums, int val) {
//		// 需要用一个变量j记录有多少重复元素
//		int j = 0;
//		// ×需要使用一个数组来记录重复元素的下标（不行！得满足o(1)空间复杂度）
//		// 换成一个变量k来记录后面元素的偏移量
//		// int k = 0; （可以用j代替）
//
//		// 从左往右遍历这个数组
//		for (int i = 0; i < nums.size(); i++) {
//			// 判断是否等于这个val
//			if (nums[i] == val) {
//				// 如果等于的话，变量j++，记录后面元素的偏移量k
//				j++;
//				// k++;
//			}
//			else {
//				// 如果不等于的话，把当前的元素赋值给[i-k]下标的元素
//				nums[i - j] = nums[i];
//			}
//		}
//
//		return nums.size() - j;
//    }
//};
//
//
//// 完成移出元素的测试
//int main() {
//	// 准备要测试的容器
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(5);
//	v.push_back(4);
//
//	cout << "开始测试：" << endl;
//
//	Solution s;
//	int length = s.removeElement(v, 4);
//
//	// 遍历这个数组
//	for (int i = 0; i < length; i++) {
//		cout << "当前下标为：" << i << "值为：" << v[i] << endl;
//	}
//
//	return 0;
//}