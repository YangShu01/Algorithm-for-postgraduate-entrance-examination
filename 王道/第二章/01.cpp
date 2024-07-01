 /*
 从顺序表中删除具有最小值的元素，返回杯删除元素的值，空出的位置有最后一个元素补充，如果顺序表为空,显示错误
 信息并且退出运行  
 */
struct SqList
{
    int data[N];
    int length;
}
bool delete_min(SqList* L)
{
    if(L->length==0)
    {
        cout<<"error";
        return false;
    }
    int m = SqList->data[0];
    int index = 0;
    //找最小值
    for(int i = 1;i<SqList->length-1;i++)
    {
        if(SqList->data[i]<=m)
        {
            m = SqList->data[i];
            index = i;
        }
    }
    SqList->data[index] = SqList->data[length-1];
    SqList->length = SqList->length--;
    return true;

}
