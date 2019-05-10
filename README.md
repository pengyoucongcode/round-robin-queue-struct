# round-robin-queue-struct
## explain
*This program realizes the simple operation of circular queue, 
* such as initializing queue (InitQueue), 
* queue entry operation (EnQueue), 
* getting queue header element (GetHead) 
* getting queue length (GetLength), 
* output queue (Display), 
* out of queue (DeQueue)

## template
* The following data operations are implemented sequentially: 
* 1, 2, 3, 4, 5 enqueue 
* 6 7 8 9 10 11 enqueue 
* call Display to display all the characters in the queue after all of the above operations have been completed.
* The results are as follows
```
请输入要入队的元素个数：
(Please enter the number of elements to join the team)5
请逐一输入(Please enter one by one)：
1 2 3 4 5
入队成功Succeed in enqueue
当前队列中元素个数为The number of elements in the current queue is. ：5个,分别为：1 2 3 4 5
队头元素为(The first element of the team is)：1
出队成功dequeue was successful.
出队元素/Out-of-line element：1
当前队列中元素个数为The number of elements in the current queue is. ：4个,分别为：2 3 4 5
队头元素为The first element of the team is：2
请输入要入队的元素个数(Please enter the number of elements to join the team)：6
请逐一输入(Please enter one by one)：
6 7 8 9 10 11
入队成功Succeed in enqueue
当前队列中元素个数为The number of elements in the current queue is. ：10个,分别为：2 3 4 5 6 7 8 9 10 11
```
