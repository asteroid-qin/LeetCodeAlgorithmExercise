//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：返回乘客从出发点 start 到目的地 destination 之间的最短距离。
//    // 思路：尝试顺时针从start到destination,记录值
//    // 尝试逆时针从start到destination,记录值
//    // 返回两者间的最小值
//    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
//        int n = distance.size();
//        int n1 = 0, n2 = 0;
//        for (int i = start; i % n != destination; i++) {
//            n1 += distance[i % n];
//        }
//        for (int i = destination; i % n != start; i++) {
//            n2 += distance[i % n];
//        }
//
//        return min(n1, n2);
//    }
//};
//
//int main() {
//	return 0;
//}