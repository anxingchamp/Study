使用git config --global user.name Mihu（Mihu是用户名）来配置用户名。
使用git config --global user.email mihu@123.com（mihu@123.com是你的邮箱）配置邮箱。注意：这个电子邮箱并不需要真实的存在，尤其是在非正式用途下可以随便写。


两种初始化方式
从Github上（或别的支持Git的代码托管网站）下载源码，可以用git clone命令。比如你想把项目放在桌面，就可以右击选择第二项Bash，输入命令git clone <代码git链接>，git链接可以在这里获取。
如果是自己新建的项目，可以先新建一个文件夹，随便起个名字，用来做项目的总文件夹。接下来要告诉Git：帮我们管理这个文件夹下的代码。打开这个文件夹，在空白处右击打开Git控制台，然后输入git init，init是初始化的意思，这样git立刻就创建了一个名为.git的隐藏文件夹，用来管理即将新建的源代码。


两步提交(commit) //把文件加入暂存区(index/stage)
git add . //让Git把当前文件夹内的所有文件和（非空）文件夹设定为准备提交的状态
get add main.py //让Git把当前文件夹内的main.py文件设定为准备提交的状态
git commit -m "备注" //这个备注一定要写

git log //看提交历史记录，包括作者、时间、备注等


git checkout HEAD main.py（注意HEAD大写，其中main.py是代码文件） //从最后（新）一次的提交里把main.py复制到工作区（会覆盖）
