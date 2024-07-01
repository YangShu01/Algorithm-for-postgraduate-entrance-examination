/* 对长度为n的顺序表,删除所有值为x的元素 */
typedef SqList
{
    int data[N];
    int length;
};

void delete_value_x(SqList* L,int x)
{
    int cnt = 0;
    for(int i = 0;i<L->length;i++)
    {
        if(L->data[i]==x)
        {
            cnt++;
        }

        L->data[i-k] = L->data[i];
    }

    L->length = L->length-k;
}
