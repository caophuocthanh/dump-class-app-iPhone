//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBUserSession;

@interface FBContactSyncNetworker : NSObject
{
    FBUserSession *_session;
}

- (void).cxx_destruct;
- (void)settingPostWithSetting:(id)arg1 successBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)uploadWithImportId:(id)arg1 contactImporterFlow:(int)arg2 insertedRecord:(id)arg3 removedRecord:(id)arg4 isFullUpload:(BOOL)arg5 successBlock:(CDUnknownBlockType)arg6 errorBlock:(CDUnknownBlockType)arg7;
- (id)initWithSession:(id)arg1;

@end

