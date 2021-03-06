/*	Public domain	*/

#ifndef _AGAR_WIDGET_FIXED_H_
#define _AGAR_WIDGET_FIXED_H_

#include <agar/gui/widget.h>

#include <agar/gui/begin.h>

typedef struct ag_fixed {
	struct ag_widget wid;
	Uint flags;
#define AG_FIXED_HFILL		0x01	/* Expand to fill available width */
#define AG_FIXED_VFILL		0x02	/* Expand to fill available height */
#define AG_FIXED_NO_UPDATE	0x04	/* Don't call WINDOW_UPDATE() */
#define AG_FIXED_FILLBG		0x08	/* Fill background */
#define AG_FIXED_BOX		0x10	/* Draw a box */
#define AG_FIXED_INVBOX		0x20	/* Draw a box */
#define AG_FIXED_FRAME		0x40	/* Draw a frame */
#define AG_FIXED_EXPAND		(AG_FIXED_HFILL|AG_FIXED_VFILL)
	int wPre, hPre;			/* User geometry */
} AG_Fixed;

/* Begin generated block */
__BEGIN_DECLS
extern DECLSPEC AG_WidgetClass agFixedClass;
extern DECLSPEC AG_Fixed *AG_FixedNew(void *, Uint);
extern DECLSPEC void AG_FixedSizeHint(AG_Fixed *, int, int);
#define AG_FixedPrescale AG_FixedSizeHint
extern DECLSPEC void AG_FixedDrawBg(void *);
extern DECLSPEC void AG_FixedDrawBox(void *);
extern DECLSPEC void AG_FixedDrawInvBox(void *);
extern DECLSPEC void AG_FixedDrawFrame(void *);
extern DECLSPEC void AG_FixedPut(AG_Fixed *, void *, int, int);
extern DECLSPEC void AG_FixedDel(AG_Fixed *, void *);
extern DECLSPEC void AG_FixedSize(AG_Fixed *, void *, int, int);
extern DECLSPEC void AG_FixedMove(AG_Fixed *, void *, int, int);
__END_DECLS
/* Close generated block */

#include <agar/gui/close.h>
#endif /* _AGAR_WIDGET_FIXED_H_ */
