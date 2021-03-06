//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "AFDataSourceView.h"

@class NSString, UIImageView, UIView;

@interface AFContentPackSupplyShopPreviewSelectionCell : UICollectionViewCell <AFDataSourceView>
{
    id _dataObject;
    UIImageView *_backgroundImageView;
    UIImageView *_previewView;
    UIView *_selectedBar;
}

@property(retain, nonatomic) UIView *selectedBar; // @synthesize selectedBar=_selectedBar;
@property(retain, nonatomic) UIImageView *previewView; // @synthesize previewView=_previewView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) id dataObject; // @synthesize dataObject=_dataObject;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)configurePreviewImageForContentPackItem:(id)arg1;
- (void)configurePreviewImageForContentPack:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

