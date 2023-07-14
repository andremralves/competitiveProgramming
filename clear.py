import os

rootdir = '/home/andre/repos/competitiveProgramming'

letters = "cdefghijklmnopqrstuvwxyz"
template_size = os.path.getsize(rootdir + "/template.cpp") + 73
files_to_search = set(map(lambda letter: letter + ".cpp", letters))
files_to_remove = []


for subdir, dirs, files in os.walk(rootdir):
    if '.git' in subdir:
        continue 

    for file in files:
        if file not in files_to_search:
            continue

        file_path = os.path.join(subdir, file)
        file_size = os.path.getsize(file_path)

        if file_size == template_size:
            files_to_remove.append(file_path)

if len(files_to_remove) == 0:
    print("No unused files to be removed.")
else:
    for file in files_to_remove:
        file_size = os.path.getsize(file)
        print(f'{file} {file_size}K')
    print(f"Found {len(files_to_remove)} possible unused files. Remove them? (y/n):", end = " ")

    confirm = input()
    if(confirm.lower() == "y"):
        for file in files_to_remove:
            os.remove(file)
