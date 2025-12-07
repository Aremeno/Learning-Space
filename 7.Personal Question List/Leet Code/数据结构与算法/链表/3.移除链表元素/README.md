# 203.移除链表元素

## 解题时间

2025-12-6

## 题目描述

给你一个链表的头节点 `head` 和一个整数 `val` ，请你删除链表中所有满足 `Node.val == val` 的节点，并返回 **新的头节点** 。

## 运行示例

![img](https://assets.leetcode.com/uploads/2021/03/06/removelinked-list.jpg)

## 题解

### 双指针解法

#### 解题思路

使用双指针`current`和`pre`来遍历链表：

1. `current`指针用于遍历链表的每个节点。
2. `pre`指向`current`的前一个节点，用于在删除节点时重新链接链表。
3. 当遇到需要删除的节点时，通过修改指针指向来跳过该节点。

#### 关键点

1. 处理头节点可能被删除的情况
2. 需要释放被删除节点的内存（C++特性）
3. 保持链表在删除节点后的连续性

#### C++代码实现

```c++
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *current = head,*pre = nullptr;
        while(current != nullptr) {
            if (current->val == val) {
                ListNode *temp = current;

                if (pre == nullptr) {
                    head = current->next;
                }
                else {
                    pre->next = current->next;
                }
                current = current->next;

                delete temp;
            }
            else {
                pre = current;
                current = current->next;
            }
        }
        return head;
    }
};
```

链接：https://leetcode.cn/problems/remove-linked-list-elements/
