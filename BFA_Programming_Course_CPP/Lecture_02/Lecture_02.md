# 作业1操作情况简述

## VS Code部署Git
我首先尝试的是使用VS Code实现Git的部署于上传，从安装Git开始。因为网络环境原因，我多次安装homebrew未果，最终找到了一个镜像站，完成了Homebrew的安装，然后使用Homebrew安装了Git。
安装好Git后，我首先构建了作业的文件夹层级，然后使用Git init建立本地仓库，在Github上建立名为BFA_Programming_Course_CPP的仓库，然后尝试把本地仓库推到Github上，经过多次错误排查，重新测试，均未成功，显示Timeout（期间还解决了SSH Key、编译器报错等问题）。
最终与同学交流后转为使用Xcode。

## Xcode部署Git
安装Xcode后Git使用相对简单很多，在建立项目时Xcode便可以自动部署好本地的Git，然后登录Github账号，创建仓库即可完成。
虽说如此，但是因为网络原因，Xcode一只报错Timeout（code：-1），后来回寝室后使用手机热点便奇迹般完成commit操作，听同学讲是因为系里网络环境设置问题，对于对外传出有一定管制，因此改用手机热点。除此之外也在本地尝试了几次pull操作以及其他Git基本操作。

## 总结
总之在操作Git的时候感觉很多东西按照网上的相关方法做，但总会有网络超时、权限、接口错误？等等原因失败，从VS Code的命令行工具换用为Xcode的集成Git工具后整体操作简单很多，只剩下网络问题在阻挠。个人感觉在一开始先尝试使用封装好的Git工具而不是命令行，会更有助于开始上手Git。
接下来准备抽时间回去二战VS Code的命令行工具，把之前我的Processing代码给Push到Github上。
大概就是这样。

## Github账户信息
Github用户名：Minuszh
Github账号：2549722954@qq.com
Github仓库：https://github.com/Minuszh/BFA_Programming_Course_CPP.git
