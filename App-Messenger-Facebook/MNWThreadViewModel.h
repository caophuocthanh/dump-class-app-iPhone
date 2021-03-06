//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class FBMStringWithRedactedDescription, FBMThreadKey, NSArray;

@interface MNWThreadViewModel : FBValueObject <NSCopying, NSCoding>
{
    BOOL _canReply;
    FBMThreadKey *_threadKey;
    FBMStringWithRedactedDescription *_threadName;
    NSArray *_messageRows;
}

@property(readonly, copy, nonatomic) NSArray *messageRows; // @synthesize messageRows=_messageRows;
@property(readonly, nonatomic) BOOL canReply; // @synthesize canReply=_canReply;
@property(readonly, copy, nonatomic) FBMStringWithRedactedDescription *threadName; // @synthesize threadName=_threadName;
@property(readonly, copy, nonatomic) FBMThreadKey *threadKey; // @synthesize threadKey=_threadKey;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithThreadKey:(id)arg1 threadName:(id)arg2 canReply:(BOOL)arg3 messageRows:(id)arg4;
- (id)initWithCoder:(id)arg1;

@end

