# CPP_Tutorial
My take on [this](https://www.learncpp.com/) CPP Tutorial

---

## Modified CodeRunner
To compile files with compiler Warnings use the CodeRunner extension and change the following command.  
Also create a directory named _build_ at the same level as the files to be compiled

    "cpp": "cd $dir && g++ $fileName -o build\\$fileNameWithoutExt -Wall -pedantic -std=c++2a -fconcepts && build\\$fileNameWithoutExt",


