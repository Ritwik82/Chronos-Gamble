FROM ubuntu:22.04
RUN apt-get update && apt-get install -y socat
WORKDIR /challenge
# Copy ONLY the stripped binary
COPY chronos_gamble .
RUN chmod +x chronos_gamble
EXPOSE 1337
CMD ["socat", "TCP-LISTEN:1337,reuseaddr,fork", "EXEC:./chronos_gamble"]