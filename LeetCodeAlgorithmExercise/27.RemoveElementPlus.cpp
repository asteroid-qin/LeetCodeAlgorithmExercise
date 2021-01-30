//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	// 看了答案后的升级版！！（时间和空间复杂的远远比自己写的要低）
//	// 原来的方法是从左往右遍历，利用i来记录不等值的个数和要插入的下标
//	// 当时如果容器是[1,2,3,5,4],val = 4 那么会赋值4次
//	// 而这个则是改进版，依然从左往右扫描，但是不会轻易赋值，只有当相等的时候，才会把n指向的值付给当前的i
//	// 并且n会后移，如果刚好n指向的值是val，n又会右移，直到移入的值不是val为止
//	// 所以这个算法虽然面对[1,2,3,5,4]表现非常良好，但是面对[1,4,3,4,4]就会一般
//	// [1,2,3,5,4,8,5,4]
//	int removeElement(vector<int>& nums, int val) {
//		// 用变量i来代表新容器的下标
//		int i = 0;
//		// 用变量n来代表容器的长度
//		int n = nums.size();
//
//		// 用while循环代替
//		while (i < n) {
//			// 判断当前遍历的元素是否等于要去除的元素
//			if (nums[i] == val) {
//				// 如果不相等，设置下标num的值
//				nums[i] = nums[n - 1];
//				n--;
//			}
//			else {
//				// 如果不相等，i向右移
//				i++;
//			}
//		}
//
//
//		return n;
//	}
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