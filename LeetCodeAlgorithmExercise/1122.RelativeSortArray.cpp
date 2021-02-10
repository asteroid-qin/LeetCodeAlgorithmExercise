//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：让arr1根据arr2进行相对排序，arr2中不存在的就放在后面升序排列
//    // 思路：调用sort api，只要修改比较的规则就可以
//    // 首先把arr2里面所有的数进行映射。根据 0 <= arr1[i], arr2[i] <= 1000，可以用数组来记录这个数的优先级
//    // 默认从1开始（0）代表不存在，记录下每一个数的优先级
//    // 然后编写比较规则：
//    // 首先判断左右两个数是否存在map中，如果都不存在那么返回左边小于右边
//    // 如果其中一个存在，如果存在是左边就false，不然true
//    // 如果两个都存在，返回他们在map中的地位的比较
//    // 还有另一种思路：完完全全使用计数排序，把arr1计数排序后，遍历arr2用里面每一个元素在arr1中查找
//    // 如果不等于0，就循环往里面添加。直到遍历完成arr2.元素自然就已经排序完毕
//    // 但是arr1中可能还会剩下一些元素，此时需要再从到到尾遍历一次arr1的桶子，把剩下的元素循环放入
//    // 代码就懒得写了...
//    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
//        int m[1001] = { 0 };
//        for (int i = 0, count = 1; i < arr2.size(); i++) {
//            if (!m[arr2[i]]) { // 不存在就按照顺序记录
//                m[arr2[i]] = count++;
//            }
//        }
//        
//        sort(arr1.begin(), arr1.end(), [=](int& i, int& j) {
//            bool flag1 = m[i];
//            bool flag2 = m[j];
//
//            if (!flag1 && !flag2) {
//                return i < j;
//            }
//            else if (!flag1) {
//                return true;
//            }
//            else if (!flag2) {
//                return false;
//            }
//            else {
//                return m[i] < m[j];
//            }
//        });
//
//        return arr1;
//
//    }
//
//    // 随手写一个快排
//    void qucikSort(vector<int>& res, int left, int right) {
//        if (left < right) {
//            int num = res[left], i = left, j = right;
//
//            while (i < j) {
//                if (res[j] >= num) {
//                    j--;
//                }
//                else if (res[i] < num) {
//                    i++;
//                }
//                else {
//                    swap(res[i], res[j--]);
//                }
//            }
//
//            qucikSort(res, left, i - 1);
//            qucikSort(res, i + 1, right);
//        }
//    }
//
//    // 再顺便写一个归并
//    void mergeSort(vector<int>& res, int left, int right) {
//        if (left < right) {
//            int mid = (left + right) / 2;
//
//            mergeSort(res, left, mid);
//            mergeSort(res, mid + 1, right);
//
//            // 开始并
//            int size = right - left + 1;
//            vector<int> temp(size);
//
//            for (int i = left, j = mid + 1, pos = 0; i <= mid || j <= right; pos++) {
//                int x = (i <= mid) ? res[i] : INT_MAX;
//                int y = (j <= right) ? res[j] : INT_MAX;
//
//                if (x > y) {
//                    temp[pos] = y;
//                    j++;
//                }
//                else {
//                    temp[pos] = x;
//                    i++;
//                }
//            }
//
//            for (int i = 0; i < size; i++) {
//                res[left++] = temp[i];
//            }
//        }
//    }
//    
//};
//
//
//int main() {
//    Solution s;
//
//    vector<int> res = {2, 3, 1, 3, 2, 4, 6, 7, 9, 2, 19};
//
//    //s.qucikSort(res, 0 , res.size() - 1);
//
//    //s.relativeSortArray(res, res);
//
//    s.mergeSort(res, 0, res.size() - 1);
//
//    for (auto& i : res) {
//        cout << i << "->";
//    }
//
//    cout << endl;
//
//	return 0;
//}