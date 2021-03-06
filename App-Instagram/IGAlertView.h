//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIAlertView.h"

#import "UIAlertViewDelegate.h"

@class NSString;

@interface IGAlertView : UIAlertView <UIAlertViewDelegate>
{
    NSString *_cancelButtonTitle;
    NSString *_otherButtonTitle;
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _otherBlock;
}

+ (void)showWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 cancelBlock:(CDUnknownBlockType)arg5 otherBlock:(CDUnknownBlockType)arg6;
@property(copy, nonatomic) CDUnknownBlockType otherBlock; // @synthesize otherBlock=_otherBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) NSString *otherButtonTitle; // @synthesize otherButtonTitle=_otherButtonTitle;
@property(copy, nonatomic) NSString *cancelButtonTitle; // @synthesize cancelButtonTitle=_cancelButtonTitle;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 willDismissWithButtonIndex:(int)arg2;
- (id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 cancelBlock:(CDUnknownBlockType)arg5 otherBlock:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

