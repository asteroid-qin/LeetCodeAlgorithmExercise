//#include<iostream>
//#include<vector>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�ҳ� �ȼ۶���ŵ���ƶԵ�����
//    // ˼·������1 <= dominoes[i][j] <= 9��ֱ��ʹ��100��С��1λ����
//    // ��ס������һ���ر�ؼ��ĵ㣺Ҫ���ҵ��Ƕ���
//    // ���ԣ���Ҫ�������е�֪ʶ��2���ȼۿ������1�ԣ�3���ȼۿ������3�ԣ�4���ȼۿ������6��
//    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
//        int count = 0;
//        int m[100] = { 0 };
//        for (auto v : dominoes) {
//            int num = v[0] > v[1] ? v[1] * 10 + v[0] : v[0] * 10 + v[1];
//            count += m[num];
//            m[num]++;
//        }
//
//        return count;
//    }
//};
//
//int main() {
//	return 0;
//}