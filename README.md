<h2>How to Set Up and Run the Project</h2>

<h3>1. Download the Source File</h3>
<p>Download the file <code>SmartTraffic.cpp</code> from the repository and place it in a folder on your computer.</p>

<h3>2. Install a C++ Compiler</h3>
<p>You need a compiler that supports C++11 or higher. You can use:</p>
<ul>
  <li><strong>Windows:</strong> MinGW, CodeBlocks, or Visual Studio</li>
  <li><strong>Linux:</strong> g++ (usually pre-installed)</li>
  <li><strong>Mac:</strong> Xcode Command Line Tools</li>
</ul>

<h3>3. Compile the Program</h3>
<p>Open a terminal or command prompt in the folder where the file is saved. Run:</p>
<pre>
g++ -std=c++11 SmartTraffic.cpp -o SmartTraffic
</pre>
<p>This creates an executable file named <code>SmartTraffic</code>.</p>

<h3>4. Run the Program</h3>
<p>After compilation, run the program:</p>
<pre>
./SmartTraffic
</pre>
<p>On Windows, run:</p>
<pre>
SmartTraffic.exe
</pre>

<h3>5. View the Output</h3>
<p>The console will show:</p>
<ul>
  <li>traffic status</li>
  <li>current signal</li>
  <li>cars passing</li>
  <li>updated car counts</li>
  <li>final traffic status</li>
</ul>




<h2>How the Output Works</h2>
<p>The program prints what is happening inside the traffic signal for every cycle. Here is what each part means:</p>

<h3>1. Traffic Status</h3>
<p>This shows how many cars are waiting on each side:</p>
<pre>
North Lane : 12 cars
South Lane : 5 cars
East Lane  : 3 cars
West Lane  : 7 cars
</pre>
<p>It helps the system decide which direction needs the green light.</p>

<h3>2. Current Signal</h3>
<p>This tells you which road gets the green and which stays red:</p>
<pre>
NORTH-SOUTH : GREEN
EAST-WEST   : RED
</pre>
<p>The side with more cars gets the green signal first.</p>

<h3>3. Cars Passing</h3>
<p>When a side is green, some cars move:</p>
<pre>
Cars Passing from North–South...
</pre>
<p>The program reduces the number of cars from those lanes, simulating real movement.</p>

<h3>4. Updated Status</h3>
<p>After some cars pass, the program shows the new values:</p>
<pre>
North Lane : 7 cars
South Lane : 2 cars
East Lane  : 3 cars
West Lane  : 7 cars
</pre>
<p>This reflects how traffic is getting cleared.</p>

<h3>5. Signal Switch</h3>
<p>The program compares the new totals again and may switch the signal:
<br>Whichever side has more cars now gets green next.</p>

<h3>6. Final Output</h3>
<p>At the end of all cycles, the simulation shows the last traffic count:</p>
<pre>
North Lane : 2 cars
South Lane : 0 cars
East Lane  : 1 cars
West Lane  : 3 cars
</pre>
<p>This means the traffic has almost cleared.</p>

<h3>7. Simulation Completed</h3>
<p>This message simply means the program finished all cycles and stopped.</p>


 <h2 style="text-align:center;">Thank You ❤️</h2>

