// SetSoapSecurityDigestImpl.h: interface for the CSetSoapSecurityDigestImpl class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_SETSOAPSECURITYDIGESTIMPL_H__F85C8ADA_4A64_4FF9_AA84_2E8B1DD85F29__INCLUDED_)
#define AFX_SETSOAPSECURITYDIGESTIMPL_H__F85C8ADA_4A64_4FF9_AA84_2E8B1DD85F29__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "iSetSoapSecurity.h"

class CSetSoapSecurityDigestImpl: implements ISetSoapSecurity
{
public:
	CSetSoapSecurityDigestImpl();
	virtual ~CSetSoapSecurityDigestImpl();
public:
	ImplInfMethod(int setSecurity(struct soap* psoap, CBaseSoapSecurityInfo* securityInfo));
private:
	void genrateDigest(unsigned char *pwddigest_out, unsigned char *pwd, char *nonc, char *time);
	int base64_64_to_bits(char *out, const char *in);
	void base64_bits_to_64(unsigned char *out, const unsigned char *in);
};

#endif // !defined(AFX_SETSOAPSECURITYDIGESTIMPL_H__F85C8ADA_4A64_4FF9_AA84_2E8B1DD85F29__INCLUDED_)
