//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<stack>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：在没有重复值的nums1和nums2中，找到nums1中在nums2中值后面的比其大的值
//    // 思路：遍历一遍nums1，把一个元素往后找即可..（很显然这并不可取，时间复杂度过高）
//    // 一阵苦思冥想，最终使用官方解的单调栈。之前都没有用过..
//    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
//        // 需要处理num2为空的特殊情况
//        unordered_map<int, int> myMap;
//        stack<int> myStack;
//
//        // 遍历这个num2，运算得到可以直接映射结果的map
//        for (auto i : nums2) {
//            // 如果当前的数比栈顶元素大就把这种映射关系记录到map中
//            while(!myStack.empty() && i > myStack.top()) {
//                myMap[myStack.top()] = i;
//                // 然后弹出栈顶元素
//                myStack.pop();
//            }
//            // 将每一个元素都加入到栈中
//            myStack.push(i);
//        }
//
//        // 栈中可能有剩余的元素，需要循环加入到map中
//        while(!myStack.empty()) {
//            myMap[myStack.top()] = -1;
//            myStack.pop();
//        }
//        
//        vector<int> res(nums1.size());
//        // 遍历这个num1，把查询结果放入vector中即可
//        for (int i = 0; i < nums1.size(); i++) {
//            res[i] = myMap[nums1[i]];
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}