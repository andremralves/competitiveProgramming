import sys
import datetime
from os.path import exists

alpha = "abcdefghijklmnopqrstuvwxyz"
template = open("/home/andre/repos/competitiveProgramming/template.cpp",
                "r").read()
topMsg = """/**
 *    author: mralves 
 *    created: {0}       
**/
""".format(datetime.datetime.now().strftime("%d-%m-%Y %H:%M:%S"))

def generateFiles(n = 5):
    if(n>26): n = 26
    for i in range(n):
        fileName = alpha[i]+".cpp"
        if(not exists("./" + fileName)):
            newFile = open(fileName, "w")
            newFile.write(topMsg+template)
            newFile.close()
    open("in.txt", "w").close()

if __name__ == "__main__":
    if(len(sys.argv) == 2):
        generateFiles(int(sys.argv[1]))
    else:
        generateFiles()

