//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MNAttachmentDefaultViewController.h"

#import "MNFBAlbumShareViewDelegate.h"

@class NSString;

@interface MNFBAlbumShareAttachmentViewController : MNAttachmentDefaultViewController <MNFBAlbumShareViewDelegate>
{
    id <FBIntentHandler> _intentHandler;
}

- (void).cxx_destruct;
- (void)albumShareView:(id)arg1 didSelectAlbumShare:(id)arg2;
- (void)didDisappearInContainerView:(id)arg1;
- (void)awakeWithView:(id)arg1;
- (id)initWithIntentHandler:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

