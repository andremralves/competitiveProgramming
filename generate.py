import subprocess
from os.path import exists

files = ["a.cpp", "b.cpp", "c.cpp", "d.cpp", "e.cpp", "f.cpp"]
template ="/home/andre/repos/competitiveProgramming/template.cpp"
for fileName in files:
    if(not exists("./" + fileName)):
        subprocess.run(["touch", fileName])
        subprocess.run(["cp", template, fileName])
subprocess.run(["touch", "in.txt"])
