from os import listdir
from os.path import isfile, join
from pathlib import Path

bases = [
	'infos',
	'models'
]
outputFileTemplate = "XtdGear{0}.hpp"
rootDirectory = Path(__file__).parent.parent.resolve()

for base in bases:
	print(f"Updating {base}")
	baseDirectory = rootDirectory / base
	outputFileName = outputFileTemplate.format(base.title())
	outputFilePath = baseDirectory / outputFileName
	files = [f.name for f in baseDirectory.iterdir() if f.is_file() and not f.name.startswith("_") and f.name != outputFileName]

	content = ""
	with outputFilePath.open("r+") as outputFile:
		content = outputFile.read()
		outputFile.seek(0)

		start = content.find("class CfgWeapons {")
		if not start:
			print("\tUnable to find CfgWeapons start")
			continue
		start += len("class CfgWeapons {")

		end = content.find("};", start)
		if not end:
			print("\tUnable to find CfgWeapons end")
			continue
		end -= len("};")

		outputFile.write(content[:start] + "\n\t\t" + "\n\t\t".join([f'#include "{f}"' for f in files]) + content[end:])
		print("\tSuccessfully updated")
