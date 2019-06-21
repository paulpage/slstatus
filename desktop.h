/* interval between updates (in ms) */
const unsigned int interval = 5000;


/* text to show if no value can be retrieved */
static const char unknown_str[] = "n/a";

/* maximum output string length */
#define MAXLEN 2048

/* See config.def.h for a list of possible options */
static const struct arg args[] = {
    { datetime, " %s | ", "%F %H:%M" },
    { ipv4, "%s ", "enp3s0" },
};
