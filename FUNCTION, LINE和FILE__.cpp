//cout<<__FUNCTION__<<endl;输出所在的function名称
//cout<<__LINE__<<endl;输出该行行号
//cout<<__FILE__<<endl;输出所在文件名


int myfunction()
{
    cout<<__FUNCTION__<<endl;
    cout<<__LINE__<<endl;
}
int main()
{
   myfunction();
    cout<<__FILE__<<endl;
}

