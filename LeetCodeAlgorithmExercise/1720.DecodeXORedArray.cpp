//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺ͨ��encoded[i] = arr[i] XOR arr[i + 1]���������arr������
//    // ˼·���ҹ��ɿ��Է���arr[i + 1] = encoded[i] XOR arr[i] ,��������
//    vector<int> decode(vector<int>& encoded, int first) {
//        vector<int> res(encoded.size() + 1);
//        res[0] = first;
//
//        for (int i = 1; i < res.size(); i++) {
//            res[i] = (encoded[i - 1] ^ res[i - 1]);
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}