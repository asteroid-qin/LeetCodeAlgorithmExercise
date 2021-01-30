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
//	// �������⣬��ʵ���Ǹ���numRows�Ĵ�С�����ɶ�Ӧ�������������
//	// ֱ�ӳ����ˣ���Ϊ�Ƚϼ򵥡�������˼·����дһ�°ɣ�
//	vector<vector<int>> generate(int numRows) {
//		// ׼��Ҫ���صĴ�����
//		vector<vector<int>> ret(numRows);
//
//		// �м��б�������
//		for (int i = 0; i < numRows; ++i) {
//			// ֱ������ÿ�еĴ�С
//			ret[i].resize(i + 1);
//			// �ѵ�ǰ�������߸�����Ϊ1
//			ret[i][0] = ret[i][i] = 1;
//
//			// forѭ���������ֵ
//			for (int j = 1; j < i; ++j) {
//				// j��ԶӦ�ô�1��ʼ��0��λ�ù̶�����Ϊ1�������Ҳ�Ӧ�ó���i����i��Ҳ�ǹ̶�Ϊ1��
//				// �ǵ�ǰ��ֵ�������������ֵ��ӵĺ�
//				ret[i][j] = ret[i - 1][j] + ret[i - 1][j - 1];
//			}
//		}
//		return ret;
//	}
//};
//
//// ���ò�����
//int main() {
//	return 0;
//}