//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "UISearchBarDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CBLSendView;

@protocol CBLSendViewDelegate <UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate, NSObject>
- (void)sendView:(CBLSendView *)arg1 didTapCancelButton:(id)arg2;
- (void)sendView:(CBLSendView *)arg1 isEditing:(BOOL)arg2;
@end

