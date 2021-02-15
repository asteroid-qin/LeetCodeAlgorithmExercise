//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：同时遍历startTime和endTime，记录queryTime>=startTime[i]并且queryTime<=endTime[i]的个数
//    // 思路：目标就已经写好了...总之就是用一个count记录结果，遍历startTime和endTime
//    // 只要上述情况成立就count++,最后返回count即可
//    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
//        int count = 0;
//
//        for (int i = 0; i < startTime.size(); i++) {
//            if (startTime[i] <= queryTime && endTime[i] >= queryTime) {
//                count++;
//            }
//        }
//
//        return count;
//    }
//};
//
//int main() {
//	return 0;
//}