//#include<iostream>
//#include<queue>
//using namespace std;
//
//class RecentCounter {
//public:
//    queue<int> q;
//    // 目标：输入一个数，返回[t-3000, t]内数的个数（t会越来越大）
//    // 思路：使用队列来存放输入的数，如果头元素小于t-3000，那么就弹出头元素直到头元素不小于t-3000，最后返回
//    // 队列的size即可
//    RecentCounter() {
//
//    }
//
//    int ping(int t) {
//        q.emplace(t);
//
//        while (q.front() < t - 3000) {
//            q.pop();
//        }
//
//        return q.size();
//    }
//};
//
//
//int main() {
//	return 0;
//}