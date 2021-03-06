//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBMSticker, FBMStickerPack, UISearchBar;

@protocol FBMStickerPresenterDelegate <NSObject>
- (void)stickerPresenter:(id <FBMStickerTrayPresenter>)arg1 didSelectStickerPackAtIndex:(int)arg2;
- (void)stickerPresenter:(id <FBMStickerTrayPresenter>)arg1 didSelectSticker:(FBMSticker *)arg2;

@optional
- (void)stickerPresenter:(id <FBMStickerTrayPresenter>)arg1 didEndSearching:(UISearchBar *)arg2;
- (void)stickerPresenter:(id <FBMStickerTrayPresenter>)arg1 didBeginSearching:(UISearchBar *)arg2 animationBlock:(void (^)(void))arg3;
- (void)stickerPresenter:(id <FBMStickerTrayPresenter>)arg1 didSelectOpenStickerPack:(FBMStickerPack *)arg2;
@end

