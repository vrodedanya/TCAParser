/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TCAPMessages"
 * 	found in "TCAPMessages.asn"
 * 	`asn1c -no-gen-OER`
 */

#include "ComponentPortion.h"

asn_per_constraints_t asn_PER_type_ComponentPortion_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  1,  0 }	/* (SIZE(1..MAX)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_ComponentPortion_1[] = {
	{ ATF_POINTER, 0, 0,
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_Component,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_ComponentPortion_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (12 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_ComponentPortion_specs_1 = {
	sizeof(struct ComponentPortion),
	offsetof(struct ComponentPortion, _asn_ctx),
	2,	/* XER encoding is XMLValueList */
};
asn_TYPE_descriptor_t asn_DEF_ComponentPortion = {
	"ComponentPortion",
	"ComponentPortion",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_ComponentPortion_tags_1,
	sizeof(asn_DEF_ComponentPortion_tags_1)
		/sizeof(asn_DEF_ComponentPortion_tags_1[0]) - 1, /* 1 */
	asn_DEF_ComponentPortion_tags_1,	/* Same as above */
	sizeof(asn_DEF_ComponentPortion_tags_1)
		/sizeof(asn_DEF_ComponentPortion_tags_1[0]), /* 2 */
	{ 0, &asn_PER_type_ComponentPortion_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_ComponentPortion_1,
	1,	/* Single element */
	&asn_SPC_ComponentPortion_specs_1	/* Additional specs */
};

