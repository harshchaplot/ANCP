# ANCP_pracs


ANCP practicals

<h1>For Practical 6 commands:</h1>
<b>One imp thing for Practical 6: make sure your gcc version is above 9<br></b>
You can check your gcc version by gcc --version<br>
In order to update:<br>
sudo apt-get install gcc-9<br>
sudo update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-9 90 --slave /usr/bin/g++ g++ /usr/bin/g++-9 --slave /usr/bin/gcov gcov /usr/bin/gcov-9<br>
<br>
In order to check the alternatives present: sudo update-alternatives --config gcc<br><br>
<br><br>
<ul>
	<li>gcc pthread -o server thread_server.c </li>
	<li>gcc pthread -o server thread_client.c </li>
</ul><br>
<br>
<br>
Run multiple instances of client in different terminals/command prompts!!<br>
<br>
After compiling:<br>
./client<br>
./server<br>
<br><br>
<h1>For practical 7 files are sender.c and listener.c</h1><br>
For running the files <br>
Run the listener in multiple command prompts or terminals ( Multicast IP used is 239.255.255.250 and port number is 9000 which u can have ur own but keep in mind that IP should be in the multicast IP range ) <br>
<ul>
	<li>gcc listener.c -o listener</li>
	<li>./listener 239.255.255.250 9000</li>
</ul>
<ul>
	<li>gcc sender.c -o sender</li>
	<li>./sender 239.255.255.250 9000</li>
</ul>