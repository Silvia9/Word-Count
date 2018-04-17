# Word-Count
实现对纯英文文本中的字符、单词和句子数统计
#项目简介及其相关的用法
**  该项目用于进行简单的wordcount功能，实现对一个纯英文文本文件中单词、字符、及句子个数的统计。**
  例如：输入  wc.exe -c f1.txt
  运行结果将显示文件f1.txt中各个字符的数量；
        输入  wc.exe -w f1.txt
  运行结果将显示文件f1.txt中各个单词的数量；
        输入  wc.exe -s f1.txt
  运行结果将显示文件f1.txt中各个句子的数量；

#文件列表及其相关说明
1.WordCount.cpp  
  该文件包含项目所有程序
2.WordCount.exe
  用来执行程序的相关命令
3.f1.txt
  纯英文文本文件
4.README.md
  对项目进行简介及相关运行结果等

#例程运行及其相关结果
  wc.exe -c f1.txt
  letter=404
  wc.exe -w f1.txt
  word=83
  wc.exe -s f1.txt
  sentence=6

