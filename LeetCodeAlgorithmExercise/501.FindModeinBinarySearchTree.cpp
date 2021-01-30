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
//    // 目标：计算一个二叉树的众数
//    // 思路：因为这是一个平衡二叉树，它的中序遍历打印其实就是打印从小到大排序的数组
//    // 所以只要像是求数组的众数一样，在遍历每一个数时写上真正的求众数的方法即可，也就是update方法。
//    // 只要想办法把求二叉树的众数的问题，转换成求一个特殊数组的问题（前面的数只能通过成员变量pre访问），
//    // 这道题其实就已经迎刃而解了。不过官方又提了一句：可以在O（1）空间复杂度完成这个问题..这就需要对中序遍历
//    // 做一些手脚了。有时间再仔细琢磨。
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
//    // 因为是使用中序遍历，所以可以看做遍历一个排序数组，并对其中每一个元素执行update方法
//    void update(int now) {
//        // 判断当前值和上一个值是否相等，pre的初始值是0，就算相等，count也只会变成从0变成1
//        if (now == pre) {
//            count++;
//        }
//        else {
//            // 不相等因为要保留当前数，所以count从1开始算
//            count = 1;
//            // 更新pre的值
//            pre = now;
//        }
//    
//        // 如果当前数的个数等于最大个数，那么需要把当前数放入max中
//        // 注意，即使now和pre相等也应该实时更新count和answer
//        // 更新值和pre或者now没有任何关系
//        if (count == maxCount) {
//            answer.push_back(now);
//        }
//        else if (count > maxCount) {
//            // 需要更新answer和max
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