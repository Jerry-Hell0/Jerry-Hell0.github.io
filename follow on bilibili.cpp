#include<windows.h>
#include<cstdlib>
using namespace std;
int main(){
  MessageBox(NULL,"Follow me on bilibili!","Follow me",MB_OK);//Messagebox(only ok because I do not want you to cancel)
  system("start https://space.bilibili.com/3493094708218175");//open my bilibili space
  return 0;
}
