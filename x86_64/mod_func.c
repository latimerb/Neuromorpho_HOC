#include <stdio.h>
#include "hocdec.h"
extern int nrnmpi_myid;
extern int nrn_nobanner_;

extern void _CE_cal_reg(void);
extern void _CE_capool_reg(void);
extern void _CE_cat_reg(void);
extern void _CE_ia_reg(void);
extern void _CE_ih_reg(void);
extern void _CE_Ihva_reg(void);
extern void _CE_im_reg(void);
extern void _CE_kdr_reg(void);
extern void _CE_leak_reg(void);
extern void _CE_na_reg(void);

void modl_reg(){
  if (!nrn_nobanner_) if (nrnmpi_myid < 1) {
    fprintf(stderr, "Additional mechanisms from files\n");

    fprintf(stderr," CE_cal.mod");
    fprintf(stderr," CE_capool.mod");
    fprintf(stderr," CE_cat.mod");
    fprintf(stderr," CE_ia.mod");
    fprintf(stderr," CE_ih.mod");
    fprintf(stderr," CE_Ihva.mod");
    fprintf(stderr," CE_im.mod");
    fprintf(stderr," CE_kdr.mod");
    fprintf(stderr," CE_leak.mod");
    fprintf(stderr," CE_na.mod");
    fprintf(stderr, "\n");
  }
  _CE_cal_reg();
  _CE_capool_reg();
  _CE_cat_reg();
  _CE_ia_reg();
  _CE_ih_reg();
  _CE_Ihva_reg();
  _CE_im_reg();
  _CE_kdr_reg();
  _CE_leak_reg();
  _CE_na_reg();
}
