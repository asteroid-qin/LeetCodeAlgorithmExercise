//#include<iostream>
//#include<vector>
//using namespace std;
//
//class OrderedStream {
//public:
//    vector<string> v;
//    int index = 0;
//    OrderedStream(int n) {
//        v.resize(n);
//    }
//
//    // 感觉代码写的有点粗糙...
//    vector<string> insert(int idKey, string value) {
//        idKey--;
//        v[idKey] = value;
//        if (index == idKey) {
//            vector<string> res;
//
//            for (int i = index; i < v.size(); i++) {
//                if (v[i] == "") {
//                    index = i;
//                    break;
//                }
//                res.push_back(v[i]);
//            }
//
//            return res;
//        }
//
//        return {};
//    }
//};
//
///**
// * Your OrderedStream object will be instantiated and called as such:
// * OrderedStream* obj = new OrderedStream(n);
// * vector<string> param_1 = obj->insert(idKey,value);
// */
//
//int main() {
//	return 0;
//}