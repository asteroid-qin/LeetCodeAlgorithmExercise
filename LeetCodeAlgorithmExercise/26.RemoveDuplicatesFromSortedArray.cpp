//#include<vector>
//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 这道题太简单了，在leetcode编译器上一次写过了，所以没什么分析的内容
//    // 最主要的就是要用一个变量j记录不同的元素，然后让它从1开始往后排
//    int removeDuplicates(vector<int>& nums) {
//        if (nums.size() == 0) {
//            return 0;
//        }
//
//        int j = 0;
//        // 遍历这个容器
//        for (int i = 0; i + 1 < nums.size(); i++) {
//            if (nums[i] != nums[i + 1]) {
//                nums[++j] = nums[i + 1];
//            }
//        }
//
//        return j + 1;
//    }
//};
//
//int main() {
//    // 准备一个vector用于测试
//    vector<int> v;
//    v.push_back(1);
//    v.push_back(1);
//    v.push_back(1);
//    v.push_back(2);
//    v.push_back(3);
//
//    Solution s;
//    int lenght = s.removeDuplicates(v);
//
//    // 打印这个修改长度后的v
//    for (int i = 0; i < lenght; i++) {
//        cout << "当前下标：" << i << "当前元素：" << v.at(i) << endl;
//    }
//
//    return 0;
//}