# Use a lightweight Linux base
FROM ubuntu:22.04

# Install socat (the network listener)
RUN apt-get update && apt-get install -y socat gcc

WORKDIR /challenge
COPY challenge.c .

# Compile the binary inside the Linux container
RUN gcc challenge.c -o chronos_gamble

# Expose port 1337
EXPOSE 1337

# Start the service
CMD ["socat", "TCP-LISTEN:1337,reuseaddr,fork", "EXEC:./chronos_gamble"]