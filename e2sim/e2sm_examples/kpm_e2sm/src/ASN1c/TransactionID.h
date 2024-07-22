/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "e2ap-v2.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -gen-PER -no-gen-example`
 */

#ifndef	_TransactionID_H_
#define	_TransactionID_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* TransactionID */
typedef long	 TransactionID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TransactionID;
asn_struct_free_f TransactionID_free;
asn_struct_print_f TransactionID_print;
asn_constr_check_f TransactionID_constraint;
ber_type_decoder_f TransactionID_decode_ber;
der_type_encoder_f TransactionID_encode_der;
xer_type_decoder_f TransactionID_decode_xer;
xer_type_encoder_f TransactionID_encode_xer;
oer_type_decoder_f TransactionID_decode_oer;
oer_type_encoder_f TransactionID_encode_oer;
per_type_decoder_f TransactionID_decode_uper;
per_type_encoder_f TransactionID_encode_uper;
per_type_decoder_f TransactionID_decode_aper;
per_type_encoder_f TransactionID_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _TransactionID_H_ */
#include "asn_internal.h"
