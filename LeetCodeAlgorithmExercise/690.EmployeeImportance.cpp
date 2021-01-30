//#include<iostream>
//#include<vector>
//#include<unordered_map>
//using namespace std;
//
//class Employee {
//public:
//    int id;
//    int importance;
//    vector<int> subordinates;
//};
//
//class Solution {
//public:
//    // 目标：计算一个一个员工及其下属的重要性
//    // 思路：把数组转成map，id作为key，根据id查询员工，把查到员工的重要性放入res中。
//    int getImportance(vector<Employee*> employees, int id) {
//        unordered_map<int, Employee*> myMap;
//        for (Employee* emp : employees) {
//            myMap[emp->id] = emp;
//        }
//        int res = 0;
//        getImportance(myMap, id, res);
//
//        return res;
//    }
//    // 使用dfs轻松解决问题
//    void getImportance(unordered_map<int, Employee*>& myMap, int id, int& res) {
//        if (myMap.count(id)) {
//            res += myMap[id]->importance;
//
//            for (int cId : myMap[id]->subordinates) {
//                getImportance(myMap, cId, res);
//            }
//        }
//    }
//};
//
//int main() {
//	return 0;
//}