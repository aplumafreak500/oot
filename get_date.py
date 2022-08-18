#!/usr/bin/python3
import time, subprocess
tstamp = time.strftime("%a %b %d %H:%m:%S %Z %Y")
print("const char gBuildTeam[] = \"arcticluma113@zelda64.dev\";")
print(f"const char gBuildDate[] = \"{tstamp}\";")
print("const char gBuildMakeOption[] = \"\";")
git_cmd = "git describe --always --abbrev=8".split(" ")
hash = subprocess.check_output(git_cmd).decode("ascii").strip()
print(f"const char gGitRev[] = \"{hash}\";")
