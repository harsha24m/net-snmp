#include <net-snmp/version.h>

const char     *NetSnmpVersionInfo = "5.0.6";

const char     *
netsnmp_get_version()
{
    return NetSnmpVersionInfo;
}
