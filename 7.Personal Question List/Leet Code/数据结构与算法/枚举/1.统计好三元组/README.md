# 1534.统计好三元数组

## 解题时间

2025-12-7

## 题目描述

给你一个整数数组`arr`，以及`a`、`b`、`c`三个整数。请你统计其中好三元组的数量。

如果三元组`(arr[i], arr[j], arr[k])`满足下列全部条件，则认为它是一个好三元组：

- `0 <= i < j < k < arr.length`
- `|arr[i] - arr[j]| <= a`
- `|arr[j] - arr[k]| <= b`
- `|arr[i] - arr[k]| <= c`

其中`|x|`表示`x`的绝对值。

返回好三元组的数量。

## 示例

### 示例 1

```
输入：arr = [3,0,1,1,9,7], a = 7, b = 2, c = 3
输出：4
```

## 原题链接

[1534.统计好三元数组](https://leetcode.cn/problems/count-good-triplets/)

## 题解

```cpp
class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int n = arr.size(),count = 0;
        for (int i = 0;i < n; i++) {
            for (int j = i+1; j < n; j++) {
                for (int k = j+1; k < n; k++) {
                    if (abs(arr[i] - arr[j]) <= a && abs(arr[j] - arr[k]) <= b && abs(arr[i] - arr[k]) <= c) {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};
```
