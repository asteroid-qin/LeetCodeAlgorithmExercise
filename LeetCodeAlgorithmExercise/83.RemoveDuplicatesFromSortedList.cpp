//#include<iostream>
//using namespace std;
//
///*
//* 要使用的node节点
//*/
//struct ListNode {
//    int val;
//    ListNode* next;
//    ListNode() : val(0), next(nullptr) {}
//    ListNode(int x) : val(x), next(nullptr) {}
//    ListNode(int x, ListNode* next) : val(x), next(next) {}
//};
//// 准备一个方法用于打印这个list
//void printListNode(ListNode& node) {
//    // 初始化一个指针
//    ListNode* now = &node;
//
//    // 直接while打印
//    cout << "开始打印：" << endl;
//    while (now) {
//        cout << now->val << " ";
//
//        // now 后移
//        now = now->next;
//    }
//    cout << endl;
//}
//
//
//class Solution {
//public:
//    // 题目的要求是，输入一个排序后的节点list，去掉重复的部分
//    // 之前有一道题和这个差不多，不过这里换成类似链表的node形成的list
//    // 很明显遍历链表需要使用到while和记录当前节点的指针，因为node形成的list是排序后的，
//    // 所以只要判断一个node的下一个node是否与当前node相等就足够了
//    // 如果相等那就把当前node指向的下一个node换成当前node指向的下一个node指向的下一个node即可，不相等就不用处理
//    // 一定要判断是否为空的情况
//    // 把上面的想法总结出思路：准备两个指针，一个用于记录当前遍历的节点，一个遍历新创建的节点，还有一个新节点
//    // ，把head的值赋给新节点，然后准备遍历，只有当前面节点的值不等于后面节点的值时，才需要记录后面节点的值
//    // ，注意处理null的情况，遍历完毕后，新的节点list形成，因为result是开在堆中，所以直接返回
//    ListNode* deleteDuplicates(ListNode* head) {
//        // 排除掉直接输入null的情况（这里LeetCode不支持使用nullptr）
//        if ( nullptr == head) {
//            return nullptr;
//        }
//
//        // 准备一个指针用于记录当前遍历的节点
//        ListNode* now = head;   
//        // 准备一个新造节点(这里因为最后要返回result的地址，所以需要使用new)
//         // 本来打算使用static，但是LeetCode好像不支持 
//        ListNode* result = new ListNode(head->val);
//        // 初始化一个指针用于记录新创建的节点
//        ListNode* r_now = result;
//
//        // while循环遍历这个节点(条件为now不指向空)
//        while (now) {
//            // 拿到当前节点的下一个节点的值（需要进行null判断）
//            if (now->next == nullptr) {
//                // 如果指向为null那就代表遍历结束，可以退出循环
//                break;
//            }
//            // 能指向到下面的代码代表next不为null，可以获取next的所有属性
//            // 这里需要判断当前节点的val是否不等于下面节点的val
//            if (now->val != now->next->val) {
//                // 如果不相等，那么就需要把next节点的值付给指向result节点的r_now指针的next上
//                r_now->next = new ListNode(now->next->val);
//
//                // 然后让指向result节点的r_now指针后移
//                r_now = r_now->next;
//            }
//            // 把now指针后移
//            now = now->next;
//        }
//
//        return result;
//    }
//};
//
//// 开始测试
//int main() {
//    // 创造一个排序节点
//    ListNode n1(1);
//    ListNode n2(1);
//    ListNode n3(2);
//    ListNode n4(3);
//    ListNode n5(3);
//    ListNode n6(3);
//    ListNode n7(4);
//
//    n1.next = &n2;
//    n2.next = &n3;
//    n3.next = &n4;
//    n4.next = &n5;
//    n5.next = &n6;
//    n6.next = &n7;
//
//    Solution s;
//
//    printListNode(n1);
//    
//    ListNode* r = s.deleteDuplicates(&n1);
//
//    cout << endl << "去重完毕,得到结果：" << endl;
//
//    printListNode(*r);
//	return 0;
//}