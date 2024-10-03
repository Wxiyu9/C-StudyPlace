#define _CRT_SECURE_NO_WARNINGS 1

//��ת����
void rotate(int* nums, int numsSize, int k) {
    //��ת0-(numsSize-k)��Ԫ��
    k %= numsSize;
    for (int i = 0; i < (numsSize - k) / 2; i++)
    {
        int temp = *(nums + numsSize - k - 1 - i);
        *(nums + numsSize - k - 1 - i) = *(nums + i);
        *(nums + i) = temp;
    }
    //��ת(numsSize - k)�Ժ��Ԫ��
    for (int i = 0; i < k / 2; i++)
    {
        int temp = *(nums + numsSize - 1 - i);
        *(nums + numsSize - 1 - i) = *(nums + i + numsSize - k);
        *(nums + i + numsSize - k) = temp;
    }
    //��תȫ��Ԫ��
    for (int i = 0; i < numsSize / 2; i++)
    {
        //7 6 5 4 3 2 1
        //5 6 7 1 2 3 4
        int temp = *(nums + numsSize - 1 - i);
        *(nums + numsSize - 1 - i) = *(nums + i);
        *(nums + i) = temp;
    }
}


//��ʧ������
int missingNumber(int* nums, int numsSize) {
    int* result = (int*)calloc(sizeof(int) * (numsSize + 1), sizeof(int));
    int* cur = nums;
    for (int i = 0; i < numsSize; i++)
    {
        *(result + *cur) = *cur;
        cur++;
    }
    for (int i = 1; i < numsSize + 1; i++)
    {
        if (*(result + i) == 0)
            return i;
    }
    return 0;
}
