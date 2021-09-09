/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TCAPMessages"
 * 	found in "TCAPMessages.asn"
 * 	`asn1c -no-gen-OER`
 */

#ifndef	_OrigTransactionID_H_
#define	_OrigTransactionID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* OrigTransactionID */
typedef OCTET_STRING_t	 OrigTransactionID_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_OrigTransactionID_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_OrigTransactionID;
asn_struct_free_f OrigTransactionID_free;
asn_struct_print_f OrigTransactionID_print;
asn_constr_check_f OrigTransactionID_constraint;
ber_type_decoder_f OrigTransactionID_decode_ber;
der_type_encoder_f OrigTransactionID_encode_der;
xer_type_decoder_f OrigTransactionID_decode_xer;
xer_type_encoder_f OrigTransactionID_encode_xer;
per_type_decoder_f OrigTransactionID_decode_uper;
per_type_encoder_f OrigTransactionID_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _OrigTransactionID_H_ */
#include <asn_internal.h>
