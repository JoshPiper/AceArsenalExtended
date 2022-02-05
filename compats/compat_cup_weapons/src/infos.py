from os import listdir
from os.path import isfile, join

base = "./infos/"
files = [f for f in listdir(base) if isfile(join(base, f)) and not f.startswith("_") and not f == "XtdGearInfos.hpp"]
content = ""

with open("infos/XtdGearInfos.hpp", "r") as file:
	content = file.read()

start = content.find("class CfgWeapons {")
if not start:
	exit(1)
start += len("class CfgWeapons {")

end = content.find("};", start)
if not end:
	exit(1)
end -= len("};")

prefix = content[:start]
suffix = content[end:]

includes = "\n\t\t".join(['#include "' + f + '"' for f in files])

with open("infos/XtdGearInfos.hpp", "w") as file:
	file.write(prefix + "\n\t\t" + includes + suffix)
