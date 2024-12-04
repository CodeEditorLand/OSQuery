/* This is a generated file, see Makefile.am for its inputs. */
static const char msg_type_strings[] =
    "ADD_GROUP\0ADD_USER\0ANOM_ABEND\0ANOM_ACCESS_FS\0ANOM_ADD_ACCT\0ANOM_AMTU_"
    "FAIL\0ANOM_CRYPTO_FAIL\0ANOM_DEL_ACCT\0ANOM_EXEC\0ANOM_LINK\0"
    "ANOM_LOGIN_ACCT\0ANOM_LOGIN_FAILURES\0ANOM_LOGIN_LOCATION\0ANOM_LOGIN_"
    "SESSIONS\0ANOM_LOGIN_TIME\0ANOM_MAX_DAC\0ANOM_MAX_MAC\0ANOM_MK_EXEC\0ANOM_"
    "MOD_ACCT\0ANOM_PROMISCUOUS\0"
    "ANOM_RBAC_FAIL\0ANOM_RBAC_INTEGRITY_FAIL\0ANOM_ROOT_TRANS\0AVC\0AVC_"
    "PATH\0BPRM_FCAPS\0CAPSET\0CHGRP_ID\0CHUSER_ID\0CONFIG_CHANGE\0"
    "CRED_ACQ\0CRED_DISP\0CRED_REFR\0CRYPTO_FAILURE_USER\0CRYPTO_IKE_"
    "SA\0CRYPTO_IPSEC_SA\0CRYPTO_KEY_USER\0CRYPTO_LOGIN\0CRYPTO_LOGOUT\0CRYPTO_"
    "PARAM_CHANGE_USER\0"
    "CRYPTO_REPLAY_USER\0CRYPTO_SESSION\0CRYPTO_TEST_USER\0CWD\0DAC_"
    "CHECK\0DAEMON_ABORT\0DAEMON_ACCEPT\0DAEMON_CLOSE\0DAEMON_CONFIG\0DAEMON_"
    "END\0"
    "DAEMON_RESUME\0DAEMON_ROTATE\0DAEMON_START\0DEL_GROUP\0DEL_USER\0DEV_"
    "ALLOC\0DEV_DEALLOC\0EOE\0EXECVE\0FD_PAIR\0"
    "FEATURE_CHANGE\0FS_RELABEL\0GRP_AUTH\0GRP_CHAUTHTOK\0GRP_MGMT\0INTEGRITY_"
    "DATA\0INTEGRITY_HASH\0INTEGRITY_METADATA\0INTEGRITY_PCR\0INTEGRITY_RULE\0"
    "INTEGRITY_STATUS\0IPC\0IPC_SET_PERM\0KERNEL\0KERNEL_OTHER\0LABEL_LEVEL_"
    "CHANGE\0LABEL_OVERRIDE\0LOGIN\0MAC_CIPSOV4_ADD\0MAC_CIPSOV4_DEL\0"
    "MAC_CONFIG_CHANGE\0MAC_IPSEC_ADDSA\0MAC_IPSEC_ADDSPD\0MAC_IPSEC_"
    "DELSA\0MAC_IPSEC_DELSPD\0MAC_IPSEC_EVENT\0MAC_MAP_ADD\0MAC_MAP_DEL\0MAC_"
    "POLICY_LOAD\0MAC_STATUS\0"
    "MAC_UNLBL_ALLOW\0MAC_UNLBL_STCADD\0MAC_UNLBL_STCDEL\0MMAP\0MQ_"
    "GETSETATTR\0MQ_NOTIFY\0MQ_OPEN\0MQ_SENDRECV\0NETFILTER_CFG\0NETFILTER_"
    "PKT\0"
    "OBJ_PID\0PATH\0PROCTITLE\0RESP_ACCT_LOCK\0RESP_ACCT_LOCK_TIMED\0RESP_ACCT_"
    "REMOTE\0RESP_ACCT_UNLOCK_TIMED\0RESP_ALERT\0RESP_ANOMALY\0RESP_EXEC\0"
    "RESP_HALT\0RESP_KILL_PROC\0RESP_SEBOOL\0RESP_SINGLE\0RESP_TERM_"
    "ACCESS\0RESP_TERM_LOCK\0ROLE_ASSIGN\0ROLE_MODIFY\0ROLE_REMOVE\0SECCOMP\0"
    "SELINUX_ERR\0SERVICE_START\0SERVICE_"
    "STOP\0SOCKADDR\0SOCKETCALL\0SYSCALL\0SYSTEM_BOOT\0SYSTEM_RUNLEVEL\0SYSTEM_"
    "SHUTDOWN\0TEST\0"
    "TRUSTED_APP\0TTY\0USER\0USER_ACCT\0USER_AUTH\0USER_AVC\0USER_"
    "CHAUTHTOK\0USER_CMD\0USER_END\0USER_ERR\0"
    "USER_LABELED_EXPORT\0USER_LOGIN\0USER_LOGOUT\0USER_MAC_CONFIG_"
    "CHANGE\0USER_MAC_POLICY_LOAD\0USER_MGMT\0USER_ROLE_CHANGE\0USER_SELINUX_"
    "ERR\0USER_START\0USER_TTY\0"
    "USER_UNLABELED_EXPORT\0USYS_CONFIG\0VIRT_CONTROL\0VIRT_MACHINE_ID\0VIRT_"
    "RESOURCE";
static const unsigned msg_type_s2i_s[] = {
    0,    10,   19,   30,   45,   59,   74,   91,   105,  115,  125,  141,
    161,  181,  201,  217,  230,  243,  256,  270,  287,  302,  327,  343,
    347,  356,  367,  374,  383,  393,  407,  416,  426,  436,  456,  470,
    486,  502,  515,  529,  554,  573,  588,  605,  609,  619,  632,  646,
    659,  673,  684,  698,  712,  725,  735,  744,  754,  766,  770,  777,
    785,  800,  811,  820,  834,  843,  858,  873,  892,  906,  921,  938,
    942,  955,  962,  975,  994,  1009, 1015, 1031, 1047, 1065, 1081, 1098,
    1114, 1131, 1147, 1159, 1171, 1187, 1198, 1214, 1231, 1248, 1253, 1267,
    1277, 1285, 1297, 1311, 1325, 1333, 1338, 1348, 1363, 1384, 1401, 1424,
    1435, 1448, 1458, 1468, 1483, 1495, 1507, 1524, 1539, 1551, 1563, 1575,
    1583, 1595, 1609, 1622, 1631, 1642, 1650, 1662, 1678, 1694, 1699, 1711,
    1715, 1720, 1730, 1740, 1749, 1764, 1773, 1782, 1791, 1811, 1822, 1834,
    1857, 1878, 1888, 1905, 1922, 1933, 1942, 1964, 1976, 1989, 2005,
};
static const int msg_type_s2i_i[] = {
    1116, 1114, 1701, 2111, 2114, 2107, 2110, 2115, 2112, 1702, 2103, 2100,
    2104, 2102, 2101, 2105, 2106, 2113, 2116, 1700, 2108, 2109, 2117, 1400,
    1402, 1321, 1322, 1119, 1125, 1305, 1103, 1104, 1110, 2405, 2408, 2409,
    2404, 2402, 2403, 2401, 2406, 2407, 2400, 1307, 1118, 1202, 1207, 1208,
    1203, 1201, 1206, 1205, 1200, 1117, 1115, 2307, 2308, 1320, 1309, 1317,
    1328, 2309, 1126, 1133, 1132, 1800, 1803, 1801, 1804, 1805, 1802, 1303,
    1311, 2000, 1316, 2304, 2303, 1006, 1407, 1408, 1405, 1411, 1413, 1412,
    1414, 1415, 1409, 1410, 1403, 1404, 1406, 1416, 1417, 1323, 1315, 1314,
    1312, 1313, 1325, 1324, 1318, 1302, 1327, 2207, 2205, 2204, 2206, 2201,
    2200, 2210, 2212, 2202, 2209, 2211, 2203, 2208, 2301, 2311, 2302, 1326,
    1401, 1130, 1131, 1306, 1304, 1300, 1127, 1129, 1128, 1120, 1121, 1319,
    1005, 1101, 1100, 1107, 1108, 1123, 1106, 1109, 2305, 1112, 1113, 2312,
    2310, 1102, 2300, 1122, 1105, 1124, 2306, 1111, 2500, 2502, 2501,
};
static int msg_type_s2i(const char* s, int* value) {
  size_t len, i;
  len = strlen(s);
  {
    char copy[len + 1];
    for (i = 0; i < len; i++) {
      char c = s[i];
      copy[i] = GT_ISLOWER(c) ? c - 'a' + 'A' : c;
    }
    copy[i] = 0;
    return s2i__(
        msg_type_strings, msg_type_s2i_s, msg_type_s2i_i, 155, copy, value);
  }
}
static const int msg_type_i2s_i[] = {
    1005, 1006, 1100, 1101, 1102, 1103, 1104, 1105, 1106, 1107, 1108, 1109,
    1110, 1111, 1112, 1113, 1114, 1115, 1116, 1117, 1118, 1119, 1120, 1121,
    1122, 1123, 1124, 1125, 1126, 1127, 1128, 1129, 1130, 1131, 1132, 1133,
    1200, 1201, 1202, 1203, 1205, 1206, 1207, 1208, 1300, 1302, 1303, 1304,
    1305, 1306, 1307, 1309, 1311, 1312, 1313, 1314, 1315, 1316, 1317, 1318,
    1319, 1320, 1321, 1322, 1323, 1324, 1325, 1326, 1327, 1328, 1400, 1401,
    1402, 1403, 1404, 1405, 1406, 1407, 1408, 1409, 1410, 1411, 1412, 1413,
    1414, 1415, 1416, 1417, 1700, 1701, 1702, 1800, 1801, 1802, 1803, 1804,
    1805, 2000, 2100, 2101, 2102, 2103, 2104, 2105, 2106, 2107, 2108, 2109,
    2110, 2111, 2112, 2113, 2114, 2115, 2116, 2117, 2200, 2201, 2202, 2203,
    2204, 2205, 2206, 2207, 2208, 2209, 2210, 2211, 2212, 2300, 2301, 2302,
    2303, 2304, 2305, 2306, 2307, 2308, 2309, 2310, 2311, 2312, 2400, 2401,
    2402, 2403, 2404, 2405, 2406, 2407, 2408, 2409, 2500, 2501, 2502,
};
static const unsigned msg_type_i2s_s[] = {
    1715, 1009, 1730, 1720, 1878, 407,  416,  1922, 1773, 1740, 1749, 1782,
    426,  1964, 1811, 1822, 10,   735,  0,    725,  609,  374,  1694, 1699,
    1905, 1764, 1933, 383,  811,  1650, 1678, 1662, 1595, 1609, 834,  820,
    712,  673,  619,  659,  698,  684,  632,  646,  1642, 1333, 938,  1631,
    393,  1622, 605,  770,  942,  1277, 1285, 1267, 1253, 962,  777,  1325,
    1711, 766,  356,  367,  1248, 1311, 1297, 1575, 1338, 785,  343,  1583,
    347,  1171, 1187, 1047, 1198, 1015, 1031, 1147, 1159, 1065, 1098, 1081,
    1114, 1131, 1214, 1231, 270,  19,   115,  843,  873,  921,  858,  892,
    906,  955,  141,  201,  181,  125,  161,  217,  230,  59,   287,  302,
    74,   30,   105,  243,  45,   91,   256,  327,  1435, 1424, 1468, 1507,
    1384, 1363, 1401, 1348, 1524, 1483, 1448, 1495, 1458, 1888, 1539, 1563,
    994,  975,  1791, 1942, 744,  754,  800,  1857, 1551, 1834, 588,  529,
    502,  515,  486,  436,  554,  573,  456,  470,  1976, 2005, 1989,
};
static const char* msg_type_i2s(int v) {
  return i2s_bsearch__(
      msg_type_strings, msg_type_i2s_i, msg_type_i2s_s, 155, v);
}
