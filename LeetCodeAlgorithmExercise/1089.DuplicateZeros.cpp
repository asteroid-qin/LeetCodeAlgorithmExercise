//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺��д0�����ǰ�arr��ÿһ��0����дһ�飬����Ԫ�����ƣ�����arr���Ȳ���
//    // ˼·��׼��һ��vector������arr��ֻҪ����0�Ͷ������׷һ��0�������vector��size==arr.size()��ʱ��break
//    // ����������vector�����ֵ����arr���ɡ�����˼·������û���κ�����ģ��������뵽���õİ취
//    // ���ȴ�ͷ��β��������count��¼0��������Ҫ����i + count< arr.size()
//    // Ȼ��i--���ص�ԭλ������ʼ�������.�ѵ�ǰarr[i+count] = arr[i]
//    // �����ǰcount==0����ô��arr[i+1] = 0,count--
//    // whileѭ��������count!=0
//    // ע��С��iλ��Ϊ0��Խ���������ʱ��Ҫֻ����i + count- 1λ��Ϊ0��Ȼ��count--��i--����
//    void duplicateZeros(vector<int>& arr) {
//        int i = 0, count = 0;
//        while (i + count < arr.size()) {
//
//            if (arr[i++] == 0) {
//                count++;
//            }
//
//        }
//        --i;
//        if (i + count > arr.size() - 1) { // С��Խ�����
//            arr[i-- + --count] = 0;
//        }
//
//        while (count != 0) {
//            arr[i + count] = arr[i];
//
//            if (arr[i] == 0) {
//                arr[i + --count] = 0;
//            }
//
//            i--;
//        }
//
//
//    }
//};
//
//int main() {
//	return 0;
//}