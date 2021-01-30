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
//};
//
//class Solution {
//public:
//	// 根据题意需要把一个排序好的数组转换成二叉搜索树，简称二叉平衡树
//	// 可以直接写一个二叉排序树的添加方法，然后遍历这个数组，把每一个元素添加进去即可
//	// 很明显这是很笨的办法，因为题意是：已经排序好的数组，所以根本就不需要手写二叉平衡树
//	// 思路：涉及到树，基本都是得使用递归。
//	// 加入该容器有n个元素，n为偶数，则第n/2或者n/2+1个元素为树的根结点
//	// 如果n为奇数，那第n/2+1个元素为树的根结点，综上可以得出n/2+1个元素设为根结点最适合
//	// 然后如果只有三个节点，那么当前节点的左右两边的值为根节点的左右节点
//	// 所以可以按照这种思想递归，设置当前为根结点，递归设置左右两边为左右节点
//	TreeNode* sortedArrayToBST(vector<int>& nums) {
//		return setSortedArrayToBST(nums, 0, nums.size() - 1);
//	}
//
//	// 因为每次递归都需要修改左边或者右边的范围，所以需要自己写一个新方法用于递归
//	TreeNode* setSortedArrayToBST(vector<int>& nums, int left, int right) {
//		// 设置递归头(递归到左右只有两个数的时候停止)
//		if (left > right) {
//			return nullptr;
//		}
//
//		// 拿到中间值
//		int mid = (left + right) / 2;
//
//		// 成功！为当前值设置左节点和右节点
//		TreeNode* root = new TreeNode(nums[mid]);
//		root->left = setSortedArrayToBST(nums, left, mid - 1);
//		root->right = setSortedArrayToBST(nums, mid + 1, right);
//
//		return root;
//	}
//}
//;
//
//int main() {
//
//	return 0;
//}