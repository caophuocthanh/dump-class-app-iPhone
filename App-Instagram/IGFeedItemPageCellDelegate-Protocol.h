//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFeedItemPageCell, IGPostItem, NSURL;

@protocol IGFeedItemPageCellDelegate <NSObject>
- (void)feedItemPageCell:(IGFeedItemPageCell *)arg1 itemDidStartViewing:(IGPostItem *)arg2;
- (void)feedItemPageCellWillDisplayActionView:(IGFeedItemPageCell *)arg1;
- (void)feedItemPageCell:(IGFeedItemPageCell *)arg1 didScrollToPageIndex:(int)arg2;
- (void)feedItemPageCell:(IGFeedItemPageCell *)arg1 wantsOpenURL:(NSURL *)arg2 modal:(BOOL)arg3;
- (void)feedItemPageCellDidDoubleTapToLike:(IGFeedItemPageCell *)arg1;
@end

