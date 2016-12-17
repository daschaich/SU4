#ifndef _PARAMS_H
#define _PARAMS_H

#include "../include/macros.h"  /* For MAXFILENAME */

/* structure for passing simulation parameters to each node */
typedef struct {
	int stopflag;   /* 1 if it is time to stop */
    /* INITIALIZATION PARAMETERS */
	int nx,ny,nz,nt;  /* lattice dimensions */
	int iseed;	/* for random numbers */
	int nflavors;	/* the number of flavors */
    /*  REPEATING BLOCK */
	int warms;	/* the number of warmup trajectories */
	int trajecs;	/* the number of real trajectories */
        Real traj_length;    /* the length of each trajectory */
        int nsteps[MAX_MASSES+1];
	int propinterval;     /* number of trajectories between measurements */
	int startflag;  /* what to do for beginning lattice */
	int saveflag;   /* what to do with lattice at end */
        int num_masses; /* number of masses */
	Real beta,kappa; /* gauge coupling, quark hopping parameter */
	Real clov_c,u0;  /* clover coefficient, <Tr(U_p)>^{1/4} */
#ifdef SF  /* Schrodinger Functional parameters */
        int bc_flag;          /* flag for gauge field boundary values */
        int ct_flag;          /* flag for activating perturbative c_t */
        int ctilde_flag;      /* flag for activating perturbative ctilde_t */
        Real ferm_twist_phase; /* twist angle for spatial b.c.        */
#endif
	int niter; 	/* maximum number of c.g. iterations */
	int nrestart; 	/* maximum number of c.g. restarts */
	Real rsqmin,rsqprop;  /* for deciding on convergence */
	char startfile[MAXFILENAME],savefile[MAXFILENAME];
	char stringLFN[MAXFILENAME];  /** ILDG LFN if applicable ***/
}  params;

#endif /* _PARAMS_H */