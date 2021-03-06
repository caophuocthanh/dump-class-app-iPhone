//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLCollectionViewController.h"

#import "CBLPinCloseupGalleryNavigationDelegate.h"

@class CBLProfileStatsNavigationItem, NSString;

@interface CBLStatsCollectionViewController : CBLCollectionViewController <CBLPinCloseupGalleryNavigationDelegate>
{
    CBLProfileStatsNavigationItem *_statsNavigationItem;
}

@property(retain, nonatomic) CBLProfileStatsNavigationItem *statsNavigationItem; // @synthesize statsNavigationItem=_statsNavigationItem;
- (void).cxx_destruct;
- (void)pinCloseupGalleryViewControllerDidPopCloseup:(id)arg1;
- (struct UIEdgeInsets)collectionViewLayout:(id)arg1 insetsForSection:(int)arg2;
- (id)navigationItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

