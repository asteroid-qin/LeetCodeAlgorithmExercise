//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：太长了。。总之就是对mat里面进行处理得到一个一维数组然后排序，最后只要返回前K条索引
//    // 思路：把mat里面元素封装成一个pair，然后进行排序（可以使用优先队列）.最后准备大小为k的容器，遍历放入即可
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