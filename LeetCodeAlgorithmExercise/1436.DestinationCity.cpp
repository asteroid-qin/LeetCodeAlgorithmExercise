//#include<iostream>
//#include<vector>
//#include<unordered_set>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�ҳ���paths[i][0]δ���֣�����ֻ��paths[i][0]���ֵ��ַ���
//    // ˼·������һ��path��paths[i][0]����set�У��ڱ���һ��path�������ǰ�ַ�����set���Ҳ�����ֱ�ӷ���
//    string destCity(vector<vector<string>>& paths) {
//        unordered_set<string> set;
//
//        for (auto& v : paths) {
//            set.insert(v[0]);
//        }
//        for (auto& v : paths) {
//            if (!set.count(v[1])) {
//                return v[1];
//            }
//        }
//
//        return "";
//    }
//
//};
//int main() {
//	return 0;
//}