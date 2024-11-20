stuart_setup -c Platforms/Raspberry/Pi5Pkg/PlatformBuild.py TOOL_CHAIN_TAG=CLANGDWARF
stuart_update -c Platforms/Raspberry/Pi5Pkg/PlatformBuild.py TOOL_CHAIN_TAG=CLANGDWARF

stuart_build -c Platforms/Raspberry/Pi5Pkg/PlatformBuild.py TOOL_CHAIN_TAG=CLANGDWARF
