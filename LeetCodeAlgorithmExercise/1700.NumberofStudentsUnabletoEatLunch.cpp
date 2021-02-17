//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：返回无法吃午餐的学生数量。
//    // 思路：
//    // 遍历一遍sandwiches记录0和1的个数
//    // 然后while循环，要求j!=sandwiches.size() 并且 j指向的值是1，那么1的个数不等于0，反之
//    // 先whlie循环跳过sandwiches所有的-1，然后判断i指向的值是否等于j指向的值。
//    // 等于就判断i指向的值是等于0还是1,并--。然后把i指向的值设为-1，并i++、j++
//    // 如果不相等，就i++进入下一轮循环。
//    // 最后结果返回students.size() - j
//    int countStudents(vector<int>& students, vector<int>& sandwiches) {
//        int m = students.size(), n = sandwiches.size();
//        int i = 0, j = 0;
//
//        int arr[2] = { 0 };
//        for (int& i : students) {
//            arr[i]++;
//        }
//
//        while (j != n && arr[sandwiches[j]]) {
//            while (students[i % m] == -1) i++;
//            if (students[i % m] == sandwiches[j]) {
//                arr[students[i % m]]--;
//                students[i % m] = -1;
//                j++;
//            }
//            i++;
//        }
//
//        return n - j;
//    }
//
//    // 在上面的基础上可以进一步优化！直接把问题抽象到：只和0和1剩余数量有关
//    int countStudents(vector<int>& students, vector<int>& sandwiches) {
//        int arr[2] = { 0 };
//        for (int& i : students) {
//            arr[i]++;
//        }
//
//        for (int i = 0; i < sandwiches.size(); i++) {
//            if (!arr[sandwiches[i]]) {
//                break;
//            }
//
//            arr[sandwiches[i]]--;
//        }
//
//        return arr[0] + arr[1];
//    }
//};
//
//int main() {
//	return 0;
//}