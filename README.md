# DDA algorithm: 
Digital Differential Analyzer algorithm.
DDA algorithm is the simplest line drawing algorithm.Here given that the starting and ending coordinates of a line.
Algorithm: 

Given- <br>
Starting coordinates = (X0, Y0)
Ending coordinates = (Xn, Yn)<br>
And Xp=X0, Yp=Y0

### <u>Step: 01</u>
Calculate ΔX, ΔY and M from the given input.
These parameters are calculated as-<br>
ΔX = Xn – X0;<br>
ΔY =Yn – Y0;<br>
M = ΔY / ΔX

### Step:02
Find the number of steps or points in between the starting and ending coordinates.
if (absolute (ΔX) > absolute (ΔY))<br>
Steps = absolute (ΔX);<br>
else<br>
Steps = absolute (ΔY);

### Step: 03:
Suppose the current point is (Xp, Yp) and the next point is (Xp+1, Yp+1).
Find the next point by following the below three cases-

Case:01: If  M<1<br>

•	Xp+1=round off (1+Xp)<br>
•	Yp+1=round off (M+Yp)

Case:02: If  M=1<br>

•	Xp+1=round off (1+Xp)<br>
•	Yp+1=round off (1+Yp)

Case:03: If  M>1

•	Xp+1=round off (1/M+Xp)
•	Yp+1=round off (1+Yp)


### Step-04:
 
Keep repeating Step-03 until the end point is reached or the number of generated new points (including the starting and ending points) equals to the steps count.

Output and more information [click here](https://drive.google.com/file/d/1Vxy67tbutN8DEAt4zfXhYIgaWw942O-R/view?usp=sharing)

