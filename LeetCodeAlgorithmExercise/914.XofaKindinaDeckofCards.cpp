//#include<iostream>
//#include<vector>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺...���Ľ��͵ĺܺã�����ֱ��˵�����ʣ���ÿһ���ظ���������һ�飬��ÿ������Ĺ����ӣ������Ӵ��ڵ���2��
//    // ����true������false
//    // ˼·���������⣬����ʹ��map����ÿ���ظ���������һ�飬Ȼ��������map������������������������
//    // ��󷵻��������>=2����
//    bool hasGroupsSizeX(vector<int>& deck) {
//        unordered_map<int, int> m;
//        for (auto& i : deck) {
//            m[i]++;
//        }
//
//        // ���㹫����
//        int div = -1;
//        for (auto it = m.begin(); it != m.end(); it++) {
//            if (div != -1) {
//                div = gcd(div, it->second);
//            }
//            else {
//                div = it->second;
//            }
//        }
//
//        return div >= 2;
//    }
//
//    int gcd(int x, int y) {
//        return (y == 0) ? x : gcd(y, x % y);
//    }
//};
//
//int main() {
//	return 0;
//}