/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_UE_RadioAccessCapabBandFDD3_H_
#define	_UE_RadioAccessCapabBandFDD3_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RadioFrequencyBandFDD.h"
#include "RadioFrequencyBandFDD2.h"
#include "MeasurementCapabilityExt3.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UE-RadioAccessCapabBandFDD3 */
typedef struct UE_RadioAccessCapabBandFDD3 {
	RadioFrequencyBandFDD_t	*radioFrequencyBandFDD	/* OPTIONAL */;
	RadioFrequencyBandFDD2_t	*radioFrequencyBandFDD2	/* OPTIONAL */;
	MeasurementCapabilityExt3_t	 measurementCapability3;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_RadioAccessCapabBandFDD3_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_RadioAccessCapabBandFDD3;

#ifdef __cplusplus
}
#endif

#endif	/* _UE_RadioAccessCapabBandFDD3_H_ */
#include <asn_internal.h>
