//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBMagicStoryEditView;

@protocol FBMagicStoryEditViewDelegate <NSObject>
- (unsigned int)magicStoryEditViewCurrentAssetIndex:(FBMagicStoryEditView *)arg1;
- (void)magicStoryEditView:(FBMagicStoryEditView *)arg1 willSetBurstToIndex:(unsigned int)arg2;
- (void)magicStoryEditViewCollectionUpdated;
- (void)magicStoryEditViewDidCancel;
- (void)magicStoryEditView:(FBMagicStoryEditView *)arg1 didScrollToItemAtIndex:(unsigned int)arg2;
@end

