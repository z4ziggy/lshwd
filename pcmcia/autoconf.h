/*
  Automatically generated by 'make config' -- don't edit!
*/
#define LINUX "/var/abs/local/kernel26/kernel26-nitro/src/linux-2.6.9-nitro4"
#define PREFIX ""
#define KCC "cc"
#define UCC "cc"
#define LD "ld"
#define KFLAGS ""
#define UFLAGS ""
#define PCDEBUG ""
#define USE_PM 1
#undef  UNSAFE_TOOLS
#define CONFIG_CARDBUS 1
#undef  CONFIG_PNP_BIOS
#define UTS_RELEASE "2.6.9-nitro4"
#define UTS_VERSION "#3 Fri Nov 19 19:35:06 IST 2004"
#define LINUX_VERSION_CODE 132617
#define KERNEL_VERSION(a,b,c) (((a) << 16) + ((b) << 8) + (c))

#define MODDIR "/lib/modules/2.6.9-nitro4"

/* Options from /var/abs/local/kernel26/kernel26-nitro/src/linux-2.6.9-nitro4/.config */
#define CONFIG_MODULES 1
#define CONFIG_PCMCIA 1
#undef  CONFIG_SMP
#define CONFIG_PREEMPT 1
#undef  CONFIG_HIGHMEM
#define CONFIG_HZ 1000
#define CONFIG_PCI 1
#define CONFIG_PM 1
#define CONFIG_SCSI 1
#undef  CONFIG_IEEE1394
#define CONFIG_INET 1
#undef  CONFIG_NET_PCMCIA_RADIO
#undef  CONFIG_TR
#undef  CONFIG_NET_FASTROUTE
#undef  CONFIG_NET_DIVERT
#define CONFIG_MODVERSIONS 1
#undef  CONFIG_DEBUG_KERNEL
#define CONFIG_PREEMPT 1
#define CONFIG_PROC_FS 1
#define CONFIG_X86_L1_CACHE_BYTES 32
#define CONFIG_X86_L1_CACHE_SHIFT 5
#define CONFIG_PCI_QUIRKS 1
#undef  CONFIG_EISA
#define CONFIG_X86_CMPXCHG 1
#undef  CONFIG_X86_PAE
#undef  CONFIG_RWSEM_GENERIC_SPINLOCK
#define CONFIG_RWSEM_XCHGADD_ALGORITHM 1
#define ARCH "i386"
#define HOST_ARCH "i386"
#define AFLAGS ""
#define CONFIG_ISA 1
#define CONFIG_UID16 1

#define HAS_PROC_BUS 1
#undef  NEW_AIC7XXX
#define AIC7XXX_H <../drivers/scsi/aic7xxx/aic7xxx_osm.h>
#undef  SYSV_INIT
#define HAS_WORDEXP 1
#define MANDIR "/usr/man/"
#define XMANDIR "/usr/X11R6/man/"
