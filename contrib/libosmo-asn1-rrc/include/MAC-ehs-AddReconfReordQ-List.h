/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_MAC_ehs_AddReconfReordQ_List_H_
#define	_MAC_ehs_AddReconfReordQ_List_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MAC_ehs_AddReconfReordQ;

/* MAC-ehs-AddReconfReordQ-List */
typedef struct MAC_ehs_AddReconfReordQ_List {
	A_SEQUENCE_OF(struct MAC_ehs_AddReconfReordQ) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MAC_ehs_AddReconfReordQ_List_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MAC_ehs_AddReconfReordQ_List;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MAC-ehs-AddReconfReordQ.h"

#endif	/* _MAC_ehs_AddReconfReordQ_List_H_ */
#include <asn_internal.h>
