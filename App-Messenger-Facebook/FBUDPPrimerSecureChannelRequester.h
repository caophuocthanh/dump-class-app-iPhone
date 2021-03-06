//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBEncryptedChannelManagerSecureChannelRequesting.h"

@class FBUserSession, NSString;

@interface FBUDPPrimerSecureChannelRequester : NSObject <FBEncryptedChannelManagerSecureChannelRequesting>
{
    FBUserSession *_session;
    id <FBEncryptedChannelManagerSecureBucketIDGenerating> _bucketIDGenerator;
}

- (void).cxx_destruct;
- (id)_parseJSONResult:(id)arg1;
- (void)requestSecureChannelWithCurrentChannelID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithSession:(id)arg1 bucketIDGenerator:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

