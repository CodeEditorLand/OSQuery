/* This is a generated file, see Makefile.am for its inputs. */
static const char arm_syscall_strings[] =
    "accept\0accept4\0access\0acct\0add_"
    "key\0adjtimex\0alarm\0bdflush\0bind\0bpf\0"
    "brk\0capget\0capset\0chdir\0chmod\0chown\0chown32\0chroot\0clock_"
    "adjtime\0clock_getres\0"
    "clock_gettime\0clock_nanosleep\0clock_"
    "settime\0clone\0close\0connect\0creat\0delete_module\0dup\0dup2\0"
    "dup3\0epoll_create\0epoll_create1\0epoll_ctl\0epoll_"
    "wait\0eventfd\0eventfd2\0execve\0execveat\0exit\0"
    "exit_group\0faccessat\0fadvise64_64\0fallocate\0fanotify_init\0fanotify_"
    "mark\0fchdir\0fchmod\0fchmodat\0fchown\0"
    "fchown32\0fchownat\0fcntl\0fcntl64\0fdatasync\0fgetxattr\0finit_"
    "module\0flistxattr\0flock\0fork\0"
    "fremovexattr\0fsetxattr\0fstat\0fstat64\0fstatat64\0fstatfs\0fstatfs64\0fs"
    "ync\0ftruncate\0ftruncate64\0"
    "futex\0futimesat\0get_mempolicy\0get_robust_"
    "list\0getcpu\0getcwd\0getdents\0getdents64\0getegid\0getegid32\0"
    "geteuid\0geteuid32\0getgid\0getgid32\0getgroups\0getgroups32\0getitimer\0g"
    "etpeername\0getpgid\0getpgrp\0"
    "getpid\0getppid\0getpriority\0getrandom\0getresgid\0getresgid32\0getresuid"
    "\0getresuid32\0getrlimit\0getrusage\0"
    "getsid\0getsockname\0getsockopt\0gettid\0gettimeofday\0getuid\0getuid32\0g"
    "etxattr\0init_module\0inotify_add_watch\0"
    "inotify_init\0inotify_init1\0inotify_rm_watch\0io_cancel\0io_destroy\0io_"
    "getevents\0io_setup\0io_submit\0ioctl\0ioprio_get\0"
    "ioprio_set\0ipc\0kcmp\0kexec_"
    "load\0keyctl\0kill\0lchown\0lchown32\0lgetxattr\0link\0"
    "linkat\0listen\0listxattr\0llistxattr\0llseek\0lookup_"
    "dcookie\0lremovexattr\0lseek\0lsetxattr\0lstat\0"
    "lstat64\0madvise\0mbind\0memfd_"
    "create\0mincore\0mkdir\0mkdirat\0mknod\0mknodat\0mlock\0"
    "mlockall\0mmap\0mmap2\0mount\0move_pages\0mprotect\0mq_getsetattr\0mq_"
    "notify\0mq_open\0mq_timedreceive\0"
    "mq_timedsend\0mq_"
    "unlink\0mremap\0msgctl\0msgget\0msgrcv\0msgsnd\0msync\0munlock\0munlockall"
    "\0"
    "munmap\0name_to_handle_"
    "at\0nanosleep\0newselect\0nfsservctl\0nice\0open\0open_by_handle_"
    "at\0openat\0pause\0"
    "pciconfig_iobase\0pciconfig_read\0pciconfig_write\0perf_event_"
    "open\0personality\0pipe\0pipe2\0pivot_root\0poll\0prctl\0"
    "pread64\0preadv\0prlimit64\0process_vm_readv\0process_vm_"
    "writev\0ptrace\0pwrite64\0pwritev\0quotactl\0read\0"
    "readahead\0readdir\0readlink\0readlinkat\0readv\0reboot\0recv\0recvfrom\0r"
    "ecvmmsg\0recvmsg\0"
    "remap_file_pages\0removexattr\0rename\0renameat\0renameat2\0request_"
    "key\0restart_syscall\0rmdir\0rt_sigaction\0rt_sigpending\0"
    "rt_sigprocmask\0rt_sigqueueinfo\0rt_sigreturn\0rt_sigsuspend\0rt_"
    "sigtimedwait\0rt_tgsigqueueinfo\0sched_get_priority_max\0sched_get_"
    "priority_min\0sched_getaffinity\0sched_getattr\0"
    "sched_getparam\0sched_getscheduler\0sched_rr_get_interval\0sched_"
    "setaffinity\0sched_setattr\0sched_setparam\0sched_setscheduler\0sched_"
    "yield\0seccomp\0select\0"
    "semctl\0semget\0semop\0semtimedop\0send\0sendfile\0sendfile64\0sendmmsg\0s"
    "endmsg\0sendto\0"
    "set_mempolicy\0set_robust_list\0set_tid_"
    "address\0setdomainname\0setfsgid\0setfsgid32\0setfsuid\0setfsuid32\0setgid"
    "\0setgid32\0"
    "setgroups\0setgroups32\0sethostname\0setitimer\0setns\0setpgid\0setpriorit"
    "y\0setregid\0setregid32\0setresgid\0"
    "setresgid32\0setresuid\0setresuid32\0setreuid\0setreuid32\0setrlimit\0sets"
    "id\0setsockopt\0settimeofday\0setuid\0"
    "setuid32\0setxattr\0shmat\0shmctl\0shmdt\0shmget\0shutdown\0sigaction\0sig"
    "altstack\0signalfd\0"
    "signalfd4\0sigpending\0sigprocmask\0sigreturn\0sigsuspend\0socket\0socketc"
    "all\0socketpair\0splice\0stat\0"
    "stat64\0statfs\0statfs64\0stime\0swapoff\0swapon\0symlink\0symlinkat\0sync"
    "\0sync_file_range\0"
    "syncfs\0syscall\0sysctl\0sysfs\0sysinfo\0syslog\0tee\0tgkill\0time\0timer_"
    "create\0"
    "timer_delete\0timer_getoverrun\0timer_gettime\0timer_settime\0timerfd_"
    "create\0timerfd_gettime\0timerfd_settime\0times\0tkill\0truncate\0"
    "truncate64\0ugetrlimit\0umask\0umount\0umount2\0uname\0unlink\0unlinkat\0u"
    "nshare\0uselib\0"
    "ustat\0utime\0utimensat\0utimes\0vfork\0vhangup\0vmsplice\0vserver\0wait4"
    "\0waitid\0"
    "write\0writev";
static const unsigned arm_syscall_s2i_s[] = {
    0,    7,    15,   22,   27,   35,   44,   50,   58,   63,   67,   71,
    78,   85,   91,   97,   103,  111,  118,  132,  145,  159,  175,  189,
    195,  201,  209,  215,  229,  233,  238,  243,  256,  270,  280,  291,
    299,  308,  315,  324,  329,  340,  350,  363,  373,  387,  401,  408,
    415,  424,  431,  440,  449,  455,  463,  473,  483,  496,  507,  513,
    518,  531,  541,  547,  555,  565,  573,  583,  589,  599,  611,  617,
    627,  641,  657,  664,  671,  680,  691,  699,  709,  717,  727,  734,
    743,  753,  765,  775,  787,  795,  803,  810,  818,  830,  840,  850,
    862,  872,  884,  894,  904,  911,  923,  934,  941,  954,  961,  970,
    979,  991,  1009, 1022, 1036, 1053, 1063, 1074, 1087, 1096, 1106, 1112,
    1123, 1134, 1138, 1143, 1154, 1161, 1166, 1173, 1182, 1192, 1197, 1204,
    1211, 1221, 1232, 1239, 1254, 1267, 1273, 1283, 1289, 1297, 1305, 1311,
    1324, 1332, 1338, 1346, 1352, 1360, 1366, 1375, 1380, 1386, 1392, 1403,
    1412, 1426, 1436, 1444, 1460, 1473, 1483, 1490, 1497, 1504, 1511, 1518,
    1524, 1532, 1543, 1550, 1568, 1578, 1588, 1599, 1604, 1609, 1627, 1634,
    1640, 1657, 1672, 1688, 1704, 1716, 1721, 1727, 1738, 1743, 1749, 1757,
    1764, 1774, 1791, 1809, 1816, 1825, 1833, 1842, 1847, 1857, 1865, 1874,
    1885, 1891, 1898, 1903, 1912, 1921, 1929, 1946, 1958, 1965, 1974, 1984,
    1996, 2012, 2018, 2031, 2045, 2060, 2076, 2089, 2103, 2119, 2137, 2160,
    2183, 2201, 2215, 2230, 2249, 2271, 2289, 2303, 2318, 2337, 2349, 2357,
    2364, 2371, 2378, 2384, 2395, 2400, 2409, 2420, 2429, 2437, 2444, 2458,
    2474, 2490, 2504, 2513, 2524, 2533, 2544, 2551, 2560, 2570, 2582, 2594,
    2604, 2610, 2618, 2630, 2639, 2650, 2660, 2672, 2682, 2694, 2703, 2714,
    2724, 2731, 2742, 2755, 2762, 2771, 2780, 2786, 2793, 2799, 2806, 2815,
    2825, 2837, 2846, 2856, 2867, 2879, 2889, 2900, 2907, 2918, 2929, 2936,
    2941, 2948, 2955, 2964, 2970, 2978, 2985, 2993, 3003, 3008, 3024, 3031,
    3039, 3046, 3052, 3060, 3067, 3071, 3078, 3083, 3096, 3109, 3126, 3140,
    3154, 3169, 3185, 3201, 3207, 3213, 3222, 3233, 3244, 3250, 3257, 3265,
    3271, 3278, 3287, 3295, 3302, 3308, 3314, 3324, 3331, 3337, 3345, 3354,
    3362, 3368, 3375, 3381,
};
static const int arm_syscall_s2i_i[] = {
    285, 366, 33,  51,  309, 124, 27,  134, 282, 386, 45,  184, 185, 12,  15,
    182, 212, 61,  372, 264, 263, 265, 262, 120, 6,   283, 8,   129, 41,  63,
    358, 250, 357, 251, 252, 351, 356, 11,  387, 1,   248, 334, 270, 352, 367,
    368, 133, 94,  333, 95,  207, 325, 55,  221, 148, 231, 379, 234, 143, 2,
    237, 228, 108, 197, 327, 100, 267, 118, 93,  194, 240, 326, 320, 339, 345,
    183, 141, 217, 50,  202, 49,  201, 47,  200, 80,  205, 105, 287, 132, 65,
    20,  64,  96,  384, 171, 211, 165, 209, 76,  77,  147, 286, 295, 224, 78,
    24,  199, 229, 128, 317, 316, 360, 318, 247, 244, 245, 243, 246, 54,  315,
    314, 117, 378, 347, 311, 37,  16,  198, 230, 9,   330, 284, 232, 233, 140,
    249, 236, 19,  227, 107, 196, 220, 319, 385, 219, 39,  323, 14,  324, 150,
    152, 90,  192, 21,  344, 125, 279, 278, 274, 277, 276, 275, 163, 304, 303,
    302, 301, 144, 151, 153, 91,  370, 162, 142, 169, 34,  5,   371, 322, 29,
    271, 272, 273, 364, 136, 42,  359, 218, 168, 172, 180, 361, 369, 376, 377,
    26,  181, 362, 131, 3,   225, 89,  85,  332, 145, 88,  291, 292, 365, 297,
    253, 235, 38,  329, 382, 310, 0,   40,  174, 176, 175, 178, 173, 179, 177,
    363, 159, 160, 242, 381, 155, 157, 161, 241, 380, 154, 156, 158, 383, 82,
    300, 299, 298, 312, 289, 187, 239, 374, 296, 290, 321, 338, 256, 121, 139,
    216, 138, 215, 46,  214, 81,  206, 74,  104, 375, 57,  97,  71,  204, 170,
    210, 164, 208, 70,  203, 75,  66,  294, 79,  23,  213, 226, 305, 308, 306,
    307, 293, 67,  186, 349, 355, 73,  126, 119, 72,  281, 102, 288, 340, 106,
    195, 99,  266, 25,  115, 87,  83,  331, 36,  341, 373, 113, 149, 135, 116,
    103, 342, 268, 13,  257, 261, 260, 259, 258, 350, 354, 353, 43,  238, 92,
    193, 191, 60,  22,  52,  122, 10,  328, 337, 86,  62,  30,  348, 269, 190,
    111, 343, 313, 114, 280, 4,   146,
};
static int arm_syscall_s2i(const char* s, int* value) {
  size_t len, i;
  len = strlen(s);
  {
    char copy[len + 1];
    for (i = 0; i < len; i++) {
      char c = s[i];
      copy[i] = GT_ISUPPER(c) ? c - 'A' + 'a' : c;
    }
    copy[i] = 0;
    return s2i__(arm_syscall_strings,
                 arm_syscall_s2i_s,
                 arm_syscall_s2i_i,
                 352,
                 copy,
                 value);
  }
}
static const unsigned arm_syscall_i2s_direct[] = {
    1996, 324,  513,  1842, 3375, 1604, 195,  -1u,  209,  1192, 3271, 308,
    85,   3078, 1346, 91,   1166, -1u,  -1u,  1267, 803,  1386, 3250, 2755,
    954,  2964, 1809, 44,   -1u,  1634, 3308, -1u,  -1u,  15,   1599, -1u,
    3003, 1161, 1958, 1332, 2012, 229,  1716, 3201, -1u,  67,   2544, 727,
    -1u,  709,  691,  22,   3257, -1u,  1106, 449,  -1u,  2610, -1u,  -1u,
    3244, 111,  3302, 233,  810,  795,  2724, 2815, -1u,  -1u,  2694, 2630,
    2889, 2856, 2582, 2714, 884,  894,  941,  2742, 743,  2560, 2357, 2985,
    -1u,  1865, 3295, 2978, 1891, 1857, 1375, 1543, 3213, 589,  408,  424,
    818,  2618, -1u,  2948, 565,  -1u,  2907, 3060, 2594, 765,  2936, 1283,
    541,  -1u,  -1u,  3337, -1u,  3031, 3362, 2970, 3052, 1134, 583,  2879,
    189,  2490, 3265, -1u,  35,   1403, 2867, -1u,  979,  215,  -1u,  1833,
    787,  401,  50,   3046, 1704, -1u,  2524, 2504, 1232, 671,  1578, 507,
    1518, 1885, 3381, 904,  463,  3039, 1360, 1524, 1366, 1532, 2303, 2215,
    2318, 2230, 2337, 2137, 2160, 2249, 1568, 1483, 2672, 862,  -1u,  -1u,
    1738, 1588, 2650, 840,  1743, 2076, 2018, 2045, 2031, 2103, 2060, 2089,
    1749, 1816, 97,   664,  71,   78,   2825, 2400, -1u,  -1u,  3331, 3233,
    1380, 3222, 599,  2941, 1289, 547,  1173, 961,  734,  717,  699,  2703,
    2639, 753,  2570, 431,  2682, 872,  2660, 850,  103,  2762, 2551, 2533,
    2513, 680,  1727, 1324, 1297, 455,  -1u,  -1u,  934,  1847, 2771, 1273,
    531,  970,  1182, 473,  1211, 1221, 496,  1946, 1254, 518,  3207, 2409,
    611,  2271, 2183, 1087, 1063, 1074, 1096, 1053, 329,  1239, 243,  270,
    280,  1929, -1u,  -1u,  2474, 3083, 3140, 3126, 3109, 3096, 175,  145,
    132,  159,  2955, 573,  3071, 3324, 350,  1640, 1657, 1672, 1436, 1473,
    1460, 1444, 1426, 1412, 3368, 2900, 58,   201,  1204, 0,    911,  775,
    2918, 2395, 2437, 1898, 1903, 2806, 2731, 923,  2429, 1921, 2378, 2371,
    2364, 1511, 1504, 1497, 1490, 2780, 2793, 2799, 2786, 27,   1984, 1154,
    2384, 3354, 1123, 1112, 1009, 991,  1036, 1305, 627,  2444, 1627, 1338,
    1352, 440,  617,  555,  3278, 1965, 1197, 2993, 1874, 415,  340,  -1u,
    -1u,  3287, 2458, 641,  2929, 3008, 3067, 3345, 1392, 657,  -1u,  1143,
    3314, 2837, 3154, 291,  363,  3185, 3169, 2846, 299,  256,  238,  1721,
    1022, 1757, 1825, 2119, 1688, 1912, 7,    373,  387,  1764, 1550, 1609,
    118,  3024, 2420, 2604, 1774, 1791, 1138, 483,  2289, 2201, 1974, 2349,
    830,  1311, 63,   315,
};
static const char* arm_syscall_i2s(int v) {
  return i2s_direct__(arm_syscall_strings, arm_syscall_i2s_direct, 0, 387, v);
}
