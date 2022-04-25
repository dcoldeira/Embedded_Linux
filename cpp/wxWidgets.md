# wxWidgets

### Installation 

Create a folder maybe in home called wx


```Bash
cd ~/wx/wxWidgets-3.1.3     
mkdir gtk-build             # the name is not really relevant
cd gtk-build
../configure                # builds unicode, shared lib
make -j3                    # use 3 cores. Set to the number of cores your have. 'make' uses 1 core
sudo make install           # some platforms require to use 'su' instead of 'sudo'
sudo ldconfig
```

to compile

```Bash
g++ wx.cpp  -o wx `wx-config --cppflags --libs`
```

to run the program 

```Bash
./Program_Name
```

