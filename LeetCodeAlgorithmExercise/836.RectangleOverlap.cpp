//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�ж����������Ƿ��ص�
//    // ˼·������ȫȫ�����Լ�����ѧ���ס��������������˼ά�������resc2��rec1���ϡ��¡����Ҳ࣬��ô�Ͳ�����
//    // ���Խ��ȡ�����ɣ�ע�����ֵ�ע���ص����߶ε��������
//    // ����һ�־��Ǽ������������������ص�����ô���ǵ�x��y��߾������ཻ�ĵط��������ת���ˣ��ж������߶��Ƿ�
//    // �н�����Ҳ���ǣ�min(rec1[2], rec2[2]) > max(rec1[0], rec2[0]) ʱ���������߶��н���
//    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
//        return  (min(rec1[2], rec2[2]) > max(rec1[0], rec2[0])) &&
//                (min(rec1[3], rec2[3]) > max(rec1[1], rec2[1]));
//    }
//};
//
//int main() {
//	return 0;
//}