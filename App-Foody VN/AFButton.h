//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "AFButtonProtocol.h"

@class NSString;

@interface AFButton : UIControl <AFButtonProtocol>
{
}

- (void)adjustForPressedState:(BOOL)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) BOOL shouldHighlight;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

