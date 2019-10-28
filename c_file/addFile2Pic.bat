===================================================================================
 
::说明:拖拽图片文件和压缩包文件拖到此文件上松开瞬间制作伪装图片
 
::作者:sysdzw
 
::制作时间:20:46 2014-08-13
 
::版本 时间 修改者 原因
 
::V0.1 21:33 2014-08-29 weallgood0018 添加背景颜色及直接双击打开提示
 
::V0.2 01:03 2014-08-30 sysdzw 修正代码中只处理rar后缀的bug及改进直接双击的处理
 
@title拖拽图片文件和压缩包文件到此文件上松开瞬间制作伪装图片
 
@echooff
 
color 3f
 
if x%1==x (goto NoDragFile)
 
if x%2==x (
 
:NoDragFile
 
echo 请将图片文件和压缩包文件拖到此文件上松开即可瞬间制作伪装图片!
 
echo 双击程序直接打开无效!
 
pause & exit
 
)
 
set img_ok="jpg gif png bmp"
 
set rar_ok="rar zip"
 
set img=%1
 
set rar=%2
 
::如果在img的路径里发现了压缩文件的后缀则img_try为true
 
set img_try=false
 
echo %rar_ok%|find /i "%img:~-3%">nul&&set img_try=true
 
if %img_try%==true (
 
set img=%2
 
set rar=%1
 
)
 
set img_="%img:~-3%"
 
set rar_="%rar:~-3%"
 
set img2=%img:~0,-4%_out.jpg
 
set img_test=false
 
set rar_test=false
 
echo %img_ok%|find /i %img_%>nul&&set img_test=true
 
echo %rar_ok%|find /i %rar_%>nul&&set rar_test=true
 
if %img_test%==true (if %rar_test%==true (
 
copy /b /y "%img%" + "%rar%" %img2%
 
echo "处理完成!"
 
)else (goto err1)
 
)else (
 
:err1
 
echo %img%
 
echo %rar%
 
echo 文件格式不正确!图片仅支持%img_ok% 压缩包仅支持%rar_ok%
 
)
 
pause
 
===================================================================================