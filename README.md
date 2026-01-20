The Chronos Gamble ⏳
Points: 100
In the underground circles of digital high-rollers, there is a legend of a machine that can predict the future. They call it the Chronos Gamble. It doesn't use cards or dice; it uses time itself.

The house claims the numbers are perfectly random, but a glitch in the clock suggests otherwise. Can you sync your mind with the machine and predict 30 steps ahead to bankrupt the house?

📂 Challenge Files
The game binary is available for analysis in the Releases section of this repository.

File: chronos_gamble

Format: Linux 64-bit ELF (Stripped)

🚀 How to Connect
Once you have analyzed the binary and developed your exploit, connect to the live instance:

Bash

nc <YOUR_SERVER_IP> 1337
🎯 Objective
Download the binary and analyze the randomization logic.

Identify the vulnerability in the seeding process.

Provide 30 consecutive correct predictions to the server.

Capture the flag.

🚩 Flag
LNM{My$t3ry_s33d}
