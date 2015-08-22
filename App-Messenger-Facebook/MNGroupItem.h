//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class FBMStringWithRedactedDescription, MNProfileImageInfo, NSString;

@interface MNGroupItem : FBValueObject <NSCopying>
{
    NSString *_threadFbId;
    MNProfileImageInfo *_profileImageInfo;
    FBMStringWithRedactedDescription *_groupName;
    NSString *_groupTimestamp;
    NSString *_membersNameList;
    unsigned int _unreadCount;
    FBMStringWithRedactedDescription *_accessibilityLabel;
}

@property(readonly, copy, nonatomic) FBMStringWithRedactedDescription *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(readonly, nonatomic) unsigned int unreadCount; // @synthesize unreadCount=_unreadCount;
@property(readonly, copy, nonatomic) NSString *membersNameList; // @synthesize membersNameList=_membersNameList;
@property(readonly, copy, nonatomic) NSString *groupTimestamp; // @synthesize groupTimestamp=_groupTimestamp;
@property(readonly, copy, nonatomic) FBMStringWithRedactedDescription *groupName; // @synthesize groupName=_groupName;
@property(readonly, copy, nonatomic) MNProfileImageInfo *profileImageInfo; // @synthesize profileImageInfo=_profileImageInfo;
@property(readonly, copy, nonatomic) NSString *threadFbId; // @synthesize threadFbId=_threadFbId;
- (void).cxx_destruct;
- (id)initWithThreadFbId:(id)arg1 profileImageInfo:(id)arg2 groupName:(id)arg3 groupTimestamp:(id)arg4 membersNameList:(id)arg5 unreadCount:(unsigned int)arg6 accessibilityLabel:(id)arg7;

@end
