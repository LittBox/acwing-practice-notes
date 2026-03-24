# 备赛蓝桥杯
**Day 1** 

今天学习了stl里的vector容器

链接视频：https://www.bilibili.com/video/BV1D24y1e7nz/?spm_id_from=333.337.search-card.all.click 

进度：【目前到p12 vector容器迭代器失效】

今日知识点：
1. 容器
   1. 概念
   2. 分类
      1. 序列式：每个元素有固定位置，位置根据插入的时机来确定
      2. 关联式：每个元素没有固定位置，按照某种规则排序
2. vector容器的构造
   1. 使用模板类 <相当于Java中的泛型类>
   2. vector<基本数据类型/对象> vecname;
3. vector容器的赋值
   1. `assign`
   2.  `=`
   3.  `swap`
4. vector容器的大小
   1. `size()`
   2. `resize()`
5. vector容器的访问
   1.  使用符号 `[]` : 程序不会报错，但是会出现不正常返回值，正常都是`return 0`
   2.  使用`at` ：程序会报错，会抛出明确异常
6. vector元素的插入
   1. 尾插
      1. push_back()
      2. pop_back()
   2. 中间插入
      1. insert()
7. 迭代器基本概念
   1. 作用：统一容器的访问方式
   2. vector<int> ::iterator itname;
   3. 实际相当于一个指针
8. vector容器迭代器失效
   1. 出现在插入和删除操作中，主要就是iterator迭代器指针没有更新