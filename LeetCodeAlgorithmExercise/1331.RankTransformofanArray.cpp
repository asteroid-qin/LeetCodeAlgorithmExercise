//#include<iostream>
//#include<vector>
//#include<set>
//#include<unordered_map>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺����һ���������� arr �����㽫�����е�ÿ��Ԫ���滻Ϊ�������������
//    // ˼·���ȶ�arr����ȥ����������set����Ȼ����ʹ��map��ÿһ��Ԫ�ؽ��б��
//    // ������arrֱ��ȥmap��ȥ���
//    // ����һ��˼·����arrȥ�������õ�һ��vector��Ȼ�����arr����vector����ÿһ��Ԫ�ؽ��ж��ֲ���
//    vector<int> arrayRankTransform(vector<int>& arr) {
//        set<int> st(arr.begin(), arr.end()); // set�Զ�ȥ��+����
//        unordered_map<int, int> m;
//        for (auto i : st) {
//            m[i] = m.size() + 1;
//        }
//
//        for (auto& i : arr) {
//            i = m[i];
//        }
//
//        return arr;
//    }
//
//    vector<int> arrayRankTransform(vector<int>& arr) {
//        set<int> st(arr.begin(), arr.end());// set�Զ�ȥ��+����
//        vector<int> bucket(st.size());
//        int index = 0;
//        for (auto& i : st) {
//            bucket[index++] = i;
//        }
//
//        for (auto& i : arr) {
//            int l = 0, r = bucket.size() - 1, mid;
//
//            while (l <= r) {
//                mid = (l + r) / 2;
//                if (i > bucket[mid]) {
//                    l = mid + 1;
//                }
//                else if (i < bucket[mid]) {
//                    r = mid - 1;
//                }
//                else {
//                    cout << mid << endl;
//                    i = mid + 1;
//                    break;
//                }
//            }
//        }
//
//        return arr;
//    }
//};
//
//int main() {
//	return 0;
//}