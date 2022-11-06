import subprocess

files = ["a.cpp", "b.cpp", "c.cpp", "d.cpp", "e.cpp", "f.cpp"]
template ="/home/andre/repos/competitiveProgramming/template.cpp"
for fileName in files:
    subprocess.run(["touch", fileName])
    subprocess.run(["cp", template, fileName])
    #bashCommand = "touch " + fileName + " && cp " + template + " " + fileName
    #process = subprocess.Popen(bashCommand.split(), stdout=subprocess.PIPE)
    #output, error = process.communicate()
