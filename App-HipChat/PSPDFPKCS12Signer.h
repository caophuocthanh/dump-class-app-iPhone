//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSPDFSigner.h"

@class NSString, PSPDFPKCS12, PSPDFRSAKey;

@interface PSPDFPKCS12Signer : PSPDFSigner
{
    NSString *_displayName;
    PSPDFPKCS12 *_p12;
    PSPDFRSAKey *_pkey;
}

@property(retain, nonatomic) PSPDFRSAKey *pkey; // @synthesize pkey=_pkey;
@property(readonly, nonatomic) PSPDFPKCS12 *p12; // @synthesize p12=_p12;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (void)signFormElement:(id)arg1 usingPassword:(id)arg2 writeTo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithDisplayName:(id)arg1 PKCS12:(id)arg2;
- (void)requestSigningCertificate:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

