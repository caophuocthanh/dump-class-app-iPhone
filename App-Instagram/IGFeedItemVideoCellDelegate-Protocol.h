//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGAnalyticsMetadata, IGFeedItemVideoCell, NSError;

@protocol IGFeedItemVideoCellDelegate <NSObject>
- (int)feedItemVideoCellPosition:(IGFeedItemVideoCell *)arg1;
- (IGAnalyticsMetadata *)feedItemVideoCellCurrentIGAnalyticsMetadata:(IGFeedItemVideoCell *)arg1;
- (void)feedItemVideoCellDidDoubleTapToLike:(IGFeedItemVideoCell *)arg1;
- (void)feedItemVideoCellDidRequestVideoPlayback:(IGFeedItemVideoCell *)arg1;
- (void)feedItemVideoCell:(IGFeedItemVideoCell *)arg1 didFailToPlayWithError:(NSError *)arg2;

@optional
- (void)feedItemVideoCellDidLongPress:(IGFeedItemVideoCell *)arg1;
- (void)feedItemVideoCellDidPlayToEnd:(IGFeedItemVideoCell *)arg1;
- (void)feedItemVideoCellDidLoadImage:(IGFeedItemVideoCell *)arg1;
@end

