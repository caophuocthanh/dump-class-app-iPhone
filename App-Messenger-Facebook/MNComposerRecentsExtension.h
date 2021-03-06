//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MNAbstractComposerTrayExtension.h"

#import "FBClassProvidable.h"
#import "MNMediaCollectionViewControllerDelegate.h"
#import "MNRecentsNoResultsViewDelegate.h"

@class FBMPhotoViewImageDownloadController, FBUserSession, MNComposerIconColourExperimentContext, MNMediaCollectionViewController, MNPlatformAppActionFactory, MNPlatformAppActionHandler, MNRecentsNoResultsView, NSString;

@interface MNComposerRecentsExtension : MNAbstractComposerTrayExtension <MNMediaCollectionViewControllerDelegate, MNRecentsNoResultsViewDelegate, FBClassProvidable>
{
    MNMediaCollectionViewController *_mediaCollectionViewController;
    id <FBProvider> _recentContentFetcherProvider;
    FBMPhotoViewImageDownloadController *_photoDownloadController;
    id <FBProvider> _iconControllerProvider;
    MNRecentsNoResultsView *_nullStateView;
    MNPlatformAppActionFactory *_platformAppActionFactory;
    MNPlatformAppActionHandler *_platformAppActionHandler;
    FBUserSession *_session;
    MNComposerIconColourExperimentContext *_iconColorExperimentContext;
}

- (void).cxx_destruct;
- (id)_composerIcon;
- (void)_initComposerIconExperimentContextIfNecessary;
- (void)recentsNoResultsViewDidTapGetApps:(id)arg1;
- (void)_initRecentTrayViewControllerIfNeeded;
- (void)_initNullStateViewIfNeeded;
- (void)mediaCollectionViewControllerDidDeselectContent:(id)arg1;
- (void)mediaCollectionViewController:(id)arg1 didSelectPlatformApplication:(id)arg2;
- (void)mediaCollectionViewControllerDidChangePreferredSize:(id)arg1;
- (void)mediaCollectionViewController:(id)arg1 didSelectContent:(id)arg2 atIndex:(unsigned int)arg3;
- (id)viewControllerForPresentation;
- (BOOL)shouldPresent:(BOOL)arg1 source:(int)arg2;
- (void)didSelect:(BOOL)arg1 source:(int)arg2;
- (id)extensionIdentifier;
- (int)category;
- (id)tabBarItem;
- (void)dealloc;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <MNComposerRecentsExtensionDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

