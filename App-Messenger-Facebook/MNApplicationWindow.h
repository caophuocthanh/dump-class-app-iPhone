//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWindow.h"

#import "FBKeyCommandResponder.h"

@class FBKeyCommandHandler, NSString;

@interface MNApplicationWindow : UIWindow <FBKeyCommandResponder>
{
    FBKeyCommandHandler *_keyCommandHandler;
}

- (void).cxx_destruct;
- (id)keyCommands;
- (void)handleKeyCommandAction:(id)arg1;
- (void)motionEnded:(int)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 keyCommandHandler:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

