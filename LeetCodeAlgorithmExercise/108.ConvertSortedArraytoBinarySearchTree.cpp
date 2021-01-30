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
//	// ����������Ҫ��һ������õ�����ת���ɶ�������������ƶ���ƽ����
//	// ����ֱ��дһ����������������ӷ�����Ȼ�����������飬��ÿһ��Ԫ����ӽ�ȥ����
//	// ���������Ǻܱ��İ취����Ϊ�����ǣ��Ѿ�����õ����飬���Ը����Ͳ���Ҫ��д����ƽ����
//	// ˼·���漰�������������ǵ�ʹ�õݹ顣
//	// �����������n��Ԫ�أ�nΪż�������n/2����n/2+1��Ԫ��Ϊ���ĸ����
//	// ���nΪ�������ǵ�n/2+1��Ԫ��Ϊ���ĸ���㣬���Ͽ��Եó�n/2+1��Ԫ����Ϊ��������ʺ�
//	// Ȼ�����ֻ�������ڵ㣬��ô��ǰ�ڵ���������ߵ�ֵΪ���ڵ�����ҽڵ�
//	// ���Կ��԰�������˼��ݹ飬���õ�ǰΪ����㣬�ݹ�������������Ϊ���ҽڵ�
//	TreeNode* sortedArrayToBST(vector<int>& nums) {
//		return setSortedArrayToBST(nums, 0, nums.size() - 1);
//	}
//
//	// ��Ϊÿ�εݹ鶼��Ҫ�޸���߻����ұߵķ�Χ��������Ҫ�Լ�дһ���·������ڵݹ�
//	TreeNode* setSortedArrayToBST(vector<int>& nums, int left, int right) {
//		// ���õݹ�ͷ(�ݹ鵽����ֻ����������ʱ��ֹͣ)
//		if (left > right) {
//			return nullptr;
//		}
//
//		// �õ��м�ֵ
//		int mid = (left + right) / 2;
//
//		// �ɹ���Ϊ��ǰֵ������ڵ���ҽڵ�
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