//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MNComposerPreviewController, MNTextAndAttachmentForwardContent, NSString, UIViewController;

@protocol MNComposerPreviewViewControllerDelegate <NSObject>
- (void)composerPreviewViewControllerNeedsResize:(MNComposerPreviewController *)arg1;
- (void)composerPreviewViewController:(MNComposerPreviewController *)arg1 didUpdateVisibilityWithViewController:(UIViewController *)arg2;
- (void)composerPreviewViewController:(MNComposerPreviewController *)arg1 didSelectContent:(MNTextAndAttachmentForwardContent *)arg2 atIndex:(unsigned int)arg3;
- (BOOL)composerPreviewViewController:(MNComposerPreviewController *)arg1 shouldShowPreviewForText:(NSString *)arg2;
@end
