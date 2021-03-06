//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "FBWebRTCCallLogViewControllerDelegate.h"
#import "FBWebRTCMissedCallCounterDelegate.h"
#import "FBWebRTCPersonPickerViewControllerDelegate.h"

@class FBWebRTCCallButton, FBWebRTCCallController, FBWebRTCCallLogViewController, FBWebRTCMissedCallCounter, FBWebRTCPersonPickerViewController, NSString, UIBarButtonItem, UIViewController;

@interface FBWebRTCPickAndCallContactController : NSObject <FBWebRTCPersonPickerViewControllerDelegate, FBWebRTCMissedCallCounterDelegate, FBWebRTCCallLogViewControllerDelegate, FBClassProvidable>
{
    id <FBWebRTCPickAndCallContactControllerDelegate> _delegate;
    NSString *_callTriggerBase;
    UIBarButtonItem *_callButtonItem;
    UIViewController *_parentViewController;
    FBWebRTCCallController *_callController;
    id <FBProvider> _personPickerProvider;
    FBWebRTCPersonPickerViewController *_personPicker;
    id <FBProvider> _callLogControllerProvider;
    FBWebRTCCallLogViewController *_callLogController;
    FBWebRTCMissedCallCounter *_callCounter;
    FBWebRTCCallButton *_callButton;
}

@property(retain, nonatomic) FBWebRTCCallButton *callButton; // @synthesize callButton=_callButton;
@property(retain, nonatomic) FBWebRTCMissedCallCounter *callCounter; // @synthesize callCounter=_callCounter;
@property(retain, nonatomic) FBWebRTCCallLogViewController *callLogController; // @synthesize callLogController=_callLogController;
@property(retain, nonatomic) id <FBProvider> callLogControllerProvider; // @synthesize callLogControllerProvider=_callLogControllerProvider;
@property(retain, nonatomic) FBWebRTCPersonPickerViewController *personPicker; // @synthesize personPicker=_personPicker;
@property(retain, nonatomic) id <FBProvider> personPickerProvider; // @synthesize personPickerProvider=_personPickerProvider;
@property(retain, nonatomic) FBWebRTCCallController *callController; // @synthesize callController=_callController;
@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(readonly, nonatomic) UIBarButtonItem *callButtonItem; // @synthesize callButtonItem=_callButtonItem;
@property(copy, nonatomic) NSString *callTriggerBase; // @synthesize callTriggerBase=_callTriggerBase;
@property(nonatomic) __weak id <FBWebRTCPickAndCallContactControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)analyticsModule;
- (BOOL)callLogControllerIsVideoCallingAvailable:(id)arg1;
- (BOOL)callLogControllerIsAudioCallingAvailable:(id)arg1;
- (void)callLogControllerDidClose:(id)arg1 animated:(BOOL)arg2;
- (void)callLogController:(id)arg1 didCallContact:(id)arg2 isVideoCall:(BOOL)arg3 source:(unsigned int)arg4;
- (void)missedCallCounter:(id)arg1 didUpdateMissedCallCount:(int)arg2;
- (BOOL)choosePersonViewControllerShouldSearchServer:(id)arg1;
- (BOOL)choosePersonViewControllerIsVideoCallingAvailable:(id)arg1;
- (BOOL)choosePersonViewControllerIsAudioCallingAvailable:(id)arg1;
- (void)choosePersonViewControllerDidCancel:(id)arg1 animated:(BOOL)arg2;
- (void)choosePersonViewController:(id)arg1 didCallContact:(id)arg2 isVideoCall:(BOOL)arg3 source:(unsigned int)arg4;
- (id)_presentedViewControllerWithParent:(id)arg1;
- (void)_dismissPresentedController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleVoipCall;
- (void)dismissAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentWithParentViewController:(id)arg1;
@property(readonly, nonatomic) BOOL isCallingEnabled;
- (void)dealloc;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithCallController:(id)arg1 personPickerProvider:(id)arg2 callLogControllerProvider:(id)arg3 experimentManager:(id)arg4 callLog:(id)arg5 userSettings:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

