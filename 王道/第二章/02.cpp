/*顺序表元素逆置算法,要求空间复杂度为O(1)*/
struct SqList
{
    int data[N];
    int length;
}

void reverse(SqList* L)
{
    for(int i = 0;i<L->length/2;i++)
    {
        swap(L->data[i],L->data[L->length-1-i]);
    }
}
