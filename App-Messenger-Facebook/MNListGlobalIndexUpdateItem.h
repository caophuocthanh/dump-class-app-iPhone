//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@interface MNListGlobalIndexUpdateItem : FBValueObject <NSCopying>
{
    int _updateAction;
    unsigned int _originalIndex;
    unsigned int _finalIndex;
}

+ (id)newUpdateItemWithOriginalIndex:(unsigned int)arg1 finalIndex:(unsigned int)arg2 shouldInline:(BOOL)arg3;
+ (id)newReloadItemWithOriginalIndex:(unsigned int)arg1 finalIndex:(unsigned int)arg2;
+ (id)newMoveItemWithOriginalIndex:(unsigned int)arg1 finalIndex:(unsigned int)arg2;
+ (id)newInsertItemWithFinalIndex:(unsigned int)arg1;
+ (id)newDeleteItemWithOriginalIndex:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int finalIndex; // @synthesize finalIndex=_finalIndex;
@property(readonly, nonatomic) unsigned int originalIndex; // @synthesize originalIndex=_originalIndex;
@property(readonly, nonatomic) int updateAction; // @synthesize updateAction=_updateAction;
- (id)initWithUpdateAction:(int)arg1 originalIndex:(unsigned int)arg2 finalIndex:(unsigned int)arg3;
- (id)description;

@end
