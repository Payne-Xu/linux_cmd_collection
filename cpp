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
