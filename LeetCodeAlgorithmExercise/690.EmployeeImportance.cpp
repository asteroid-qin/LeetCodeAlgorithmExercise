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
//    // Ŀ�꣺����һ��һ��Ա��������������Ҫ��
//    // ˼·��������ת��map��id��Ϊkey������id��ѯԱ�����Ѳ鵽Ա������Ҫ�Է���res�С�
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
//    // ʹ��dfs���ɽ������
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