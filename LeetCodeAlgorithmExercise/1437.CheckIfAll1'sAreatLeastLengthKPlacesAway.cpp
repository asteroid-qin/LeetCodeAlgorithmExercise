//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�ж�nums���Ƿ�ÿһ��1�����k
//    // ˼·��ֱ�ӵ���api����¼�ϴε�λ�ã�������һ���ң��Ҳ���ֱ��break��Ĭ��true��
//    // �ҵ��ˣ����õ�ǰ�±�-��һ�ε��±�-1�����С��Kֱ�ӷ���false��ÿ�β��Ҷ�����һ�εĻ����Ͻ���
//    bool kLengthApart(vector<int>& nums, int k) {
//        for (int i = 0, pre = -1; i < nums.size(); i++) {
//            if (nums[i] == 1) {
//                if (pre != -1 && i - pre - 1 < k) {
//                    return false;
//                }
//
//                pre = i;
//            }
//        }
//
//        return true;
//    }
//};
//
//int main() {
//	return 0;
//}