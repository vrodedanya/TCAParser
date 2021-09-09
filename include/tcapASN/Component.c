/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TCAPMessages"
 * 	found in "TCAPMessages.asn"
 * 	`asn1c -no-gen-OER`
 */

#include "Component.h"

asn_per_constraints_t asn_PER_type_Component_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  4 }	/* (0..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_Component_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Component, choice.invoke),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Invoke,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"invoke"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Component, choice.returnResultLast),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReturnResult,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"returnResultLast"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Component, choice.returnError),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReturnError,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"returnError"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Component, choice.reject),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Reject,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reject"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Component, choice.returnResultNotLast),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReturnResult,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"returnResultNotLast"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_Component_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 0, 0, 0 }, /* invoke */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 1, 0, 0 }, /* returnResultLast */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 2, 0, 0 }, /* returnError */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 3, 0, 0 }, /* reject */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 4, 0, 0 } /* returnResultNotLast */
};
asn_CHOICE_specifics_t asn_SPC_Component_specs_1 = {
	sizeof(struct Component),
	offsetof(struct Component, _asn_ctx),
	offsetof(struct Component, present),
	sizeof(((struct Component *)0)->present),
	asn_MAP_Component_tag2el_1,
	5,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_Component = {
	"Component",
	"Component",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_Component_constr_1, CHOICE_constraint },
	asn_MBR_Component_1,
	5,	/* Elements count */
	&asn_SPC_Component_specs_1	/* Additional specs */
};

