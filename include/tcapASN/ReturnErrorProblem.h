/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TCAPMessages"
 * 	found in "TCAPMessages.asn"
 * 	`asn1c -no-gen-OER`
 */

#ifndef	_ReturnErrorProblem_H_
#define	_ReturnErrorProblem_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ReturnErrorProblem {
	ReturnErrorProblem_unrecognizedInvokeID	= 0,
	ReturnErrorProblem_returnErrorUnexpected	= 1,
	ReturnErrorProblem_unrecognizedError	= 2,
	ReturnErrorProblem_unexpectedError	= 3,
	ReturnErrorProblem_mistypedParameter	= 4
} e_ReturnErrorProblem;

/* ReturnErrorProblem */
typedef long	 ReturnErrorProblem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ReturnErrorProblem;
asn_struct_free_f ReturnErrorProblem_free;
asn_struct_print_f ReturnErrorProblem_print;
asn_constr_check_f ReturnErrorProblem_constraint;
ber_type_decoder_f ReturnErrorProblem_decode_ber;
der_type_encoder_f ReturnErrorProblem_encode_der;
xer_type_decoder_f ReturnErrorProblem_decode_xer;
xer_type_encoder_f ReturnErrorProblem_encode_xer;
per_type_decoder_f ReturnErrorProblem_decode_uper;
per_type_encoder_f ReturnErrorProblem_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _ReturnErrorProblem_H_ */
#include <asn_internal.h>
