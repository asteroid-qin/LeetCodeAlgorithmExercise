//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺heights����ÿһ���˵ĸ߶ȣ���Ҫ���������ƶ����ٸ���ʹ��heights�е�Ԫ�ز��ݼ�
//    // ˼·�����Զ�heights��������Ȼ���¼��ƥ��Ĵ����������������Ҫ�Ľ��
//    // �����ǣ���ʲô���򣿸���1 <= heights[i] <= 100�������ԣ�����ʹ�ü�����������
//    // ���Ȱ�heights�����е�Ԫ�ط������100��С�������У�value����ֵ
//    // Ȼ���ٱ���heights����whileѭ��map����õ���һ��Ԫ�أ���Ϊ���map��heights�õ����������ﲻ�õ���Խ�����⣩
//    // �Դ˽��бȽϣ�����һ��������¼�ȽϽ������󷵻������������
//    int heightChecker(vector<int>& heights) {
//        int m[101] = { 0 }; // ������101��������..
//        for (int& i : heights) {
//            m[i]++;
//        }
//
//        int count = 0, i = 1;
//        for (int& hei : heights) {
//            while (m[i] == 0) {
//                i++;
//            }
//
//            count += (i != hei);
//            m[i]--;
//        }
//
//        return count;
//    }
//};
//
//int main() {
//	return 0;
//}