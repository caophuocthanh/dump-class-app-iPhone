//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGExploreCell;

@protocol IGExploreCellDelegate <NSObject>

@optional
- (void)exploreCell:(IGExploreCell *)arg1 didTapMediaAtIndex:(unsigned int)arg2;
- (void)exploreCellDidTapFollowing:(IGExploreCell *)arg1;
- (void)exploreCellDidTapDismiss:(IGExploreCell *)arg1;
- (void)exploreCellDidTapFollow:(IGExploreCell *)arg1;
@end

