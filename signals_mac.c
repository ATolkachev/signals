#include<stdio.h>
#include<signal.h>
#include<unistd.h>

void sig_handler(int signo)
{
    else if (signo == SIGHUP) printf("received SIGHUP\n");
    else if (signo == SIGINT) printf("received SIGINT\n");
    else if (signo == SIGQUIT) printf("received SIGQUIT\n");
    else if (signo == SIGILL) printf("received SIGILL\n");
    else if (signo == SIGTRAP) printf("received SIGTRAP\n");
    else if (signo == SIGABRT) printf("received SIGABRT\n");
    else if (signo == SIGEMT) printf("received SIGEMT\n");
    else if (signo == SIGFPE) printf("received SIGFPE\n");
    else if (signo == SIGKILL) printf("received SIGKILL\n");
    else if (signo == SIGBUS) printf("received SIGBUS\n");
    else if (signo == SIGSEGV) printf("received SIGSEGV\n");
    else if (signo == SIGSYS) printf("received SIGSYS\n");
    else if (signo == SIGPIPE) printf("received SIGPIPE\n");
    else if (signo == SIGALRM) printf("received SIGALRM\n");
    else if (signo == SIGTERM) printf("received SIGTERM\n");
    else if (signo == SIGURG) printf("received SIGURG\n");
    else if (signo == SIGSTOP) printf("received SIGSTOP\n");
    else if (signo == SIGTSTP) printf("received SIGTSTP\n");
    else if (signo == SIGCONT) printf("received SIGCONT\n");
    else if (signo == SIGCHLD) printf("received SIGCHLD\n");
    else if (signo == SIGTTIN) printf("received SIGTTIN\n");
    else if (signo == SIGTTOU) printf("received SIGTTOU\n");
    else if (signo == SIGIO) printf("received SIGIO\n");
    else if (signo == SIGXCPU) printf("received SIGXCPU\n");
    else if (signo == SIGXFSZ) printf("received SIGXFSZ\n");
    else if (signo == SIGVTALRM) printf("received SIGVTALRM\n");
    else if (signo == SIGPROF) printf("received SIGPROF\n");
    else if (signo == SIGWINCH) printf("received SIGWINCH\n");
    else if (signo == SIGINFO) printf("received SIGINFO\n");
    else if (signo == SIGUSR1) printf("received SIGUSR1\n");
    else if (signo == SIGUSR2) printf("received SIGUSR2\n");
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
    if (signal(SIGEMT,sig_handler) == SIG_ERR) printf("can't catch SIGEMT\n");
    if (signal(SIGFPE,sig_handler) == SIG_ERR) printf("can't catch SIGFPE\n");
    if (signal(SIGKILL,sig_handler) == SIG_ERR) printf("can't catch SIGKILL\n");
    if (signal(SIGBUS,sig_handler) == SIG_ERR) printf("can't catch SIGBUS\n");
    if (signal(SIGSEGV,sig_handler) == SIG_ERR) printf("can't catch SIGSEGV\n");
    if (signal(SIGSYS,sig_handler) == SIG_ERR) printf("can't catch SIGSYS\n");
    if (signal(SIGPIPE,sig_handler) == SIG_ERR) printf("can't catch SIGPIPE\n");
    if (signal(SIGALRM,sig_handler) == SIG_ERR) printf("can't catch SIGALRM\n");
    if (signal(SIGTERM,sig_handler) == SIG_ERR) printf("can't catch SIGTERM\n");
    if (signal(SIGURG,sig_handler) == SIG_ERR) printf("can't catch SIGURG\n");
    if (signal(SIGSTOP,sig_handler) == SIG_ERR) printf("can't catch SIGSTOP\n");
    if (signal(SIGTSTP,sig_handler) == SIG_ERR) printf("can't catch SIGTSTP\n");
    if (signal(SIGCONT,sig_handler) == SIG_ERR) printf("can't catch SIGCONT\n");
    if (signal(SIGCHLD,sig_handler) == SIG_ERR) printf("can't catch SIGCHLD\n");
    if (signal(SIGTTIN,sig_handler) == SIG_ERR) printf("can't catch SIGTTIN\n");
    if (signal(SIGTTOU,sig_handler) == SIG_ERR) printf("can't catch SIGTTOU\n");
    if (signal(SIGIO,sig_handler) == SIG_ERR) printf("can't catch SIGIO\n");
    if (signal(SIGXCPU,sig_handler) == SIG_ERR) printf("can't catch SIGXCPU\n");
    if (signal(SIGXFSZ,sig_handler) == SIG_ERR) printf("can't catch SIGXFSZ\n");
    if (signal(SIGVTALRM,sig_handler) == SIG_ERR) printf("can't catch SIGVTALRM\n");
    if (signal(SIGPROF,sig_handler) == SIG_ERR) printf("can't catch SIGPROF\n");
    if (signal(SIGWINCH,sig_handler) == SIG_ERR) printf("can't catch SIGWINCH\n");
    if (signal(SIGINFO,sig_handler) == SIG_ERR) printf("can't catch SIGINFO\n");
    if (signal(SIGUSR1,sig_handler) == SIG_ERR) printf("can't catch SIGUSR1\n");
    if (signal(SIGUSR2,sig_handler) == SIG_ERR) printf("can't catch SIGUSR2\n");
    // A long long wait so that we can easily issue a signal to this process
    while(1)
        sleep(1);
    return 0;
}