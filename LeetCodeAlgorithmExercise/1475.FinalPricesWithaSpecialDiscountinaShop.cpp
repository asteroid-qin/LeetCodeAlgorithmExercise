//#include<iostream>
//#include<vector>
//#include<stack>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺����prices�����¸�ֵ�����������ǰ�±�i���е�һ����ֵ��С���ڵ�ǰֵ�ģ���ô��Ҫ��ȥ���ֵ
//    // ˼·�������ԣ�ֻҪ��ÿ���������һ��С�ڵ�ǰ������...�Ժ��������뵽�ľ��ǵ���ջ����
//    // ��Ҫע����ǣ�prices�л�����ظ���Ԫ�أ����Ե������������
//    vector<int> finalPrices(vector<int>& prices) {
//        stack<int> st;
//
//        for (int i = 0 ; i < prices.size(); i++) {
//            while (!st.empty() && prices[st.top()] >= prices[i]) {
//                prices[st.top()] -= prices[i];
//                st.pop();
//            }
//
//            st.push(i);
//        }
//
//        return prices;
//    }
//};
//
//int main() {
//    Solution s;
//    vector<int> test = {10, 1, 1, 6 };
//
//    s.finalPrices(test);
//
//
//	return 0;
//}