/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TCAPMessages"
 * 	found in "TCAPMessages.asn"
 * 	`asn1c -no-gen-OER`
 */

#include "OPERATION.h"

asn_per_constraints_t asn_PER_type_OPERATION_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_OPERATION_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct OPERATION, choice.localValue),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"localValue"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct OPERATION, choice.globalValue),
		(ASN_TAG_CLASS_UNIVERSAL | (6 << 2)),
		0,
		&asn_DEF_OBJECT_IDENTIFIER,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"globalValue"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_OPERATION_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 0 }, /* localValue */
    { (ASN_TAG_CLASS_UNIVERSAL | (6 << 2)), 1, 0, 0 } /* globalValue */
};
asn_CHOICE_specifics_t asn_SPC_OPERATION_specs_1 = {
	sizeof(struct OPERATION),
	offsetof(struct OPERATION, _asn_ctx),
	offsetof(struct OPERATION, present),
	sizeof(((struct OPERATION *)0)->present),
	asn_MAP_OPERATION_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_OPERATION = {
	"OPERATION",
	"OPERATION",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_OPERATION_constr_1, CHOICE_constraint },
	asn_MBR_OPERATION_1,
	2,	/* Elements count */
	&asn_SPC_OPERATION_specs_1	/* Additional specs */
};

