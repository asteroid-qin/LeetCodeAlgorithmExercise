//#include<iostream>
//#include<vector>
//#include<set>
//#include<unordered_map>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：给你一个整数数组 arr ，请你将数组中的每个元素替换为它们排序后的序号
//    // 思路：先对arr进行去重排序（利用set），然后再使用map对每一个元素进行标号
//    // 最后遍历arr直接去map中去编号
//    // 还有一种思路：把arr去重排序后得到一个vector，然后遍历arr，对vector里面每一个元素进行二分查找
//    vector<int> arrayRankTransform(vector<int>& arr) {
//        set<int> st(arr.begin(), arr.end()); // set自动去重+排序
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
//        set<int> st(arr.begin(), arr.end());// set自动去重+排序
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