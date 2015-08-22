//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ChatDelegate.h"

@class AccountContext, Chat, MessageListener, NSCalendar, NSDate, NSMutableDictionary, NSOrderedSet;

@interface ChatController : NSObject <ChatDelegate>
{
    id <ChatControllerDelegate> _delegate;
    NSOrderedSet *_displayMessages;
    NSOrderedSet *_displaySections;
    Chat *_chat;
    NSCalendar *_calendar;
    AccountContext *_accountContext;
    MessageListener *_messageListener;
    NSMutableDictionary *_displayMessageViewConfigurations;
    NSMutableDictionary *_substitutedMessages;
    NSMutableDictionary *_lastMessages;
    NSDate *_messagesFetchStartDate;
}

@property(retain, nonatomic) NSDate *messagesFetchStartDate; // @synthesize messagesFetchStartDate=_messagesFetchStartDate;
@property(retain, nonatomic) NSMutableDictionary *lastMessages; // @synthesize lastMessages=_lastMessages;
@property(retain, nonatomic) NSMutableDictionary *substitutedMessages; // @synthesize substitutedMessages=_substitutedMessages;
@property(retain, nonatomic) NSMutableDictionary *displayMessageViewConfigurations; // @synthesize displayMessageViewConfigurations=_displayMessageViewConfigurations;
@property(retain, nonatomic) MessageListener *messageListener; // @synthesize messageListener=_messageListener;
@property(nonatomic) __weak AccountContext *accountContext; // @synthesize accountContext=_accountContext;
@property(retain, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(retain, nonatomic) Chat *chat; // @synthesize chat=_chat;
@property(copy, nonatomic) NSOrderedSet *displaySections; // @synthesize displaySections=_displaySections;
@property(copy, nonatomic) NSOrderedSet *displayMessages; // @synthesize displayMessages=_displayMessages;
@property(nonatomic) __weak id <ChatControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (int)numberOfHistoryStanzasToRequestForChat:(id)arg1;
- (void)chat:(id)arg1 wasDestroyedWithReason:(id)arg2;
- (void)chat:(id)arg1 willAddMessage:(id)arg2;
- (void)chat:(id)arg1 didReceivePresence:(id)arg2;
- (void)chat:(id)arg1 didReceiveMessage:(id)arg2;
- (void)chatWillLoadAncientHistory:(id)arg1;
- (void)chatWillFetchRecentHistory:(id)arg1;
- (BOOL)chatShouldLoadHistory:(id)arg1;
- (BOOL)chatShouldAddText:(id)arg1;
- (void)chatLoadedFullHistory:(id)arg1;
- (void)chatFinishedUploadingFile:(id)arg1;
- (void)chatFailedToUploadFile:(id)arg1;
- (void)chat:(id)arg1 fileUploadProgressChanged:(float)arg2;
- (void)chatFailedToRequestHistory:(id)arg1;
- (void)chatDidUpdateAutocomplete:(id)arg1;
- (void)chatDidClear:(id)arg1;
- (void)chat:(id)arg1 finishedLoadingRecentHistoryMessages:(id)arg2;
- (void)chatFinishedExecutingPreload:(id)arg1;
- (void)chat:(id)arg1 finishedLoadingAncientHistoryMessages:(id)arg2;
- (id)substitutionMatchesForMessage:(id)arg1;
- (BOOL)isValidSubstitutionMessage:(id)arg1;
- (BOOL)substituteMessage:(id)arg1 withMatch:(id)arg2 andReplacement:(id)arg3;
- (id)messagesToDisplay:(id)arg1;
- (id)displayCellConfigurationForMessage:(id)arg1;
- (id)displayMessagesForMessages:(id)arg1;
- (id)displaySectionsFromDates:(id)arg1;
- (id)displaySectionsForMessages:(id)arg1;
- (id)itemsRequiringReloadWithIncomingMessages:(id)arg1;
- (id)itemsRequiringDeletionWithIncomingMessages:(id)arg1 withNewDisplayMessages:(id)arg2;
- (id)itemsRequiringInsertionWithIncomingMessages:(id)arg1 withNewDisplayMessages:(id)arg2;
- (id)sectionsRequiringReloadWithIncomingMessages:(id)arg1;
- (id)sectionsRequiringDeletionWithIncomingMessages:(id)arg1 withNewDisplaySections:(id)arg2;
- (id)sectionsRequiringInsertionWithIncomingMessages:(id)arg1 withNewDisplaySections:(id)arg2;
- (void)loadHistoryDisplayDataWithMessages:(id)arg1;
- (void)fetchNextBatchOfAncientHistory;
- (id)displayCellConfigurationForChatDisplayMessage:(id)arg1;
- (id)indexPathForDisplayMessage:(id)arg1;
- (id)displayMessageForIndexPath:(id)arg1;
- (int)numberOfItemsInSection:(int)arg1;
- (int)numberOfSections;
- (id)initWithChat:(id)arg1 accountContext:(id)arg2;

@end
