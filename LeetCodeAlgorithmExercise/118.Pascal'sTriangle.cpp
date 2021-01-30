//#include<iostream>
//#include<vector>
//using namespace std;
//
//struct TreeNode {
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode() : val(0), left(nullptr), right(nullptr) {}
//	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
//
//};
//
//class Solution {
//public:
//	// 根据题意，其实就是根据numRows的大小，生成对应行数的杨辉三角
//	// 直接抄答案了，因为比较简单。。。（思路还是写一下吧）
//	vector<vector<int>> generate(int numRows) {
//		// 准备要返回的大容器
//		vector<vector<int>> ret(numRows);
//
//		// 有几行遍历几次
//		for (int i = 0; i < numRows; ++i) {
//			// 直接设置每行的大小
//			ret[i].resize(i + 1);
//			// 把当前左右两边各设置为1
//			ret[i][0] = ret[i][i] = 1;
//
//			// for循环往里面放值
//			for (int j = 1; j < i; ++j) {
//				// j永远应该从1开始（0的位置固定设置为1），并且不应该超过i（第i个也是固定为1）
//				// 那当前的值就是上面的两个值相加的和
//				ret[i][j] = ret[i - 1][j] + ret[i - 1][j - 1];
//			}
//		}
//		return ret;
//	}
//};
//
//// 懒得测试了
//int main() {
//	return 0;
//}