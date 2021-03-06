//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MNMessageLocationAttachmentDetailViewDelegate.h"
#import "UIActionSheetDelegate.h"

@class MNMessageLocationAttachmentDetailView, MNMessageLocationAttachmentViewModel, NSString;

@interface MNMessageLocationAttachmentDetailViewController : UIViewController <MNMessageLocationAttachmentDetailViewDelegate, UIActionSheetDelegate>
{
    MNMessageLocationAttachmentDetailView *_detailView;
    id <MNModalPresentation> _navigationCoordinator;
    MNMessageLocationAttachmentViewModel *_messageLocationAttachment;
}

- (void).cxx_destruct;
- (void)_copyToPasteboard;
- (void)_openInGoogleMaps;
- (void)_openInAppleMaps;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)locationAttachmentDetailView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)initWithNavigationCoordinator:(id)arg1 messageLocationAttachment:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

