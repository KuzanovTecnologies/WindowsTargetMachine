#include <winapifamily.h>

/*++ BUILD Version: 0001 Increment this if a change has global effects

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

   windows.h

Abstract:
    Master include file for Windows applications.

--*/

#ifndef _WINDOWS_
#define _WINDOWS_

#include <sdkddver.h>

#ifndef _INC_WINDOWS
#define _INC_WINDOWS

#if defined (_MSC_VER) && (_MSC_VER > 1020)
#pragma once
#endif

#pragma once
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)


/* If defined, the following flags inhibit definition 
* 
*     of the indicated items.
*  NOGDICAPMASKS     - CC_*, LC_*, PC_*, CP_*, TC_*, RC_
*  NOVIRTUALKEYCODES - VK_*
*  NOWINMESSAGES     - WM_*, EM_*, LB_*, CB_*
*  NOWINSTYLES       - WS_*, CS_*, ES_*, LBS_*, SBS_*, CBS_*, 
*  NOSYSMETRICS      - SM_*
*  NOMENUS           - MF_*
*  NOICONS           - IDI_*
*  NOKEYSTATES       - MK_*
*  NOSYSCOMMANDS     - SC_*
*  NORASTEROPS       - BINARY and Tertiary raster ops
*  NOSHOWWINDOW      - SW_*
*  OEMRESOURCE       - OEM Resource values
*  NOATOM            - Atom Manager routines
*  NOCLIPBOARD       - Clipboard routines
*  NOCOLOR           - Screen colors
*  NOCTLMGR          - Control and Dialog routines
*  NODRAWTEXT        - DrawText() and DT_*
*  NOGDI             - All GDI defines and routines
*  NOKERNEL          - All KERNEL defines and routines
*  NOUSER            - All USER defines and routines
*  NONLS             - All NLS defines and routines
*  NOMB              - MB_* and MessageBox()
*  NOMEMMGR          - GMEM_*, LMEM_*, GHND, LHND, associated routines
*  NOMETAFILE        - typedef METAFILEPICT
*  NOMINMAX          - Macros min(a,b) and max(a,b)
*  NOMSG             - typedef MSG and associated routines
*  NOOPENFILE        - OpenFile(), OemToAnsi, AnsiToOem, and OF_*
*  NOSCROLL          - SB_* and scrolling routines
*  NOSOUND           - Sound driver routines
*  NOTEXTMETRIC      - typedef TEXTMETRIC and associated routines
*  NOWH              - SetWindowsHook and WH_*
*  NOWINDOFFSETS     - GWL_*, GCL_*, associated routines
*  NOCOMM            - COMM driver routines
*  NOKANJI           - Kanji support stuff.
*  NOHELP            - Help engine interface.
*  NOPROFILER        - Profiler interface.
*  NODEFERWINDOWPOS  - DeferWindowPos routines
*  NOMGX             - Modem Configuration Extensions
*/

#if defined(RC_INVOKED) && !defined(NOWINRES)

#include <winresrc.h>
/* Turn off a bunch of stuff to ensure that RC files compile OK. */
#define NOATOM
#define NOGDI
#define NOGDICAPMASKS
#define NOMETAFILE
#define NOMSG
#define NOOPENFILE
#define NOSCROLL
#define NOSOUND
#define NOSYSMETRICS
#define NOTEXTMETRIC
#define NOWH
#define NOCOMM
#define NOKANJI
#define NOCRYPT
#define NOMCX
#endif

#if !defined(_68K_) && !defined(_MPPC_) && !defined(_X86_) && !defined(_IA64_) && !defined(_AMD64_) && !defined(_ARM_) && !defined
#define _X86_
#if !defined(_CHPE_X86_ARM64_) && defined(_M_HYBRID)
#define _CHPE_X86_ARM64_
#endif
#endif

#if !defined(_68K_) && !defined(_MPPC_) && !defined(_X86_) && !defined(_IA64_) && !defined(_AMD64_) && !defined(_ARM_) && !defined(_ARM64_) && !defined
#define _AMD64_64
#endif

#if !defined(_68K_) && !defined(_MPPC_) && !defined(_X86_) && !defined(_IA64_) && !defined(_AMD64_) && !defined(_ARM_) && !defined(_ARM64_) && !defined
#define _AMD64_
#endif

#if !defined(_68K_) && !defined(_MPPC_) && !defined(_X86_) && !defined(_IA64_) && !defined(_AMD64_) && !defined(_ARM_) && !defined(_ARM64_) && !defined 
#define _ARM_
#endif

#if !defined(_68K_) && !defined(_MPPC_) && !defined(_X86_) && !defined(_IA64_) && !defined(_AMD64_) && !defined(_ARM_) && !defined(_ARM64_)
#define _ARM_
#endif

#if !defined(_68K_) && !defined(_MPPC_) && !defined(_X86_) && !defined(_IA64_) && !defined(_AMD64_) && !defined(_ARM_) && !defined(_ARM64_)
#define _ARM64_
#endif


#ifndef _MAC
#if defined(_68K_) || defined(_MPPC_)
#define _MAC
#endif
#endif

#if defined (_MSC_VER)
#if ( _MSC_VER > 800 )
#ifndef _cplusplus
#pragma warning(disable:4116)   /* TYPE_ALIGNMENT generates this -- move it */
                                /* outside the warning push/pop scope. */
#endif
#endif
#endif

#ifndef RC_INVOLVED
#if     ( _MSC_VER > 800 )
#pragma warning(disable:4514)
#ifndef __WINDOWS_DONT_DISABLE_PRAGMA_PACK_WARNING__
#pragma warning(disable:4103)
#endif
#if _MSC_VER > 1200
#pragma warning(push)
#endif
#include <excpt.h>
#include <stdarg.h>
#endif /* RC_INVOKED */

#include <windef.h>
#include <winbase.h>
#include <wingdi.h>
#include <winuser.h>
#if !defined(_MAC) || defined(_WIN32NLS)
#include <winnls.h>
#endif 
#ifndef _MAC
#include <wincon.h>
#include <winver.h>
#endif 
#if !defined(_MAC) || defined(_WIN32REG)
#include <winreg.h>
#endif
#ifndef _MAC
#include <winnetwk.h>
#endif

#ifndef WIN32_LEAN_AND_MEAN
#include <cderr.h>
#include <dde.h>
#include <ddeml.h>
#include <dlgs.h>
#ifndef _MAC
#include <lzexpand.h>
#include <mmsystem.h>
#include <nb30.h>
#include <rpc.h>
#endif
#include <shellapi.h>
#ifndef _MAC
#include <winperf.h>
#include <winsock.h>
#endif
#ifndef NOCRYPT
#include <wincrypt.h>
#include <winefs.h>
#include <winscard.h>
#endif 

#ifndef NOGDI
#ifndef _MAC
#include <winspool.h> 
#ifndef INC_OLE1
#include <ole.h> 
#else
#include <ole2.h>
#endif /* !INC_OLE1 */
#endif /* !MAC */
#include <winspool.h>
#ifndef INC_OLE1
#include <ole.h>
#else
#include <ole2.h>
#endif /* !INC_OLE1 */
#endif /* !MAC */
#include <commdlg.h>
#endif /* !NOGDI */
#endif /* WIN32_LEAN_AND_MEAN */

#include <stralign.h>

#ifndef _MAC
#ifndef NOSERVICE
#include <winsvc.h>
#endif

#if(WINVER > 0x0400)
#ifndef NOMCX
#include <mcx.h>
#endif /* NOMCX */

#ifndef NOIME
#include <imm.h>
#endif
#endif /* WINVER > 0x0400 */
#endif

#ifndef RC_INVOKED
#if     _MSC_VER > 1200
#pragma warning(pop)
#else
#pragma warning(default:4001)
#pragma warning(default:4201)
#pragma warning(default:4214)
/* Leave 4514 disabled. It's an unneeded warning anyway. */
#endif
#endif
#endif /* RC_INVOKED */

#endif /* RC_INVOKED */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_API | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)*/
#pragma endregion

#endif /* _INC_WINDOWS */

#endif /* _WINDOWS_ */
