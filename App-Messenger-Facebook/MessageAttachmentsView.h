//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FBClassProvidable.h"
#import "FBMConfigurable.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, UITableView;

@interface MessageAttachmentsView : UIView <UITableViewDelegate, UITableViewDataSource, FBClassProvidable, FBMConfigurable>
{
    id <MessageAttachmentsViewDelegate> _delegate;
    NSArray *_attachments;
    UITableView *_tableView;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
@property(nonatomic) id <MessageAttachmentsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)delete:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)canResignFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (void)handleLongPress:(id)arg1;
- (void)layoutSubviews;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)configureWithAttachments:(id)arg1;
- (BOOL)isConfigured;
- (id)initWithProviderMapData:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

