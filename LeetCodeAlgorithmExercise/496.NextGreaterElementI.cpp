//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<stack>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺��û���ظ�ֵ��nums1��nums2�У��ҵ�nums1����nums2��ֵ����ı�����ֵ
//    // ˼·������һ��nums1����һ��Ԫ�������Ҽ���..������Ȼ�Ⲣ����ȡ��ʱ�临�Ӷȹ��ߣ�
//    // һ���˼ڤ�룬����ʹ�ùٷ���ĵ���ջ��֮ǰ��û���ù�..
//    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
//        // ��Ҫ����num2Ϊ�յ��������
//        unordered_map<int, int> myMap;
//        stack<int> myStack;
//
//        // �������num2������õ�����ֱ��ӳ������map
//        for (auto i : nums2) {
//            // �����ǰ������ջ��Ԫ�ش�Ͱ�����ӳ���ϵ��¼��map��
//            while(!myStack.empty() && i > myStack.top()) {
//                myMap[myStack.top()] = i;
//                // Ȼ�󵯳�ջ��Ԫ��
//                myStack.pop();
//            }
//            // ��ÿһ��Ԫ�ض����뵽ջ��
//            myStack.push(i);
//        }
//
//        // ջ�п�����ʣ���Ԫ�أ���Ҫѭ�����뵽map��
//        while(!myStack.empty()) {
//            myMap[myStack.top()] = -1;
//            myStack.pop();
//        }
//        
//        vector<int> res(nums1.size());
//        // �������num1���Ѳ�ѯ�������vector�м���
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