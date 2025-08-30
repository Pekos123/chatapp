# CHAT APP

## How to build project?
**Linux Ubuntu/Debian:**
1. First Clone git repo
```bash
git clone https://github.com/Pekos123/chatapp.git
cd chatapp
```
2. Make build direcotry and run cmake
```bash
mkdir build
cd build
cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=ON ../CMakeLists.txt
make
```
3. Run calculator
```bash
src/chatbot
```
*for tests*
```bash
tests/chatbot_tests
```

