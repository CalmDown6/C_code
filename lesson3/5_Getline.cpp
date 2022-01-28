#include<iostream>
#include<string>
using namespace std;
//使用 getline输入输出字符串。
int main()
{
  string str;
  cout << "请输入" << endl;
  getline(cin, str);
  cout << "打印"<<str;
  return 0;
}
//vscode内置终端乱码测试