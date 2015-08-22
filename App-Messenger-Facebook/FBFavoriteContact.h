//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBFavoriteContact.h"

@class NSNumber, NSString;

@interface FBFavoriteContact : NSObject <FBFavoriteContact>
{
    BOOL _contactIsGroupConversation;
    NSString *_contactFBID;
    NSNumber *_contactFavoriteRank;
}

@property(readonly, nonatomic) NSNumber *contactFavoriteRank; // @synthesize contactFavoriteRank=_contactFavoriteRank;
@property(nonatomic) BOOL contactIsGroupConversation; // @synthesize contactIsGroupConversation=_contactIsGroupConversation;
@property(copy, nonatomic) NSString *contactFBID; // @synthesize contactFBID=_contactFBID;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned int hash;
- (void)dealloc;
- (id)initWithFBID:(id)arg1 isGroupContact:(BOOL)arg2 favoriteRank:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
