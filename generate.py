import subprocess

files = ["a.cpp", "b.cpp", "c.cpp", "d.cpp", "e.cpp", "f.cpp"]
template ="/home/andre/repos/competitiveProgramming/template.cpp"
for fileName in files:
    subprocess.run(["touch", fileName])
    subprocess.run(["cp", template, fileName])
subprocess.run(["touch", "in.txt"])
