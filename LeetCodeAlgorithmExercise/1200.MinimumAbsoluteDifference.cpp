//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺������������� arr������ÿ��Ԫ�ض� ����ͬ��
//    // �����ҵ����о�����С���Բ��Ԫ�ضԣ����Ұ������˳�򷵻ء�
//    // ˼·���ȶ�arr����˫forѭ������ÿһ�ֿ��ܣ���һ��������¼��ǰ����ֵ�����Сֵ��vector�Ž��
//    // �����ǰ����ֵ֮����ڼ�¼����Сֵ��ֱ�ӹ�
//    // ���С�ڣ���vector��գ�Ȼ��ѵ�ǰ�±����
//    // ������ڣ���vector�з���
//    // ��û�и������˫forѭ�����ᳬʱ�������ǵ�����취...
//    // ���ˣ�arr���Ѿ������ˣ����Ծ���ֵ����С��ֵ�϶����ں�һ��ֵ-��ǰֵ����Ϊ���һ��ֵ�϶��Ⱥ�һ��ֵҪ�󣬲�ֵͬ��Ҳ�����
//    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
//        sort(arr.begin(), arr.end());
//        vector<vector<int>> res;
//
//        int minNum = INT_MAX;
//        for (int i = 0; i + 1 < arr.size(); i++) {
//            int num = arr[i + 1] - arr[i];
//
//            if (num < minNum) {
//                res.clear();
//                res.push_back({ arr[i], arr[i + 1] });
//                minNum = num;
//            }
//            else if (num == minNum) {
//                res.push_back({ arr[i], arr[i + 1] });
//            }
//        }
//
//        return res;
//    }
//
//};
//int main() {
//	return 0;
//}