//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGUser, UICollectionView;

@interface IGDirectThreadCellFactory : NSObject
{
    UICollectionView *_collectionView;
    IGUser *_cellViewer;
}

+ (BOOL)shouldHideProfilePictureForIndexPath:(id)arg1 withContents:(id)arg2 cellViewer:(id)arg3;
@property(retain, nonatomic) IGUser *cellViewer; // @synthesize cellViewer=_cellViewer;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)registerClassesForCollectionView:(id)arg1;
- (id)cellForContents:(id)arg1 clientContextToImageData:(id)arg2 indexPath:(id)arg3 cellDelegate:(id)arg4 expanded:(BOOL)arg5;
- (id)initWithCollectionView:(id)arg1 cellViewer:(id)arg2;

@end

