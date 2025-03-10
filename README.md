# KO--CSP
[![CodeFactor](https://www.codefactor.io/repository/github/os-edu/ko--csp/badge)](https://www.codefactor.io/repository/github/os-edu/ko--csp)
### 0、前言

本项目也是创立[OS-EDU](https://github.com/OS-EDU) 的起点，主要用于更新有关大学生本科阶段所常见的考试题目讲解，例如 PAT、CCF 的 CSP 认证之类的以及计算机专业研究生复试上机题目之类的。通常这类题目的平均难度要低于leetcode、牛客网等出现的题目，所以对于新手朋友们比较友好。也算是可以从零开始，从而可以克服面对刷题的心理阴影吧。

---

### 1、题解列表
#### ①PAT-A题解：

[PAT-A题解列表](https://github.com/OS-EDU/KO--CSP/blob/main/PAT/%E9%A2%98%E8%A7%A3%E5%88%97%E8%A1%A8/PAT-A.%E9%A2%98%E8%A7%A3%E5%88%97%E8%A1%A8.md)

#### ②PAT-B题解：

[PAT-B题解列表](https://github.com/OS-EDU/KO--CSP/blob/main/PAT/%E9%A2%98%E8%A7%A3%E5%88%97%E8%A1%A8/PAT-B.%E9%A2%98%E8%A7%A3%E5%88%97%E8%A1%A8.md)


---

### 2、参与指南

如果您有好的想法以及意见，欢迎来提交pr，主要包括而不限于增加题目、题目解法、题目解析等。

您也可以通过微信公众号、知乎来联系我们，让我们知道您的想法以及意见。

#### ①增加题目

如果您发现有较好的题目，或者是比较在准备这类的考试时所遇见的都可以提交该题目的描述文件至[题目描述](https://github.com/OS-EDU/KO--CSP/tree/main/%E9%A2%98%E7%9B%AE%E6%8F%8F%E8%BF%B0) 这个目录，建议为markdown文件。

**格式要求如下：**

```markdown
# 题目编号（题目名称）
### 题目描述：
（题目描述的主干信息）
### 输入格式：
（题目要求的输入格式）
### 输出格式：
（题目要求的输出格式）
### 输入样例：
```
（输入样例）
### 输出样例：
```
（输出样例）
```

建议在提交pr之前，需要注意的是：

-    可以先添加一个标签为`add questions`的issue，如果确认没问题之后，可以提交与之相关的pr；

-    避免提交重复的pr，在提交之前搜索现有的 pr。
-    确定 pr的类型，并在标题或内容中标明。

#### ②题目解法

##### [a. 认领 issue](https://github.com/OS-EDU/KO--CSP/issues)

所有的题目都会建立一个对应的issue，可以选择在 [Issue 列表](https://github.com/Practice-Dream/KO--CSP/issues) 中挑选任务，然后在该 `issue` 下回复一下自己简单的解题思路，表明你将认领该 issue，如果发现issue已被认领或者closed，但是还有不同的解法，可以自己new issue，issue的标题要表明对应的题目编号。

#### [b.提交pr](https://github.com/Practice-Dream/KO--CSP/pulls)

现在题解语言主要为C和Java，如果以上编程语言不是你所擅长的，可以选择自己所喜欢的编程语言，然后在相对应的位置建立文件夹，例如C对应 csource，可以以此类推，Java所对应的文件在src下。

在提交的时候，需要添加对应的标签`solution` 。

**格式要求如下：**

以Java语言提交为例：main函数下主要用于提交测试案例，不放置题目的任何具体解法；所有对应的解法添加至改题目对应的solution类中。可以在自己的解题方法中留下自己的名字哦！

---

#### ③题目解析

题目的解析会以[博客](https://os-edu.github.io/)的形式呈现出来，所以如果之前你已经pr了题目的解法，那么你可以选择在博客中添加一下具体的解题思路以及代码分析，这样可以更有利于读者理解你的解法。

博客是基于[hugo](https://github.com/gohugoio/hugo) 搭建的，可以对markdown文件直接渲染成静态网页。如果你对此还不了解的话，建议先了解一下具体操作，再上手实践。

---

### 3、社区交流

#### ①微信公众号：OS EDU

![公众号二维码](https://github.com/OS-EDU/KO--CSP/blob/main/img/%E5%85%AC%E4%BC%97%E5%8F%B7%E4%BA%8C%E7%BB%B4%E7%A0%81.jpg?raw=true)

(扫码关注)

#### ②知乎网：OS-EDU

(搜索OS-EDU关注)

