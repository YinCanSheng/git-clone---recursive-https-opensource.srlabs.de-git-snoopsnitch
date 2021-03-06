/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../asn/PDU-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_UtranMobilityInformation_v690ext_IEs_H_
#define	_UtranMobilityInformation_v690ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PLMN_Identity;

/* UtranMobilityInformation-v690ext-IEs */
typedef struct UtranMobilityInformation_v690ext_IEs {
	struct PLMN_Identity	*primary_plmn_Identity	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UtranMobilityInformation_v690ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UtranMobilityInformation_v690ext_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PLMN-Identity.h"

#endif	/* _UtranMobilityInformation_v690ext_IEs_H_ */
#include <asn_internal.h>
