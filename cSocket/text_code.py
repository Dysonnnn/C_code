import sys
u = unicodestring = u"Hello world"
print(u)
## 将Unicode转化为普通Python字符串："encode"
u1 = utf8string = unicodestring.encode("utf-8")
print (u1)
a = "你好啊"
print (type(a))
print (a[0].encode('utf-8').decode('unicode_escape'))
#print(u2)
print (type(u1))
#print (type(u2))

a1 = bytes.decode(encoding="utf-8")
print(a1)