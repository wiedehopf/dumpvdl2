/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "fans-cpdlc.asn1"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_FANSLatitudeDirection_H_
#define	_FANSLatitudeDirection_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum FANSLatitudeDirection {
	FANSLatitudeDirection_north	= 0,
	FANSLatitudeDirection_south	= 1
} e_FANSLatitudeDirection;

/* FANSLatitudeDirection */
typedef long	 FANSLatitudeDirection_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSLatitudeDirection;
asn_struct_free_f FANSLatitudeDirection_free;
asn_struct_print_f FANSLatitudeDirection_print;
asn_constr_check_f FANSLatitudeDirection_constraint;
ber_type_decoder_f FANSLatitudeDirection_decode_ber;
der_type_encoder_f FANSLatitudeDirection_encode_der;
xer_type_decoder_f FANSLatitudeDirection_decode_xer;
xer_type_encoder_f FANSLatitudeDirection_encode_xer;
per_type_decoder_f FANSLatitudeDirection_decode_uper;
per_type_encoder_f FANSLatitudeDirection_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _FANSLatitudeDirection_H_ */
#include <asn_internal.h>