//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺���Զ�arr ������ �ǿ������� ��������ת���ж��Ƿ��ܹ���arr��ת�õ�target
//    // ˼·���ǿ�������������޷�ת��ʵ���Ǳ�ʾÿ��������λ�ÿ��Խ���λ�á�����ð������ԭ�������ԣ�ֻҪ
//    // arr�е�Ԫ�غ͸�����targetһһ��Ӧ����ôarr�϶����Է�ת�õ�target
//    // �ٸ���1 <= arr[i] <= 1000�����԰�target��arr���м��������Ȱ�arr��������ݷ����СΪ1000��������
//    // �ٱ���target��1000�����������ٱ���������飬�����һ����������0�ͷ���false��Ĭ��true��Ҳ������map���棩
//    // �ðɣ����и��õ�˼·...ʹ����򣡣�
//    // ����һ��arr�ٱ���һ��target����󷵻�������Ƿ����0
//    bool canBeEqual(vector<int>& target, vector<int>& arr) {
//        int buck[1000] = { 0 };
//        for (int& i : arr) {
//            buck[i - 1]++;
//        }
//        for (int& i : target) {
//            buck[i - 1]--;
//        }
//
//        for (auto& i : buck) {
//            if (i != 0) {
//                return false;
//            }
//        }
//
//        return true;
//    }
//
//    // �ð�...�����ܻ�����⣬���ﻹ�ǲ�����..
//    // ��֮�����������.
//    bool canBeEqualP(vector<int>& target, vector<int>& arr) {
//
//    }
//};
//
//int main() {
//	return 0;
//}