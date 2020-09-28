/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _CALCULADORA_H_RPCGEN
#define _CALCULADORA_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct datos {
	char opcion;
	float dato1;
	float dato2;
};
typedef struct datos datos;

#define calculadora_PRG 0x20000001
#define calculadora_VER 1

#if defined(__STDC__) || defined(__cplusplus)
#define calculadora 1
extern  float * calculadora_1(datos *, CLIENT *);
extern  float * calculadora_1_svc(datos *, struct svc_req *);
extern int calculadora_prg_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define calculadora 1
extern  float * calculadora_1();
extern  float * calculadora_1_svc();
extern int calculadora_prg_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_datos (XDR *, datos*);

#else /* K&R C */
extern bool_t xdr_datos ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_CALCULADORA_H_RPCGEN */
