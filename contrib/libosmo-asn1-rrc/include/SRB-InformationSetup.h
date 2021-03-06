/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_SRB_InformationSetup_H_
#define	_SRB_InformationSetup_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RB-Identity.h"
#include "RLC-InfoChoice.h"
#include "RB-MappingInfo.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SRB-InformationSetup */
typedef struct SRB_InformationSetup {
	RB_Identity_t	*rb_Identity	/* OPTIONAL */;
	RLC_InfoChoice_t	 rlc_InfoChoice;
	RB_MappingInfo_t	 rb_MappingInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SRB_InformationSetup_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SRB_InformationSetup;

#ifdef __cplusplus
}
#endif

#endif	/* _SRB_InformationSetup_H_ */
#include <asn_internal.h>
