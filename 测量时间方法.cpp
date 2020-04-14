#include <iostream>
#include <ctime>

int main()
{
  clock_t start = clock();
  
  //...code you want to measure time
  
  clock_t end = clock();
  
  double elapsed_time = (double (end) - double(start)) / (CLOCKS_PER_SEC);
  std::cout << "Elapsed time is:" << elapsed_time << " (s)" << std::endl;
}

//CLOCKS_PER_SEC是标准c的time.h头函数中宏定义的一个常数，表示一秒钟内CPU运行的时钟周期数，
//用于将clock()函数的结果转化为以秒为单位的量，但是这个量的具体值是与操作系统相关的。
