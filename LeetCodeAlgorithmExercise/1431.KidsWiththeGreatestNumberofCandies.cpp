//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�ж�candies��ÿһ��Ԫ��+extraCandies�Ƿ���ڵ���candies�е����ֵ�����������ʽ����
//    // ˼·������һ��candies�õ����ֵ���ٱ���candies�Ƚϸ�ֵ����
//    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
//        vector<bool> res(candies.size());
//
//        int maxNum = 0;
//        for (int& i : candies) {
//            maxNum = max(maxNum, i);
//        }
//
//        for (int i = 0; i < candies.size(); i++) {
//            res[i] = (candies[i] + extraCandies >= maxNum);
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}