//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, ResReviewTableCell;

@protocol ResReviewTableCellDelegate <NSObject>

@optional
- (void)ResReviewTableCell:(ResReviewTableCell *)arg1 clickShowAllPhoto:(NSIndexPath *)arg2;
- (void)ResReviewTableCell:(ResReviewTableCell *)arg1 clickShowAllCommentAtIndexPath:(NSIndexPath *)arg2;
- (void)ResReviewTableCell:(ResReviewTableCell *)arg1 clickShowAllListUserLikeAtIndexPath:(NSIndexPath *)arg2;
@end
