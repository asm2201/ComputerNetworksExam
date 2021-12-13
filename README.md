# ComputerNetworksExam
Two questions based on computer networks have been implemented using C++.
The first question is based on Go Back N algorithm and the second is based on CRC algorithm for noise detection in the channel.

# Question 1 -> Go Back N Sliding Window Protocol

1. It is essential to understand the sliding window protocol for implementing go-back-n algorithm
2. Sliding window protocol is a flow control protocol
3. It allows the sender to transmit multiple frames before needing the acknowledgements.
4. Sender slides its window on receiving the acknowledgements for the sent frames.
5. This allows the sender to send more frames.
6. It is called so because it involves sliding of the sender's window.
7. Maximum number of frames that sender can send without acknowledgement = Sender window size
8. Go back N protocol is an implementation of a sliding window protocol.
9. In Go back N, sender window size is N and receiver window size is always 1.

# Question 2 -> Cyclic Redundancy Check (CRC) error detection algorithm

1. The transmitted data may get scrambled or corrupted due to noise
2. Hence, we use error detecting codes which are additional data added to the message to check for any errors during transmission
3. CRC is based on binary division
4. In this method, a sequence of redundant bits, called cyclic redundancy check bits, are appended to the end of the data unit. 
   The resulting data unit is exactly divisible by a second predetermined binary number.
5. After transmission, the incoming data unit is divided by the same number. If there is no remainder, the data unit is certified as correct and is accepted.
6. A remainder indicates that the data unit has been corrupted in transmission and is rejected.
