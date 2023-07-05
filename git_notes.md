git config --global user.name "XXX"
git config --global user.email XXX

#初始化
git init

复制"版本1"到创建的lao.md中
echo "版本1" > lao.md

查看当前状态
git status 

untracted files 未追踪文件

添加到暂存区
git add lao.md 

提交到本地厂库
git commit

git commit -m "版本2和版本3"

查看当前版本
git log

以下为不希望上传的文件方法
===============================
touch .gitignore
在.gitignore 文件中添加需要忽略的图片的名字和后缀就表示我们需要忽略的文件
此时再次使用git status就看不到要忽略文件的状态了
==================================

创建分支
git branch branch_name
查看分支
git branch 
切换分支
git checkout branch_name

将commit和add同步执行，可从工作区一步到本地版本库
git commit -a -m "删库跑路"
git commit -am "删库跑路"

删除分支
git branch -d branch_name
明确要删除
git branch -D branch_name

一步创建分支并切换
git checkout -b branch_name

把其他分支合并到当前分支上
git merge branch_name

链接下载github上的项目
git clone github上的链接

查看本地厂库和那些远程厂库有关系
git remote -v
