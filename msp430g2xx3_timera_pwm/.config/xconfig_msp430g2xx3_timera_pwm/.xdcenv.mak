#
_XDCBUILDCOUNT = 
ifneq (,$(findstring path,$(_USEXDCENV_)))
override XDCPATH = C:/ti/grace_3_10_00_82/packages;C:/ti/msp430/MSPWare_3_30_00_18/driverlib/packages;C:/ti/msp430/MSPWare_3_30_00_18/driverlib;C:/ti/ccsv6/ccs_base;C:/dev/pysbx/msp430g2xx3_timera_pwm/.config
override XDCROOT = C:/ti/xdctools_3_32_00_06_core
override XDCBUILDCFG = ./config.bld
endif
ifneq (,$(findstring args,$(_USEXDCENV_)))
override XDCARGS = 
override XDCTARGETS = 
endif
#
ifeq (0,1)
PKGPATH = C:/ti/grace_3_10_00_82/packages;C:/ti/msp430/MSPWare_3_30_00_18/driverlib/packages;C:/ti/msp430/MSPWare_3_30_00_18/driverlib;C:/ti/ccsv6/ccs_base;C:/dev/pysbx/msp430g2xx3_timera_pwm/.config;C:/ti/xdctools_3_32_00_06_core/packages;..
HOSTOS = Windows
endif
