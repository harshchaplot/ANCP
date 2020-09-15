# ANCP_pracs


ANCP practicals


<b>One imp thing for Practical 6: make sure your gcc version is above 9<br></b>
You can check your gcc version by gcc --version<br>
In order to update:<br>
sudo apt-get install gcc-9<br>
sudo update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-9 90 --slave /usr/bin/g++ g++ /usr/bin/g++-9 --slave /usr/bin/gcov gcov /usr/bin/gcov-9<br>
<br>
For Practical 6 commands:<br>
gcc pthread -o server thread_server.c <br>
gcc pthread -o server thread_client.c <br>
<br>
<br>
Run multiple instances of client in different terminals/command prompts!!<br>
<br>
After compiling:<br>
./client<br>
./server<br>
