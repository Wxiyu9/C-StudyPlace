#define _CRT_SECURE_NO_WARNINGS 1

//轮转数组
void rotate(int* nums, int numsSize, int k) {
    //逆转0-(numsSize-k)的元素
    k %= numsSize;
    for (int i = 0; i < (numsSize - k) / 2; i++)
    {
        int temp = *(nums + numsSize - k - 1 - i);
        *(nums + numsSize - k - 1 - i) = *(nums + i);
        *(nums + i) = temp;
    }
    //逆转(numsSize - k)以后的元素
    for (int i = 0; i < k / 2; i++)
    {
        int temp = *(nums + numsSize - 1 - i);
        *(nums + numsSize - 1 - i) = *(nums + i + numsSize - k);
        *(nums + i + numsSize - k) = temp;
    }
    //逆转全部元素
    for (int i = 0; i < numsSize / 2; i++)
    {
        //7 6 5 4 3 2 1
        //5 6 7 1 2 3 4
        int temp = *(nums + numsSize - 1 - i);
        *(nums + numsSize - 1 - i) = *(nums + i);
        *(nums + i) = temp;
    }
}