//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSString, UITextView;

@interface GIPFeedbackLogViewerViewController : UIViewController
{
    UITextView *logText_;
    NSString *logContents_;
}

@property(copy, nonatomic) NSString *logContents; // @synthesize logContents=logContents_;
@property(retain, nonatomic) UITextView *logText; // @synthesize logText=logText_;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)dealloc;
- (void)viewDidLoad;

@end

