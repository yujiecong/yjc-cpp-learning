# 教程导向

一个教程的 导向 必须满足下面列出的所有需求。
> 注意：这仅限于我自己确定的流程

**要求:**
  - 比较熟练的掌握c++基本概念

## 目录

_注意: 这只是本人的建议，并没有为任何人规定流程。_

- [项目1 C++与面向对象程序设计概述](#项目1)
  - [项目2 C++基础](#项目2)
  - [项目3 类与对象](#项目3)
  - [项目4 继承](#项目4)
  - [项目5 多态性](#项目5)
  - [项目6 运算符重载](#项目6)
  - [项目7 模板与STL](#项目7)
  - [项目8 异常](#项目8)
  - [项目9 文件与流](#项目9)
  - [项目10 待定](#项目10)
  - [项目11 待定](#项目11)
  - [项目12 待定](#项目12)
  - [额外部分](#额外部分)
  - [维护者](#维护者)
  - [致谢](#致谢)
  - [如何贡献](#如何贡献)
  - [许可证](#许可证)


### 项目1
- 更新时间 2020年9月28日13:44:02  

**第1章 C++与面向对象程序设计概述**
本章主要讲述：
- 面向过程与面向对象程序设计
- 面向对象程序技术的基本特征
- C++的发展演化
- C++程序的结构及数据输入与输出
- C++实例编程

[点我进入](./contents/chapter1-cpp-outline)
### 项目2
本章主要介绍 C++对C语言的某些改变和扩展，是非面向对象方面的特征，包括：
-  C++的数据类型
- 类型转换
-   const常量、引用、指针及函数参数
- 函数原型、默认参数、函数重载
- 内联函数
- 名字空间及其应用
- 变量作用域和生存期
-  数据输入/输出

[点我进入](https://github.com/yujiecong/yjc-cpp-from-s-to-b/tree/master/contents/%E7%AC%AC%E4%BA%8C%E7%AB%A0%20C%2B%2B%E5%9F%BA%E7%A1%80)

### 项目3
本章主要介绍类与对象。类（class）是面向对象程序设计的核心，是实现数据封装和信息隐藏的工具，是继承和多态的基础。  
因此，本章是全书的基础与重点，也是学习面向对象程序设计技术的基础。学习者一定要掌握类的概念，类成员访问控制，构造函数与析构函数等重要概念。

[点我进入](https://github.com/yujiecong/yjc-cpp-from-s-to-b/tree/master/contents/%E7%AC%AC%E4%B8%89%E7%AB%A0%20%E7%B1%BB%E4%B8%8E%E5%AF%B9%E8%B1%A1)
### 项目4
继承使软件复用变得简单、易行，可以通过继承复用已有的程序资源，缩短软件开发的周期。  
本章主要介绍继承的方式，要注意在继承方式下派生类与基类对象之间的关系，以及派生类构造函数如何提供对基类的构造。

[点我进入](https://github.com/yujiecong/yjc-cpp-from-s-to-b/tree/master/contents/%E7%AC%AC%E5%9B%9B%E7%AB%A0%20%E7%BB%A7%E6%89%BF)

### 项目5
多态性是面向对象程序设计语言的又一重要特征，它是指不同对象接收到同一消息时会产生不同的行为。继承所处理的是类与类之间的层次关系问题，而多态则是处理类的层次结构之间，以及同一个类内部同名函数的关系问题。  
简单地说，多态就是在同一个类或继承体系结构的基类与派生类中，用同名函数来实现各种不同的功能。

[点我进入](https://github.com/yujiecong/yjc-cpp-from-s-to-b/tree/master/contents/%E7%AC%AC%E4%BA%94%E7%AB%A0%20%E5%A4%9A%E6%80%81%E6%80%A7)
### 项目6
运算符重载是C++的一项强大功能。通过重载，可以扩展C++运算符的功能，使它们能够操作用户自定义的数据类型，增加程序代码的直观性和可读性 。  
本章主要介绍 类成员运算符重载与友元运算符重载,  二元运算符与一元运算符重载,  运算符++、--、[]、（）重载,  this指针与运算符重载及 流运算符<<和>>的重载。

[点我进入](https://github.com/yujiecong/yjc-cpp-from-s-to-b/tree/master/contents/%E7%AC%AC%E5%85%AD%E7%AB%A0%20%E8%BF%90%E7%AE%97%E7%AC%A6%E9%87%8D%E8%BD%BD)
### 项目7
模板（template）是C++实现代码重用机制的重要工具，是泛型技术（即与数据类型无关的通用程序设计技术）的基础。  
模板是C++中相对较新的语言机制，它实现了与具体数据类型无关的通用算法程序设计，能够提高软件开发的效率，是程序代码复用的强有力工具。   
本章主要介绍了函数模板和类模板两类，以及STL库（Standard Template Library）中的几个常用模板数据类型。 

[点我进入](https://github.com/yujiecong/yjc-cpp-from-s-to-b/tree/master/contents/%E7%AC%AC%E4%B8%83%E7%AB%A0%20%E6%A8%A1%E6%9D%BF%E4%B8%8ESTL)

### 项目8

C++的异常处理机制能将异常检测与异常处理分离开来，当异常发生时能自动调用异常处理程序进行错误处理。

异常处理机制增加了程序的清晰性和可读性，使程序员能够编写出清晰、健壮、容错能力更强的程序，适用于大型软件开发。

本章主要介绍C++异常处理的语言机制，包括异常的结构、捕捉和处理，以及异常类。

[点我进入](https://github.com/yujiecong/yjc-cpp-from-s-to-b/tree/master/contents/%E7%AC%AC%E5%85%AB%E7%AB%A0%20%E5%BC%82%E5%B8%B8)

### 项目9
C++具有一个功能强大的I/O类继承体系结构用于处理数据的输入/输出问题，该体系结构不仅提供了对系统内置数据类型的输入/输出操作，而且允许程序员通过重载扩展其功能以实现自定义数据类型的输入和输出操作。

本章主要介绍C++流的基本结构，数据的输入输出及其格式化问题，同时还介绍了C++文件的编程技术。

[点我进入](https://github.com/yujiecong/yjc-cpp-from-s-to-b/tree/master/contents/%E7%AC%AC%E4%B9%9D%E7%AB%A0%20%E6%96%87%E4%BB%B6%E4%B8%8E%E6%B5%81)

### 项目10

### 项目11



### 项目12


### 额外部分
暂无

### 维护者
[@yujiecong](https://github.com/yujiecong)。

### 致谢
[@yujiecong](https://github.com/yujiecong)  
<a href="graphs/contributors"><img src="https://avatars2.githubusercontent.com/u/44287052?s=60&amp;v=4" /></a>


### 如何贡献

非常欢迎你的加入！[提一个 Issue](https://github.com/yujiecong/cc-c51-learning/issues/new) 或者提交一个 Pull Request。


本 Readme 遵循 [Contributor Covenant](http://contributor-covenant.org/version/1/3/0/) 行为规范。

### 许可证
[MIT License](https://github.com/yujiecong/yjc-c--from-s-to-b/blob/master/LICENSE)




