//#include<iostream>
//#include<unordered_set>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�ж�·���Ƿ��ཻ
//    // ˼·�����ó�����Ϊx=0,y=0,��set��¼���еĵ�
//    // ����path���Ȱ��յ�ǰ�ַ���������Ȼ���ѯ��ǰx��y�Ƿ���ڣ�����ֱ��false��Ĭ��true
//    // �ؼ����⻹�����ڣ�1 <= path.length <= 10^4�����������hashӳ��
//    bool isPathCrossing(string path) {
//        unordered_set<int> us;
//        int x = 0, y = 0;
//        us.insert(0);
//
//        for (char& c : path) {
//            if (c == 'N') {
//                x++;
//            }
//            else if (c == 'S') {
//                x--;
//            }
//            else if (c == 'W') {
//                y--;
//            }
//            else {
//                y++;
//            }
//
//            if (us.count( getHash(x,y) )) {
//                return true;
//            }
//
//            us.insert(getHash(x, y));
//        }
//
//        return true;
//    }
//
//    // ���Ը�дһ��hash����
//    int getHash(int x, int y) {
//        return x * 20001 + y;
//    }
//
//};
//int main() {
//	return 0;
//}