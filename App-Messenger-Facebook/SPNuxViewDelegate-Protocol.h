//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPNuxView;

@protocol SPNuxViewDelegate <NSObject>

@optional
- (void)didDismiss:(SPNuxView *)arg1;
- (void)didTapToDismiss:(SPNuxView *)arg1;
- (void)willFadeOut:(SPNuxView *)arg1;
@end
