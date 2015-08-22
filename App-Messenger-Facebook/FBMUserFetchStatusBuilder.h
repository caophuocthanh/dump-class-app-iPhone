//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBMUserFetchStatusBuilder : NSObject
{
    BOOL _hasFetchedUserId;
    BOOL _hasFetchedIdentityType;
    BOOL _hasFetchedName;
    BOOL _hasFetchedPhoneticName;
    BOOL _hasFetchedNickname;
    BOOL _hasFetchedHasMessenger;
    BOOL _hasFetchedCanInstallMessenger;
    BOOL _hasFetchedImageUrls;
    BOOL _hasFetchedCommunicationRank;
    BOOL _hasFetchedIsMemorialized;
    BOOL _hasFetchedIsPartial;
    BOOL _hasFetchedBlockedByViewerStatus;
}

+ (id)userFetchStatusFromExistingUserFetchStatus:(id)arg1;
+ (id)userFetchStatus;
- (id)withHasFetchedBlockedByViewerStatus:(BOOL)arg1;
- (id)withHasFetchedIsPartial:(BOOL)arg1;
- (id)withHasFetchedIsMemorialized:(BOOL)arg1;
- (id)withHasFetchedCommunicationRank:(BOOL)arg1;
- (id)withHasFetchedImageUrls:(BOOL)arg1;
- (id)withHasFetchedCanInstallMessenger:(BOOL)arg1;
- (id)withHasFetchedHasMessenger:(BOOL)arg1;
- (id)withHasFetchedNickname:(BOOL)arg1;
- (id)withHasFetchedPhoneticName:(BOOL)arg1;
- (id)withHasFetchedName:(BOOL)arg1;
- (id)withHasFetchedIdentityType:(BOOL)arg1;
- (id)withHasFetchedUserId:(BOOL)arg1;
- (id)build;

@end
