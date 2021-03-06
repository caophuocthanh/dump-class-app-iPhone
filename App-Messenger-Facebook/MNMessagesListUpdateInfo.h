//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@interface MNMessagesListUpdateInfo : FBValueObject <NSCopying>
{
    BOOL _initialUpdate;
    BOOL _containsTooManyUpdates;
    unsigned int _detailsExpandedIndex;
    unsigned int _detailsCollapsedIndex;
    int _insertedLastRowType;
    unsigned int _composingUpdate;
    unsigned int _threadContextUpdate;
}

@property(readonly, nonatomic) unsigned int threadContextUpdate; // @synthesize threadContextUpdate=_threadContextUpdate;
@property(readonly, nonatomic) unsigned int composingUpdate; // @synthesize composingUpdate=_composingUpdate;
@property(readonly, nonatomic) int insertedLastRowType; // @synthesize insertedLastRowType=_insertedLastRowType;
@property(readonly, nonatomic) unsigned int detailsCollapsedIndex; // @synthesize detailsCollapsedIndex=_detailsCollapsedIndex;
@property(readonly, nonatomic) unsigned int detailsExpandedIndex; // @synthesize detailsExpandedIndex=_detailsExpandedIndex;
@property(readonly, nonatomic) BOOL containsTooManyUpdates; // @synthesize containsTooManyUpdates=_containsTooManyUpdates;
@property(readonly, nonatomic) BOOL initialUpdate; // @synthesize initialUpdate=_initialUpdate;
- (id)initWithInitialUpdate:(BOOL)arg1 containsTooManyUpdates:(BOOL)arg2 detailsExpandedIndex:(unsigned int)arg3 detailsCollapsedIndex:(unsigned int)arg4 insertedLastRowType:(int)arg5 composingUpdate:(unsigned int)arg6 threadContextUpdate:(unsigned int)arg7;

@end

