//#include<iostream>
//#include<queue>
//using namespace std;
//
//class RecentCounter {
//public:
//    queue<int> q;
//    // Ŀ�꣺����һ����������[t-3000, t]�����ĸ�����t��Խ��Խ��
//    // ˼·��ʹ�ö��������������������ͷԪ��С��t-3000����ô�͵���ͷԪ��ֱ��ͷԪ�ز�С��t-3000����󷵻�
//    // ���е�size����
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