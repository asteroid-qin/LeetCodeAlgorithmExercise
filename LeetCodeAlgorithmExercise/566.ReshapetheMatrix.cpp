//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺���ܾ���
//    // ˼·�����ж�r*c�ǲ��ǵ���nums.size()*nums[0].size()������Ǿʹ���������ܣ���Ȼ���ر���
//    // ����ʱ
//    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
//        // ���ж������r��c�Ƿ�������ܾ���
//        if (nums.size() * nums[0].size() != r * c) {
//            return nums;
//        }
//        // ����һ���µľ���
//        vector<vector<int>> res(r,vector<int>(c));
//
//        // ����nums���������ֵ����c��
//        int rIndex = 0, cIndex = 0;
//        for (int i = 0; i < nums.size(); i++) {
//            for (int j = 0; j < nums[0].size(); j++) {
//                res[rIndex][cIndex++] = nums[i][j];
//                // ��������˾���Ҫ��++
//                if (cIndex % c == 0) {
//                    rIndex++;
//                    // �����´�0��ʼ
//                    cIndex = 0;
//                }
//            }
//        }
//
//        return res;
//    }
//};
//
//int main() {
//    vector<vector<int>> num = {{ 1,2 }, { 3,4 }};
//
//    Solution s;
//    vector<vector<int>> res =  s.matrixReshape(num,1,4);
//
//    for (auto v : res) {
//        for (auto i : v) {
//            cout << i << " ";
//        }
//        cout << endl;
//    }
//
//
//	return 0;
//}