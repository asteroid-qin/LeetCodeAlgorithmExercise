//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//
//class Solution {
//public:
//
//    // 目标：每次选两个最大的石头，如果相等就全部从stones中剔除，如果不相等，就往stones中放入一个第1大-第2大的石头
//    // 要求返回最后剩下的一个石头的大小，如果不存在放回0
//    // 思路：1 <= stones[i] <= 1000，根据这个然后发现每次操作后最大值都会变小。
//    // 所以很自然而然的就应该想到使用一个数组保存每种石头的数量，倒序遍历每一个石头。跳过所有0的石头
//    // 用两个变量找到第一大和第二大的石头，并判断它们是否相等不相等就往里面放。
//    // 找第一大石头的时候，如果下标越界了就代表找不到石头了直接返回0
//    // 找第二大石头时，如果下标越界了就代表找不到第二大的石头（也就是只剩下唯一个石头了），直接返回第一个石头的大小
//    // 完成！！可以认为空间复杂度为O(1),这道题的另一种做法虽然写起来舒服，但是空间复杂度是O(n)
//    // 另一种思路（比赛肯定是这么写比较好！）使用大顶堆来帮助我们自动排序（其实只要是能够自动排序的数据结构都行，
//    // 不过在这道题里，大顶堆很显然比其他数据结果都适合。
//    // 做法：创建一个大顶堆，把元素都添加进去，默认访问的队列头就是最大元素。
//    // 写一个while循环只要size>1就执行下面的命令：
//    // 1、拿到top元素，pop后再拿到top元素（这样就拿到了两个最大的石头）
//    // 2、比较两个top拿到元素值的大小，如果不相等就往队列中插入一个第1次top-第2次top的值
//    // 最后写返回值，如果此时堆的size==0就返回0，否则返回堆头元素。（写起来确实舒服）
//    int lastStoneWeight(vector<int>& stones) {
//        int arr[1000] = { 0 };
//        for (auto& i : stones) {
//            arr[i - 1]++;
//        }
//
//        for (int i = 999, j; 1;) {
//            while (i >= 0 && arr[i] == 0) {
//                i--;
//            }
//            if (i < 0) return 0; // 找不到就直接返回0
//            arr[i]--;   // 找到了就把当前数量-1
//            j = i;
//
//            while (j >= 0 && arr[j] == 0) { // 开始找第二大石头
//                j--;
//            }
//
//            if (j < 0) return arr[i]; // 找不到第二大就代表只剩下第一大
//            arr[j]--;
//
//            if (i != j) {
//                arr[i - j - 1]++; // 放入一个大小相减的石头
//            }
//
//        }
//
//        return 0;
//    }
//
//    // 使用大顶堆
//    int lastStoneWeight(vector<int>& stones) {
//        priority_queue<int> pq; // 默认大顶堆
//        for (int& i : stones) {
//            pq.emplace(i);
//        }
//
//        while (pq.size() > 1) {
//            int first = pq.top();
//            pq.pop();
//            int second = pq.top();
//            pq.pop();
//
//            if (first != second) {
//                pq.emplace(first - second);
//            }
//        }
//        
//        return pq.size() == 0 ? 0 : pq.top();
//    }
//};
//
//int main() {
//	return 0;
//}