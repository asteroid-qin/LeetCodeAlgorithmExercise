//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺ͬʱ����startTime��endTime����¼queryTime>=startTime[i]����queryTime<=endTime[i]�ĸ���
//    // ˼·��Ŀ����Ѿ�д����...��֮������һ��count��¼���������startTime��endTime
//    // ֻҪ�������������count++,��󷵻�count����
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