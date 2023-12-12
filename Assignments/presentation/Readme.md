problem being presented: uva 11463 commando 

question: A group of commandos were assigned a critical task. They are to destroy an enemy head quarter. The enemy head quarter consists of several buildings and the buildings are connected by roads. The commandos must visit each building and place a bomb at the base of each building. They start their mission at the base of a particular building and from there they disseminate to reach each building. The commandos must use the available roads to travel between buildings. Any of them can visit one
building after another, but they must all gather at a common place when their task in done.
In this problem, you will be given the description of different enemy headquarters. Your job is to determine the minimum time needed to complete the mission. Each commando takes exactly one unit
of time to move between buildings.
You may assume that the time required to place a bomb is negligible. Each commando can carry
unlimited number of bombs and there is an unlimited supply of commando troops for the mission.
Input

How i broke down the problem 
1. Understand the Problem:
The commandos need to destroy an enemy headquarters, consisting of several buildings connected by roads.
Commandos start at a particular building, visit each building, and gather at a common place when done.
Each commando takes one unit of time to move between buildings.

2. Identify the Key Elements:
Buildings: Numbered from 0 to N-1.
Roads: Connect buildings. Each road is represented by a pair of distinct numbers (u, v), indicating a road from building u to building v.
Start and destination buildings: Represented by s and d.

3. Formulate a Plan:
We need to find the minimum time required for the commandos to complete their mission.
Since commandos can move freely between buildings using roads, the problem involves finding the shortest path from the starting building (s) to the destination building (d).

4. Choose an Algorithm:
A suitable algorithm for finding the shortest path in a graph is Dijkstra's algorithm or Breadth-First Search (BFS).
We can use BFS to find the shortest path from the starting building to all other buildings and then calculate the time required.

5. Implement the Solution:
For each test case, read the number of buildings (N), the number of roads (R), and the road connections.
Use BFS to find the shortest path from the starting building (s) to all other buildings.
Calculate the time required to reach the destination building (d) using the shortest path.
Output the case number and the minimum time.

6. Test the Solution:
Test the solution using the provided sample input and verify that the output matches the expected results.
Additionally, test the solution with other scenarios to ensure its correctness and efficiency.



end thoughts : i wasnt able to figure out how to get my solution fully excepted but i know im on the right path even thought this isnt a super hard problem 

