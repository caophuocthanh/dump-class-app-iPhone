//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFindUsersView, IGRequestError, IGUser, NSArray, NSString, UIScrollView;

@protocol IGFindUsersViewDelegate <NSObject>
- (void)findUsersView:(IGFindUsersView *)arg1 didFailWithError:(IGRequestError *)arg2;
- (void)findUsersView:(IGFindUsersView *)arg1 didLoadUsers:(NSArray *)arg2;

@optional
- (void)findUsersView:(IGFindUsersView *)arg1 scrollViewDidEndDragging:(UIScrollView *)arg2;
- (void)findUsersView:(IGFindUsersView *)arg1 scrollViewDidEndScrolling:(UIScrollView *)arg2;
- (void)findUsersView:(IGFindUsersView *)arg1 scrollViewWillEndDragging:(UIScrollView *)arg2 withVelocity:(struct CGPoint)arg3 targetContentOffset:(inout struct CGPoint *)arg4;
- (void)findUsersView:(IGFindUsersView *)arg1 scrollViewDidScroll:(UIScrollView *)arg2;
- (void)findUsersView:(IGFindUsersView *)arg1 willDisplayOnUser:(IGUser *)arg2 atIndex:(unsigned int)arg3;
- (void)findUsersView:(IGFindUsersView *)arg1 didTapOnItemWithMediaID:(NSString *)arg2 atIndex:(unsigned int)arg3;
- (void)findUsersView:(IGFindUsersView *)arg1 didTapOnUser:(IGUser *)arg2 atIndex:(unsigned int)arg3;
- (void)findUsersView:(IGFindUsersView *)arg1 didFollowAllUsers:(NSArray *)arg2;
- (void)findUsersView:(IGFindUsersView *)arg1 didUnFollowUser:(IGUser *)arg2 atIndex:(unsigned int)arg3;
- (void)findUsersView:(IGFindUsersView *)arg1 didFollowUser:(IGUser *)arg2 atIndex:(unsigned int)arg3;
@end
