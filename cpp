1. unordered_map
  1) iterate
    for(auto& rec: unordered_map){
      thread_pool.enqueue(func, rec); //crash
      thread_pool.enqueue(func, &rec); //crash
      thread_pool.enqueue(func, std::ref(rec)); //crash
      thread_pool.enqueue(func, std::ref(rec.first), std::ref(rec.second)); //crash
    }
  2) for(std::pair<const key_type, value_type>& rec: unordered_map)
    before key_type, "const" shall added, or may compile fail.

2. #define使用可变参数列表
  #define DEBUG0(fmt, args...) printf(fmt, ##args)
  #define MODULE_PRINT(fmt, args...) DEBUG0(fmt, ##args)
  
  // 定义可变参数的函数
  float average(int n_values, ...) {
      va_list var_arg;
      int count;
      float sum = 0.0;

      va_start(var_arg, n_values); // va_start宏函数对var_arg对象初始化
      for(count = 0; count < n_values; count += 1)
      {
          sum += va_arg(var_arg, int); // va_arg宏指定下一个实参的类型与值
      }
      va_end(var_arg); // va_end无效化var_arg对象 

      return sum / n_values;
  }
  
  3. cmake
  cmake -H. -Bbuild # setHomeDir, set build dir, if not exist, will create
  cmake --build build # compile

