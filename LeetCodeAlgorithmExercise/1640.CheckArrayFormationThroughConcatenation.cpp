//#include<iostream>
//#include<vector>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�ܷ������γ�����
//    // ˼·������arr����map��¼arr��key��arr�����Ԫ�أ�value��Ԫ�س��ֵ�����
//    // �ٱ���һ��pieces�����������vector��Ҫ��ǰ�ַ��ܲ鵽
//    // ���ҵ�ǰ���ֵ��±꣨��map��ȡ��-��һ�����ֵ��±꣨��map��ȡ��==1. ����һ�����ͷ���false
//    // Ĭ��true.
//    // ���䣡���ݣ�1 <= arr[i], pieces[i][j] <= 100��mapҲ���Ի������飡��
//    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
//        unordered_map<int, int> umap;
//        for (int i = 0; i < arr.size(); i++) {
//            umap[arr[i]] = i;
//        }
//
//        for (auto v : pieces) {
//            if (!umap.count(v[0])) { // ���⴦���һ��Ԫ��
//                return false;
//            }
//            for (int i = 1; i < v.size(); i++) {
//                if (!umap.count(v[i]) || (umap[v[i]] - umap[v[i-1]] != 1) ) {
//                    return false;
//                }
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