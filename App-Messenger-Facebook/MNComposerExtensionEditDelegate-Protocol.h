//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol MNComposerExtensionEditDelegate <NSObject>
- (void)composerExtensionDidDeleteCharacterBeforeCursor:(id <MNComposerExtension>)arg1;
- (void)composerExtension:(id <MNComposerExtension>)arg1 didInsertStringAtCurrentCursor:(NSString *)arg2;
- (void)composerExtensionDidEndEditing:(id <MNComposerExtension>)arg1;
- (BOOL)composerExtensionShouldEndEditing:(id <MNComposerExtension>)arg1;
- (void)composerExtensionDidBeginEditing:(id <MNComposerExtension>)arg1;
- (BOOL)composerExtensionShouldBeginEditing:(id <MNComposerExtension>)arg1;
@end
