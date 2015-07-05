#ifndef _LATTICE_H
#define _LATTICE_H

/***********************************************/
/***** This unit defines lattice geometry  *****/
/***********************************************/    

#define Lx (4)                                       
#define Ly (4)                                      
#define Lt (4)
#define GRIDPOINTS (Lx*Ly*Lt)                           //Total number of lattice sites

extern int xp[GRIDPOINTS];
extern int xm[GRIDPOINTS];
extern int yp[GRIDPOINTS];
extern int ym[GRIDPOINTS]; 
extern int tp[GRIDPOINTS];
extern int tm[GRIDPOINTS];


int  init_lattice();      //This procedure initializes the above arrays

int idx(int it, int ix, int iy);

#endif
