//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFSupplyShopPreviewController.h"

@class AFEffectContentPackThumnailGenerator;

@interface AFEffectContentPackSupplyShopPreviewController : AFSupplyShopPreviewController
{
    AFEffectContentPackThumnailGenerator *_thumbnailGenerator;
}

@property(retain, nonatomic) AFEffectContentPackThumnailGenerator *thumbnailGenerator; // @synthesize thumbnailGenerator=_thumbnailGenerator;
- (void).cxx_destruct;
- (void)reloadData;
- (void)dataSource:(id)arg1 willVendCollectionViewCell:(id)arg2 atIndexPath:(id)arg3;
- (id)initWithContentPack:(id)arg1;

@end

