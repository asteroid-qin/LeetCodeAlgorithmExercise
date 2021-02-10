//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：每执行一个queries里面的命令（会修改A里面的数），就把A里面的偶数和放入数组中，最后返回这个数组
//    // 思路：这里肯定不是执行一次命令就遍历一次A，这样太蠢了。所以得换一个思路：先求出A中的偶数和（记sum）
//    // 那么对于A里面的操作可以进行分类讨论：
//    // 如果操作的数是奇数：
//    //      操作之后变成偶数，那么需要把这个偶数放入sum中
//    //      如果还是奇数就放过
//    // 如果操作的数是偶数：
//    //      操作之后还是偶数，那么需要把这个偶数放入sum中
//    //      如果变成奇数，那么就需要把这个偶数从sum中移出
//    // 总结上面的思路，对于一个数，先判断是否为偶数，是就从sum中移出，然后对这个数进行操作，如果是偶数，就重新
//    // 把这个数放入sum中。每执行一条查询，就把sum放入数组中，最后返回这个数组
//    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
//        vector<int> res(queries.size());
//
//        int sum = 0;
//        for (auto& i : A) {
//            if (i % 2 == 0) {
//                sum += i;
//            }
//        }
//
//        for (int i = 0; i < res.size(); i++) {
//            int index = queries[i][1], val = queries[i][0];
//
//            if (A[index] % 2 == 0) {
//                sum -= A[index];
//            }
//            A[index] += val;
//
//            if (A[index] % 2 == 0) {
//                sum += A[index];
//            }
//
//            res[i] = sum;
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}