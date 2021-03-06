//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HipChatBaseViewController.h"

#import "HipChatAppDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSDate, NSMutableArray, NSSortDescriptor, NSString, SharedChatItem, UIActivityIndicatorView, UIImageView, UILabel, UILongPressGestureRecognizer, UITableView, UIView, XMPPJID;

@interface ChatMenuTabViewController : HipChatBaseViewController <UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate, UIActionSheetDelegate, HipChatAppDelegate>
{
    NSSortDescriptor *dateSort;
    NSString *_lastRequestUUID;
    SharedChatItem *selectedItem;
    BOOL gotFetchResponse;
    BOOL allEntriesLoaded;
    BOOL requestInProgress;
    NSDate *oldestDate;
    NSDate *newestDate;
    NSMutableArray *_entries;
    UITableView *_tableView;
    UIView *_noEntriesView;
    UILabel *_noEntriesLabel;
    UIActivityIndicatorView *_loadingActivityIndicator;
    UIImageView *_noEntriesImageView;
    XMPPJID *_jid;
    UILongPressGestureRecognizer *_longPressGesture;
    NSDate *_pendingRequestDate;
    unsigned int _pendingRequestDateType;
}

@property(nonatomic) unsigned int pendingRequestDateType; // @synthesize pendingRequestDateType=_pendingRequestDateType;
@property(copy, nonatomic) NSDate *pendingRequestDate; // @synthesize pendingRequestDate=_pendingRequestDate;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGesture; // @synthesize longPressGesture=_longPressGesture;
@property(retain, nonatomic) XMPPJID *jid; // @synthesize jid=_jid;
@property(nonatomic) __weak UIImageView *noEntriesImageView; // @synthesize noEntriesImageView=_noEntriesImageView;
@property(nonatomic) __weak UIActivityIndicatorView *loadingActivityIndicator; // @synthesize loadingActivityIndicator=_loadingActivityIndicator;
@property(nonatomic) __weak UILabel *noEntriesLabel; // @synthesize noEntriesLabel=_noEntriesLabel;
@property(nonatomic) __weak UIView *noEntriesView; // @synthesize noEntriesView=_noEntriesView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *entries; // @synthesize entries=_entries;
- (void).cxx_destruct;
- (void)onSessionWentOnlineEvent:(id)arg1;
- (void)hipChatAppDisconnected;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didFetchEntries:(unsigned int)arg1;
- (void)didStartFetchEntriesRequest;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)applyStyleToTableViewCell:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)onTableLongPress:(id)arg1;
- (void)updateWithJid:(id)arg1;
- (void)makeEntriesRequestWithDate:(id)arg1 type:(unsigned int)arg2;
- (void)makeEntriesRequestWithDate:(id)arg1;
- (void)handleFetchResponse:(id)arg1 fetchType:(int)arg2;
- (void)handleEntryClick:(id)arg1;
- (id)noEntriesImage;
- (id)emptyText;
- (id)loadingText;
- (id)requestNamespace;
- (int)fetchCount;
- (id)generateItemFromXML:(id)arg1;
- (void)clearEntries;
- (void)setupLongPressGesture;
- (void)setupNoEntriesView;
- (void)setupTableView;
- (void)viewDidLoad;
- (void)initialize;
- (id)initWithCoder:(id)arg1;
- (id)initWithJid:(id)arg1 accountContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

