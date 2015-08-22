//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString, NSURL;

@interface FBComposerPublishedMention : FBValueObject <NSCopying, NSCoding>
{
    NSString *_graphQLIDOfMentionedEntity;
    NSString *_graphQLTypeOfMentionedEntity;
    NSString *_nameOfMentionedEntity;
    NSURL *_urlForViewingMentionedEntity;
    NSString *_friendshipStatusOfMentionedEntity;
    NSString *_mentionedText;
    struct _NSRange _rangeOfMentionedTextInAllText;
}

@property(readonly, nonatomic) struct _NSRange rangeOfMentionedTextInAllText; // @synthesize rangeOfMentionedTextInAllText=_rangeOfMentionedTextInAllText;
@property(readonly, copy, nonatomic) NSString *mentionedText; // @synthesize mentionedText=_mentionedText;
@property(readonly, copy, nonatomic) NSString *friendshipStatusOfMentionedEntity; // @synthesize friendshipStatusOfMentionedEntity=_friendshipStatusOfMentionedEntity;
@property(readonly, copy, nonatomic) NSURL *urlForViewingMentionedEntity; // @synthesize urlForViewingMentionedEntity=_urlForViewingMentionedEntity;
@property(readonly, copy, nonatomic) NSString *nameOfMentionedEntity; // @synthesize nameOfMentionedEntity=_nameOfMentionedEntity;
@property(readonly, copy, nonatomic) NSString *graphQLTypeOfMentionedEntity; // @synthesize graphQLTypeOfMentionedEntity=_graphQLTypeOfMentionedEntity;
@property(readonly, copy, nonatomic) NSString *graphQLIDOfMentionedEntity; // @synthesize graphQLIDOfMentionedEntity=_graphQLIDOfMentionedEntity;
- (void).cxx_destruct;
- (id)initWithGraphQLIDOfMentionedEntity:(id)arg1 graphQLTypeOfMentionedEntity:(id)arg2 nameOfMentionedEntity:(id)arg3 urlForViewingMentionedEntity:(id)arg4 friendshipStatusOfMentionedEntity:(id)arg5 mentionedText:(id)arg6 rangeOfMentionedTextInAllText:(struct _NSRange)arg7;

@end
