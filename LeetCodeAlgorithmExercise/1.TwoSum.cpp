//#include<map>
//#include<vector>
//#include<iostream>
//using namespace std;
//
//// ���ڴ�ӡvector�ķ���
//void printVector(vector<int>& v);
//
//class Solution {
//public:
//    // �����������֮�͵��㷨
//    vector<int> twoSum(vector<int>& nums, int target) {
//        // ׼��һ��map������ű�������
//        map<int, int> myMap;
//
//        // ׼��һ��vector����������������±�
//        vector<int> v;
//
//        // ����vector(ͨ���±����)
//        for (int i = 0; i < nums.size(); i++) {
//           
//            // �ж��Ƿ����
//            map<int,int>::iterator mit = myMap.find(target - nums.at(i));
//
//            if (mit != myMap.end()) {
//                // �����ҵ��ˣ������ǵ��±����vector��
//                v.push_back(mit->second);
//                v.push_back(i);
//
//                // ֱ���˳�ѭ��
//                break;
//            }
//            else {
//                // ����û���ҵ�,�ѵ�ǰ��ֵ������ת���ɼ�ֵ�Է���map��
//                myMap.insert(pair<int, int>(nums.at(i), i));
//            }
//        }
//
//        // Ĭ��return v
//        return v;
//    }
//
//    
//    int reverse(int x) {
//
//    }
//};
//
//// main����������
//int main() {
//    // ����������֮��
//    Solution s;
//
//    vector<int> v;
//    v.push_back(2);
//    v.push_back(7);
//    v.push_back(11);
//    v.push_back(15);
//
//    vector<int> result = s.twoSum(v, 22);
//
//    // �������v
//    printVector(result);
//
//    return 0;
//}
//
//void printVector(vector<int> &v) {
//    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//    {
//        cout << *it << " ";
//    }
//    cout << endl;
//}
//
