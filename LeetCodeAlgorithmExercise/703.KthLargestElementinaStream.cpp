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
//    // Ŀ�꣺��vector���У���װ����add����ʱ���᷵�ص�k���Ԫ�أ�
//    // ˼·��ʹ��multiset�������ȶ��С���ΪֻҪ���ص�k��Ԫ�أ����Ե�������Ԫ�ص���������kʱ�����԰���Сֵȥ����
//    // һ������󣬷�����СֵҲ���ǵ�k��Ԫ�ء�
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
//    // ʹ�����ȶ���
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