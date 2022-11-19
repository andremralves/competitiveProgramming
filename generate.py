import datetime
from os.path import exists

files = ["a.cpp", "b.cpp", "c.cpp", "d.cpp", "e.cpp", "f.cpp"]
template = open("/home/andre/repos/competitiveProgramming/template.cpp",
                "r").read()
topMsg = """/**
 *    author: mralves 
 *    created: {0}       
**/
""".format(datetime.datetime.now().strftime("%d-%m-%Y %H:%M:%S"))

for fileName in files:
    if(not exists("./" + fileName)):
        newFile = open(fileName, "w")
        newFile.write(topMsg+template)
        newFile.close()
open("in.txt", "w").close()
