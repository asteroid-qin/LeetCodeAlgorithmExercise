//#include<iostream>
//#include<vector>
//#include<set>
//#include<queue>
//using namespace std;
//
//class KthLargest {
//public:
//    multiset<int> ms;
//    int K;
//    // 目标：对vector进行，封装。做add操作时，会返回第k大的元素；
//    // 思路：使用multiset或者优先队列。因为只要返回第k大元素，所以当容器中元素的数量大于k时，可以把最小值去掉。
//    // 一阵操作后，返回最小值也就是第k大元素。
//    /*KthLargest(int k, vector<int>& nums) {
//        for (int i : nums) {
//            ms.insert(i);
//            if (ms.size() > k) ms.erase(ms.begin());
//        }
//
//        K = k;
//    }
//
//    int add(int val) {
//        ms.insert(val);
//        if (ms.size() > K) ms.erase(ms.begin());
//        return *ms.begin();
//    }*/
//
//    priority_queue<int, vector<int>, greater<int>> pq;
//
//    // 使用优先队列
//    KthLargest(int k, vector<int>& nums) {
//        for (int n : nums) {
//            pq.push(n);
//            if (pq.size() > k) pq.pop();
//        }
//
//        K = k;
//    }
//
//    int add(int val) {
//        pq.push(val);
//        if (pq.size() > K) pq.pop();
//        return pq.top();
//    }
//
//};
//
//
//int main() {
//	return 0;
//}