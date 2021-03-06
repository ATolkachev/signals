#include<stdio.h>
#include<signal.h>
#include<unistd.h>

void sig_handler(int signo)
{
    if (signo == SIGHUP) printf("received SIGHUP\n");
    else if (signo == SIGINT) printf("received SIGINT\n");
    else if (signo == SIGQUIT) printf("received SIGQUIT\n");
    else if (signo == SIGILL) printf("received SIGILL\n");
    else if (signo == SIGTRAP) printf("received SIGTRAP\n");
    else if (signo == SIGABRT) printf("received SIGABRT\n");
    else if (signo == SIGBUS) printf("received SIGBUS\n");
    else if (signo == SIGFPE) printf("received SIGFPE\n");
    else if (signo == SIGKILL) printf("received SIGKILL\n");
    else if (signo == SIGUSR1) printf("received SIGUSR1\n");
    else if (signo == SIGSEGV) printf("received SIGSEGV\n");
    else if (signo == SIGUSR2) printf("received SIGUSR2\n");
    else if (signo == SIGPIPE) printf("received SIGPIPE\n");
    else if (signo == SIGALRM) printf("received SIGALRM\n");
    else if (signo == SIGTERM) printf("received SIGTERM\n");
    else if (signo == SIGSTKFLT) printf("received SIGSTKFLT\n");
    else if (signo == SIGCHLD) printf("received SIGCHLD\n");
    else if (signo == SIGCONT) printf("received SIGCONT\n");
    else if (signo == SIGSTOP) printf("received SIGSTOP\n");
    else if (signo == SIGTSTP) printf("received SIGTSTP\n");
    else if (signo == SIGTTIN) printf("received SIGTTIN\n");
    else if (signo == SIGTTOU) printf("received SIGTTOU\n");
    else if (signo == SIGURG) printf("received SIGURG\n");
    else if (signo == SIGXCPU) printf("received SIGXCPU\n");
    else if (signo == SIGXFSZ) printf("received SIGXFSZ\n");
    else if (signo == SIGVTALRM) printf("received SIGVTALRM\n");
    else if (signo == SIGPROF) printf("received SIGPROF\n");
    else if (signo == SIGWINCH) printf("received SIGWINCH\n");
    else if (signo == SIGIO) printf("received SIGIO\n");
    else if (signo == SIGPWR) printf("received SIGPWR\n");
    else if (signo == SIGSYS) printf("received SIGSYS\n");
    else if (signo == SIGRTMIN) printf("received SIGRTMIN\n");
    else if (signo == SIGRTMIN+1) printf("received SIGRTMIN+1\n");
    else if (signo == SIGRTMIN+2) printf("received SIGRTMIN+2\n");
    else if (signo == SIGRTMIN+3) printf("received SIGRTMIN+3\n");
    else if (signo == SIGRTMIN+4) printf("received SIGRTMIN+4\n");
    else if (signo == SIGRTMIN+5) printf("received SIGRTMIN+5\n");
    else if (signo == SIGRTMIN+6) printf("received SIGRTMIN+6\n");
    else if (signo == SIGRTMIN+7) printf("received SIGRTMIN+7\n");
    else if (signo == SIGRTMIN+8) printf("received SIGRTMIN+8\n");
    else if (signo == SIGRTMIN+9) printf("received SIGRTMIN+9\n");
    else if (signo == SIGRTMIN+10) printf("received SIGRTMIN+10\n");
    else if (signo == SIGRTMIN+11) printf("received SIGRTMIN+11\n");
    else if (signo == SIGRTMIN+12) printf("received SIGRTMIN+12\n");
    else if (signo == SIGRTMIN+13) printf("received SIGRTMIN+13\n");
    else if (signo == SIGRTMIN+14) printf("received SIGRTMIN+14\n");
    else if (signo == SIGRTMIN+15) printf("received SIGRTMIN+15\n");
    else if (signo == SIGRTMAX-14) printf("received SIGRTMAX-14\n");
    else if (signo == SIGRTMAX-13) printf("received SIGRTMAX-13\n");
    else if (signo == SIGRTMAX-12) printf("received SIGRTMAX-12\n");
    else if (signo == SIGRTMAX-11) printf("received SIGRTMAX-11\n");
    else if (signo == SIGRTMAX-10) printf("received SIGRTMAX-10\n");
    else if (signo == SIGRTMAX-9) printf("received SIGRTMAX-9\n");
    else if (signo == SIGRTMAX-8) printf("received SIGRTMAX-8\n");
    else if (signo == SIGRTMAX-7) printf("received SIGRTMAX-7\n");
    else if (signo == SIGRTMAX-6) printf("received SIGRTMAX-6\n");
    else if (signo == SIGRTMAX-5) printf("received SIGRTMAX-5\n");
    else if (signo == SIGRTMAX-4) printf("received SIGRTMAX-4\n");
    else if (signo == SIGRTMAX-3) printf("received SIGRTMAX-3\n");
    else if (signo == SIGRTMAX-2) printf("received SIGRTMAX-2\n");
    else if (signo == SIGRTMAX-1) printf("received SIGRTMAX-1\n");
    else if (signo == SIGRTMAX) printf("received SIGRTMAX\n");
    else printf("Caught signal %d\n",signo);
}

int main(void)
{
    if (signal(SIGHUP,sig_handler) == SIG_ERR) printf("can't catch SIGHUP\n");
    if (signal(SIGINT,sig_handler) == SIG_ERR) printf("can't catch SIGINT\n");
    if (signal(SIGQUIT,sig_handler) == SIG_ERR) printf("can't catch SIGQUIT\n");
    if (signal(SIGILL,sig_handler) == SIG_ERR) printf("can't catch SIGILL\n");
    if (signal(SIGTRAP,sig_handler) == SIG_ERR) printf("can't catch SIGTRAP\n");
    if (signal(SIGABRT,sig_handler) == SIG_ERR) printf("can't catch SIGABRT\n");
    if (signal(SIGBUS,sig_handler) == SIG_ERR) printf("can't catch SIGBUS\n");
    if (signal(SIGFPE,sig_handler) == SIG_ERR) printf("can't catch SIGFPE\n");
    if (signal(SIGKILL,sig_handler) == SIG_ERR) printf("can't catch SIGKILL\n");
    if (signal(SIGUSR1,sig_handler) == SIG_ERR) printf("can't catch SIGUSR1\n");
    if (signal(SIGSEGV,sig_handler) == SIG_ERR) printf("can't catch SIGSEGV\n");
    if (signal(SIGUSR2,sig_handler) == SIG_ERR) printf("can't catch SIGUSR2\n");
    if (signal(SIGPIPE,sig_handler) == SIG_ERR) printf("can't catch SIGPIPE\n");
    if (signal(SIGALRM,sig_handler) == SIG_ERR) printf("can't catch SIGALRM\n");
    if (signal(SIGTERM,sig_handler) == SIG_ERR) printf("can't catch SIGTERM\n");
    if (signal(SIGSTKFLT,sig_handler) == SIG_ERR) printf("can't catch SIGSTKFLT\n");
    if (signal(SIGCHLD,sig_handler) == SIG_ERR) printf("can't catch SIGCHLD\n");
    if (signal(SIGCONT,sig_handler) == SIG_ERR) printf("can't catch SIGCONT\n");
    if (signal(SIGSTOP,sig_handler) == SIG_ERR) printf("can't catch SIGSTOP\n");
    if (signal(SIGTSTP,sig_handler) == SIG_ERR) printf("can't catch SIGTSTP\n");
    if (signal(SIGTTIN,sig_handler) == SIG_ERR) printf("can't catch SIGTTIN\n");
    if (signal(SIGTTOU,sig_handler) == SIG_ERR) printf("can't catch SIGTTOU\n");
    if (signal(SIGURG,sig_handler) == SIG_ERR) printf("can't catch SIGURG\n");
    if (signal(SIGXCPU,sig_handler) == SIG_ERR) printf("can't catch SIGXCPU\n");
    if (signal(SIGXFSZ,sig_handler) == SIG_ERR) printf("can't catch SIGXFSZ\n");
    if (signal(SIGVTALRM,sig_handler) == SIG_ERR) printf("can't catch SIGVTALRM\n");
    if (signal(SIGPROF,sig_handler) == SIG_ERR) printf("can't catch SIGPROF\n");
    if (signal(SIGWINCH,sig_handler) == SIG_ERR) printf("can't catch SIGWINCH\n");
    if (signal(SIGIO,sig_handler) == SIG_ERR) printf("can't catch SIGIO\n");
    if (signal(SIGPWR,sig_handler) == SIG_ERR) printf("can't catch SIGPWR\n");
    if (signal(SIGSYS,sig_handler) == SIG_ERR) printf("can't catch SIGSYS\n");
    if (signal(SIGRTMIN,sig_handler) == SIG_ERR) printf("can't catch SIGRTMIN\n");
    if (signal(SIGRTMIN+1,sig_handler) == SIG_ERR) printf("can't catch SIGRTMIN+1\n");
    if (signal(SIGRTMIN+2,sig_handler) == SIG_ERR) printf("can't catch SIGRTMIN+2\n");
    if (signal(SIGRTMIN+3,sig_handler) == SIG_ERR) printf("can't catch SIGRTMIN+3\n");
    if (signal(SIGRTMIN+4,sig_handler) == SIG_ERR) printf("can't catch SIGRTMIN+4\n");
    if (signal(SIGRTMIN+5,sig_handler) == SIG_ERR) printf("can't catch SIGRTMIN+5\n");
    if (signal(SIGRTMIN+6,sig_handler) == SIG_ERR) printf("can't catch SIGRTMIN+6\n");
    if (signal(SIGRTMIN+7,sig_handler) == SIG_ERR) printf("can't catch SIGRTMIN+7\n");
    if (signal(SIGRTMIN+8,sig_handler) == SIG_ERR) printf("can't catch SIGRTMIN+8\n");
    if (signal(SIGRTMIN+9,sig_handler) == SIG_ERR) printf("can't catch SIGRTMIN+9\n");
    if (signal(SIGRTMIN+10,sig_handler) == SIG_ERR) printf("can't catch SIGRTMIN+10\n");
    if (signal(SIGRTMIN+11,sig_handler) == SIG_ERR) printf("can't catch SIGRTMIN+11\n");
    if (signal(SIGRTMIN+12,sig_handler) == SIG_ERR) printf("can't catch SIGRTMIN+12\n");
    if (signal(SIGRTMIN+13,sig_handler) == SIG_ERR) printf("can't catch SIGRTMIN+13\n");
    if (signal(SIGRTMIN+14,sig_handler) == SIG_ERR) printf("can't catch SIGRTMIN+14\n");
    if (signal(SIGRTMIN+15,sig_handler) == SIG_ERR) printf("can't catch SIGRTMIN+15\n");
    if (signal(SIGRTMAX-14,sig_handler) == SIG_ERR) printf("can't catch SIGRTMAX-14\n");
    if (signal(SIGRTMAX-13,sig_handler) == SIG_ERR) printf("can't catch SIGRTMAX-13\n");
    if (signal(SIGRTMAX-12,sig_handler) == SIG_ERR) printf("can't catch SIGRTMAX-12\n");
    if (signal(SIGRTMAX-11,sig_handler) == SIG_ERR) printf("can't catch SIGRTMAX-11\n");
    if (signal(SIGRTMAX-10,sig_handler) == SIG_ERR) printf("can't catch SIGRTMAX-10\n");
    if (signal(SIGRTMAX-9,sig_handler) == SIG_ERR) printf("can't catch SIGRTMAX-9\n");
    if (signal(SIGRTMAX-8,sig_handler) == SIG_ERR) printf("can't catch SIGRTMAX-8\n");
    if (signal(SIGRTMAX-7,sig_handler) == SIG_ERR) printf("can't catch SIGRTMAX-7\n");
    if (signal(SIGRTMAX-6,sig_handler) == SIG_ERR) printf("can't catch SIGRTMAX-6\n");
    if (signal(SIGRTMAX-5,sig_handler) == SIG_ERR) printf("can't catch SIGRTMAX-5\n");
    if (signal(SIGRTMAX-4,sig_handler) == SIG_ERR) printf("can't catch SIGRTMAX-4\n");
    if (signal(SIGRTMAX-3,sig_handler) == SIG_ERR) printf("can't catch SIGRTMAX-3\n");
    if (signal(SIGRTMAX-2,sig_handler) == SIG_ERR) printf("can't catch SIGRTMAX-2\n");
    if (signal(SIGRTMAX-1,sig_handler) == SIG_ERR) printf("can't catch SIGRTMAX-1\n");
    if (signal(SIGRTMAX,sig_handler) == SIG_ERR) printf("can't catch SIGRTMAX\n");
    // A long long wait so that we can easily issue a signal to this process
    while(1)
        sleep(1);
    return 0;
}