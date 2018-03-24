/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "fans-cpdlc.asn1"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_FANSTimePositionAltitude_H_
#define	_FANSTimePositionAltitude_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FANSTime.h"
#include "FANSPosition.h"
#include "FANSAltitude.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* FANSTimePositionAltitude */
typedef struct FANSTimePositionAltitude {
	FANSTime_t	 time;
	FANSPosition_t	 position;
	FANSAltitude_t	 altitude;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FANSTimePositionAltitude_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSTimePositionAltitude;

#ifdef __cplusplus
}
#endif

#endif	/* _FANSTimePositionAltitude_H_ */
#include <asn_internal.h>