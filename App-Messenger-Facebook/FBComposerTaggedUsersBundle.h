//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class FBTypedNSArrayOfFBComposerPerson, NSArray;

@interface FBComposerTaggedUsersBundle : FBValueObject <NSCopying, NSCoding>
{
    BOOL _hasTaggedUsers;
    FBTypedNSArrayOfFBComposerPerson *_taggedUsersFromWithWho;
    FBTypedNSArrayOfFBComposerPerson *_taggedUsersFromWithWhoAndPhotos;
    FBTypedNSArrayOfFBComposerPerson *_taggedAndMentionedUsers;
    FBTypedNSArrayOfFBComposerPerson *_taggedUsersFromPhotos;
    FBTypedNSArrayOfFBComposerPerson *_taggedUsersWithoutAuthor;
    NSArray *_autoTaggedUsersFromPhotos;
}

@property(readonly, copy, nonatomic) NSArray *autoTaggedUsersFromPhotos; // @synthesize autoTaggedUsersFromPhotos=_autoTaggedUsersFromPhotos;
@property(readonly, copy, nonatomic) FBTypedNSArrayOfFBComposerPerson *taggedUsersWithoutAuthor; // @synthesize taggedUsersWithoutAuthor=_taggedUsersWithoutAuthor;
@property(readonly, copy, nonatomic) FBTypedNSArrayOfFBComposerPerson *taggedUsersFromPhotos; // @synthesize taggedUsersFromPhotos=_taggedUsersFromPhotos;
@property(readonly, copy, nonatomic) FBTypedNSArrayOfFBComposerPerson *taggedAndMentionedUsers; // @synthesize taggedAndMentionedUsers=_taggedAndMentionedUsers;
@property(readonly, copy, nonatomic) FBTypedNSArrayOfFBComposerPerson *taggedUsersFromWithWhoAndPhotos; // @synthesize taggedUsersFromWithWhoAndPhotos=_taggedUsersFromWithWhoAndPhotos;
@property(readonly, copy, nonatomic) FBTypedNSArrayOfFBComposerPerson *taggedUsersFromWithWho; // @synthesize taggedUsersFromWithWho=_taggedUsersFromWithWho;
@property(readonly, nonatomic) BOOL hasTaggedUsers; // @synthesize hasTaggedUsers=_hasTaggedUsers;
- (void).cxx_destruct;
- (id)initWithHasTaggedUsers:(BOOL)arg1 taggedUsersFromWithWho:(id)arg2 taggedUsersFromWithWhoAndPhotos:(id)arg3 taggedAndMentionedUsers:(id)arg4 taggedUsersFromPhotos:(id)arg5 taggedUsersWithoutAuthor:(id)arg6 autoTaggedUsersFromPhotos:(id)arg7;

@end
