//#include<iostream>
//#include<string>
//using namespace std;
//
//class Solution {
//public:
//    // ��һ��2��32�η���Χ�ڵ����ַ�ת
//    int reverse(int x) {
//        // ��һ������ȥ��¼����ֵ���
//        int rev = 0;
//
//        // ��һ������ȥ��¼��ǰ����10ȡ�������
//        int rem = 0;
//
//        // while ѭ��
//        while (x != 0) {
//            // ��¼���һλ��ֵ
//            rem = x % 10;
//            // x�Գ�10��������һλ
//            x /= 10;
//            
//            // �м��жϵ�ǰ�����Ƿ����(��������ΪINT_MAX�����һλ��7)
//            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && rem > 7)) {
//                return 0;
//            }
//            // �м��ж������Ƿ��С(��������ΪINT_MIN�����һλ��8)
//            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && rem < -8)) {
//                return 0;
//            }
//
//            // �������
//            rev = rev * 10 + rem;
//        }
//
//
//        return rev;
//    }
//
//    // ��һ��2��32�η���Χ�ڵ����ַ�ת ���ҸĽ�(��ͷ��ֱ���ж�,���ʧ�ܣ����̫����)
//    int reverse2(int x) {
//        if (x > 0) {
//            int x_size = to_string(x).size();
//            if (x_size > 10 || (x_size == 10 && x % 10 > 7)) {
//                return 0;
//            }
//        }
//        else if(x < 0){
//            int x_size = to_string(x).size();
//            cout << "��ת�ɸ�����" << to_string(x) << endl;
//            cout << "��ת�ɸ�����ĳ��ȣ�" << to_string(x).size() << endl;
//
//            // ��������Ϊ����ת�ַ������һ����ǰ����-��
//            if (x_size > 11 || (x_size == 11 && (x % 10 < -8) )) {
//                return 0;
//                cout << "����if�ж�" << endl;
//            }
//        }
//        else {
//            return x;
//        }
//        
//        cout << "��ʱ��x��" << x << endl;
//        cout << "��ʱ��x��10ȡ�ࣺ" << x%10 << endl;
//
//        // ��һ������ȥ��¼����ֵ���
//        int rev = 0;
//
//        // ��һ������ȥ��¼��ǰ����10ȡ�������
//        int rem = 0;
//
//        // while ѭ��
//        while (x != 0) {
//            // ��¼���һλ��ֵ
//            rem = x % 10;
//            // x�Գ�10��������һλ
//            x /= 10;
//
//            // �������
//            rev = rev * 10 + rem;
//        }
//
//        return rev;
//    }
//};
//
//int main() {
//    // ���Է�תint��Χ������
//    Solution s;
//    int num = s.reverse2(-2147483412);
//
//    cout << "��ת�ɹ������Ϊ��" << num << endl;
//    cout << "��ӡ��Сֵ��" << INT_MIN<< endl;
//    return 0;
//}