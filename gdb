1. print vector
  # 打印多个元素
  print *(your_vector._M_impl._M_start)@your_vector_size

  #打印单个元素[n指下标]
  print *(u._M_impl._M_start+n)

2. print bt
  # if coredump exist:
    gdb bin coredump
  # or
    gdb coredump
    file bin
    set solib-search-path /lib/path
  # after symbols reading done, bt works
