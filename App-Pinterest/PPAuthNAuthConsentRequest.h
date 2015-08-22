//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PPServiceRequest.h"

@class NSSet, PPAuthNAuthCredentials;

@interface PPAuthNAuthConsentRequest : PPServiceRequest
{
    PPAuthNAuthCredentials *_credentials;
    NSSet *_scopeStrings;
}

+ (id)baseURLforEnvironment:(id)arg1;
+ (Class)responseClass;
@property(retain, nonatomic) NSSet *scopeStrings; // @synthesize scopeStrings=_scopeStrings;
@property(retain, nonatomic) PPAuthNAuthCredentials *credentials; // @synthesize credentials=_credentials;
- (void).cxx_destruct;
- (id)body;
- (id)headers;
- (id)initWithEnvironment:(id)arg1 credentials:(id)arg2 scopeStrings:(id)arg3;
- (id)path;

@end
