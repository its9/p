#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
void sig_handler(int signum) {
printf("Received signal: %d\n", signum);
}
int main() {
struct sigaction sa;
sigset_t old_mask, new_mask;
sa.sa_handler = sig_handler;
sigemptyset(&sa.sa_mask);
sa.sa_flags = 0;
if (sigaction(SIGINT, &sa, NULL) == -1) {
perror("sigaction");
exit(EXIT_FAILURE);
}
printf("Signal handler registered for SIGINT (Ctrl+C)\n");
sigemptyset(&new_mask);
sigaddset(&new_mask, SIGINT);
if (sigprocmask(SIG_BLOCK, NULL, &old_mask) == -1) {
perror("sigprocmask");
exit(EXIT_FAILURE);
}
if (sigismember(&old_mask, SIGINT)) {
printf("SIGINT is already present in the signal mask.\n");
} else {
if (sigprocmask(SIG_BLOCK, &new_mask, NULL) == -1) {
perror("sigprocmask");
exit(EXIT_FAILURE);
}
printf("Added SIGINT to the signal mask.\n");
}
while (1) {
sleep(1);
}
return 0;
}
