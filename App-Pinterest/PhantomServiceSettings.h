//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "TBase.h"

@class NSString, PhantomImageSettings;

@interface PhantomServiceSettings : NSObject <TBase, NSCoding>
{
    BOOL __image;
    PhantomImageSettings *__imageSettings;
    BOOL __redirectUrl;
    BOOL __redirectHeaders;
    BOOL __redirectBody;
    short __maxTimeOut;
    BOOL __rawResult;
    BOOL __image_isset;
    BOOL __imageSettings_isset;
    BOOL __redirectUrl_isset;
    BOOL __redirectHeaders_isset;
    BOOL __redirectBody_isset;
    BOOL __maxTimeOut_isset;
    BOOL __rawResult_isset;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetRawResult;
- (BOOL)rawResultIsSet;
@property(nonatomic, getter=rawResult, setter=setRawResult:) BOOL rawResult;
- (void)unsetMaxTimeOut;
- (BOOL)maxTimeOutIsSet;
@property(nonatomic, getter=maxTimeOut, setter=setMaxTimeOut:) short maxTimeOut;
- (void)unsetRedirectBody;
- (BOOL)redirectBodyIsSet;
@property(nonatomic, getter=redirectBody, setter=setRedirectBody:) BOOL redirectBody;
- (void)unsetRedirectHeaders;
- (BOOL)redirectHeadersIsSet;
@property(nonatomic, getter=redirectHeaders, setter=setRedirectHeaders:) BOOL redirectHeaders;
- (void)unsetRedirectUrl;
- (BOOL)redirectUrlIsSet;
@property(nonatomic, getter=redirectUrl, setter=setRedirectUrl:) BOOL redirectUrl;
- (void)unsetImageSettings;
- (BOOL)imageSettingsIsSet;
@property(retain, nonatomic, getter=imageSettings, setter=setImageSettings:) PhantomImageSettings *imageSettings;
- (void)unsetImage;
- (BOOL)imageIsSet;
@property(nonatomic, getter=image, setter=setImage:) BOOL image;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithImage:(BOOL)arg1 imageSettings:(id)arg2 redirectUrl:(BOOL)arg3 redirectHeaders:(BOOL)arg4 redirectBody:(BOOL)arg5 maxTimeOut:(short)arg6 rawResult:(BOOL)arg7;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

