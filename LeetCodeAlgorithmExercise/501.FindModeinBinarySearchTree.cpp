//#include<iostream>
//#include<vector>
//using namespace std;
//
//struct TreeNode {
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
//    
//};
//
//class Solution {
//public:
//    vector<int> answer;
//    int pre = 0, count = 0, maxCount = 0;
//
//    // Ŀ�꣺����һ��������������
//    // ˼·����Ϊ����һ��ƽ����������������������ӡ��ʵ���Ǵ�ӡ��С�������������
//    // ����ֻҪ���������������һ�����ڱ���ÿһ����ʱд���������������ķ������ɣ�Ҳ����update������
//    // ֻҪ��취��������������������⣬ת������һ��������������⣨ǰ�����ֻ��ͨ����Ա����pre���ʣ���
//    // �������ʵ���Ѿ�ӭ�ж����ˡ������ٷ�������һ�䣺������O��1���ռ临�Ӷ�����������..�����Ҫ���������
//    // ��һЩ�ֽ��ˡ���ʱ������ϸ��ĥ��
//    vector<int> findMode(TreeNode* root) {
//        dfs(root);
//        return answer;
//    }
//
//    void dfs(TreeNode* root) {
//        if (!root) {
//            return;
//        }
//        dfs(root->left);
//        update(root->val);
//        dfs(root->right);
//    }
//
//    // ��Ϊ��ʹ��������������Կ��Կ�������һ���������飬��������ÿһ��Ԫ��ִ��update����
//    void update(int now) {
//        // �жϵ�ǰֵ����һ��ֵ�Ƿ���ȣ�pre�ĳ�ʼֵ��0��������ȣ�countҲֻ���ɴ�0���1
//        if (now == pre) {
//            count++;
//        }
//        else {
//            // �������ΪҪ������ǰ��������count��1��ʼ��
//            count = 1;
//            // ����pre��ֵ
//            pre = now;
//        }
//    
//        // �����ǰ���ĸ�����������������ô��Ҫ�ѵ�ǰ������max��
//        // ע�⣬��ʹnow��pre���ҲӦ��ʵʱ����count��answer
//        // ����ֵ��pre����nowû���κι�ϵ
//        if (count == maxCount) {
//            answer.push_back(now);
//        }
//        else if (count > maxCount) {
//            // ��Ҫ����answer��max
//            answer = { now };
//            maxCount = count;
//        }     
//        
//    }
//};
//
//int main() {
//    vector<int> a;
//
//    a = { 1 };
//
//    for (auto i : a) {
//        cout << i << endl;
//    }
//
//    cout << "===========" << endl;
//    a = { 2 };
//
//    for (auto i : a) {
//        cout << i << endl;
//    }
//	return 0;
//}