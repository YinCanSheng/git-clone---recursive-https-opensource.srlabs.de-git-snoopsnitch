/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../asn/PDU-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_URAUpdate_H_
#define	_URAUpdate_H_


#include <asn_application.h>

/* Including external dependencies */
#include "U-RNTI.h"
#include "URA-UpdateCause.h"
#include "ProtocolErrorIndicatorWithMoreInfo.h"
#include <BIT_STRING.h>
#include "UraUpdate-v770ext-IEs.h"
#include "URAUpdate-v860ext-IEs.h"
#include "URAUpdate-va40ext-IEs.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* URAUpdate */
typedef struct URAUpdate {
	U_RNTI_t	 u_RNTI;
	URA_UpdateCause_t	 ura_UpdateCause;
	ProtocolErrorIndicatorWithMoreInfo_t	 protocolErrorIndicator;
	struct URAUpdate__laterNonCriticalExtensions {
		BIT_STRING_t	*uraUpdate_r3_add_ext	/* OPTIONAL */;
		struct URAUpdate__laterNonCriticalExtensions__v770NonCriticalExtensions {
			UraUpdate_v770ext_IEs_t	 uraUpdate_v770ext;
			struct URAUpdate__laterNonCriticalExtensions__v770NonCriticalExtensions__v860NonCriticalExtensions {
				URAUpdate_v860ext_IEs_t	 uraUpdate_v860ext;
				struct URAUpdate__laterNonCriticalExtensions__v770NonCriticalExtensions__v860NonCriticalExtensions__va40NonCriticalExtensions {
					URAUpdate_va40ext_IEs_t	 uraUpdate_va40ext;
					struct URAUpdate__laterNonCriticalExtensions__v770NonCriticalExtensions__v860NonCriticalExtensions__va40NonCriticalExtensions__nonCriticalExtensions {
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} *nonCriticalExtensions;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *va40NonCriticalExtensions;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *v860NonCriticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *v770NonCriticalExtensions;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *laterNonCriticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} URAUpdate_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_URAUpdate;

#ifdef __cplusplus
}
#endif

#endif	/* _URAUpdate_H_ */
#include <asn_internal.h>
