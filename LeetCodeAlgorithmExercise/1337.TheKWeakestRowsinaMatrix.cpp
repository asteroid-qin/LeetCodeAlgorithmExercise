//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺̫���ˡ�����֮���Ƕ�mat������д���õ�һ��һά����Ȼ���������ֻҪ����ǰK������
//    // ˼·����mat����Ԫ�ط�װ��һ��pair��Ȼ��������򣨿���ʹ�����ȶ��У�.���׼����СΪk���������������뼴��
//    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
//        vector<pair<int,int>> bucket;
//        for (int i = 0; i < mat.size(); i++) {
//            int count = 0;
//            for (auto& n : mat[i]) {
//                if (n != 1) {
//                    break;
//                }
//                count++;
//            }
//
//            bucket.emplace_back(count, i);
//            
//        }
//        sort(bucket.begin(), bucket.end());
//
//        vector<int> res(k);
//        for (int i = 0; i < k; i++) {
//            res[i] = bucket[i].second;
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}