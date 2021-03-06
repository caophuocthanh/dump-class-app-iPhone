//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FBMStickerViewDelegate.h"

@class FBMSticker, FBMStickerView, NSString, UIButton;

@interface FBStickerViewContainerForComponent : UIView <FBMStickerViewDelegate>
{
    FBMStickerView *_stickerView;
    FBMSticker *_sticker;
    id <FBStickerAttachmentListener> _stickerAttachmentListener;
    UIButton *_removeStickerButton;
    BOOL _canRemoveSticker;
}

- (void).cxx_destruct;
- (BOOL)stickerViewShouldAnimate:(id)arg1;
- (void)startAnimation;
- (void)_didTapRemoveStickerButton;
- (void)configureStickerViewWithSticker:(id)arg1 userSession:(id)arg2 stickerAttachmentListener:(id)arg3 canRemoveSticker:(BOOL)arg4;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

