//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺��� �ܺȵ�����ƿ�ơ�
//    // ˼·��������numBottles���ƺ�numBottles����ƿ�ӣ���ƿ�Ӳ����ˣ�ֻ�ܻ���0ƿ�ƾ�ֱ���˳�
//    // ����ֵ���� numBottles + �ݹ飨��ƿ�ӻ��ľƣ���ƿ��-������Ҫ��ƿ����+��ƿ�ӻ��ľƣ� �̶�exc��
//    // ��ȥ...�ٷ���Ȼû�õݹ�д...(�о��Լ����븴����..)
//    int numWaterBottles(int numBottles, int numExchange) {
//        return dfs(numBottles, numBottles, numExchange);
//    }
//
//    int dfs(int num, int blank, int& exc) {
//        if (num == 0) { // ��ƿ�Ӳ����ˣ�ֻ�ܻ���0ƿ�ƾ�ֱ���˳�
//            return 0;
//        }
//        int excNum = blank / exc;
//
//        return num + dfs(excNum, blank - excNum * exc + excNum, exc);
//    }
//
//};
//
//int main() {
//	return 0;
//}