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
        #print(fileName)
        newFile = open(fileName, "w")
        #print(template.read())
        newFile.write(topMsg+template)
        print(newFile)
        newFile.close()
open("in.txt", "w").close()
