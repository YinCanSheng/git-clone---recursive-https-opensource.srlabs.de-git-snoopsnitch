/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_UL_OLTD_InfoFDD_H_
#define	_UL_OLTD_InfoFDD_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UL_OLTD_InfoFDD__ulOLTDActivation {
	UL_OLTD_InfoFDD__ulOLTDActivation_true	= 0
} e_UL_OLTD_InfoFDD__ulOLTDActivation;

/* UL-OLTD-InfoFDD */
typedef struct UL_OLTD_InfoFDD {
	long	 ulOLTDActivation;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_OLTD_InfoFDD_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ulOLTDActivation_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UL_OLTD_InfoFDD;

#ifdef __cplusplus
}
#endif

#endif	/* _UL_OLTD_InfoFDD_H_ */
#include <asn_internal.h>
