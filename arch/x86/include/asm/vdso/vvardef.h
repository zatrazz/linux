/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __ASM_VDSO_VVARDEF_H
#define __ASM_VDSO_VVARDEF_H

#ifndef __ASSEMBLY__

#include <asm/vvar.h>

DEFINE_VVAR(struct vdso_data, _vdso_data);
DEFINE_VVAR_SINGLE(struct vdso_rng_data, _vdso_rng_data);

#endif /* !__ASSEMBLY__ */

#endif /* __ASM_VDSO_VVARDEF_H */
