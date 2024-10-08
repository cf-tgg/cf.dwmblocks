/*           __       _                    _     _            _        
 *      ___ / _|   __| |_      ___ __ ___ | |__ | | ___   ___| | _____ 
 *     / __| |_   / _` \ \ /\ / / '_ ` _ \| '_ \| |/ _ \ / __| |/ / __|
 *    | (__|  _| | (_| |\ V  V /| | | | | | |_) | | (_) | (__|   <\__ \
 *     \___|_|    \__,_| \_/\_/ |_| |_| |_|_.__/|_|\___/ \___|_|\_\___/
 */

static const Block blocks[] = {
	/*Icon*/      /*Command*/                       /*Update Interval*/  /*Update Signal*/
	{"",       "cat /tmp/recordingicon 2>/dev/null",         0,               9},
	{"",       "sb-tasks",                                  10,              26},
	{"",       "sb-music",                                   0,              11},
	{"",       "sb-pacpackages",                             0,               8},
	/*{"",       "sb-price xmr Monero XMR 24",              9000,              24},*/
	/*{"",       "sb-price eth Ethereum ETH 23",            9000,              23},*/
	/*{"",       "sb-price btc Bitcoin BTC 21",             9000,              21},*/
	{"",       "sb-torrent",                                20,               7},
	{"",       "sb-memory",                                 10,              14},
	{"",       "sb-disk",                                    0,              13},
	{"",       "sb-cpu",                                    10,              18},
	{"",       "sb-news",                                    0,               6},
	{"",       "sb-moonphase",                            8000,              17},
	/*{"",       "sb-doppler",                                 0,              13},*/
	{"",       "sb-forecast",                             3600,               5},
	{"",       "sb-mailbox",                              1800,              12},
	/*{"",       "sb-nettraf",                                 1,              16},*/
	{"",       "sb-volume",                                  0,              10},
	{"",       "sb-battery",                                 5,               3},
	{"",       "sb-internet",                                5,               4},
	/*{"",       "sb-ipaddress",                               0,              27},*/
	{"",      "sb-kbselect",                                0,              30},
	{"",       "sb-clock ",                                  1,               1},
	/*{"",       "sb-ipaddress",                               0,               27},*/
	/*{"",       "sb-help-icon",                               0,               15},*/
};

/* Block delimiter. NULL character ('\0') means no delimiter. */
static char *delim = " ";

