//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺����һ���ַ�����UD��LRƥ�䣬�ж��Ƿ��ж����U��D��L��R������ܹ���ȫƥ��ͷ���true
//    // ˼·�������������ֱ��¼���º����ҳ��ֵĴ����������++�����Ҿ�--����󷵻��Ƿ�������������0����
//    bool judgeCircle(string moves) {
//        // �ټ���һ���Ż����������������ô�϶����ж���ַ�
//        if(moves.size() % 2 == 1) {
//            return false;
//        }
//
//        int upp = 0, lef = 0;
//        for (int i = 0; i < moves.size(); i++) {
//            if (moves[i] == 'U') {
//                upp++;
//            }
//            else if (moves[i] == 'D') {
//                upp--;
//            }
//            else if (moves[i] == 'L') {
//                lef++;
//            }
//            else if (moves[i] == 'R') {
//                lef--;
//            }
//        }
//
//
//        return (upp == 0) && (lef == 0);
//    }
//};
//
//int main() {
//	return 0;
//}