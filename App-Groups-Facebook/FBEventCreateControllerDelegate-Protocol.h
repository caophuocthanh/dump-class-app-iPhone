//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIViewController;

@protocol FBEventCreateControllerDelegate <NSObject>
- (void)controller:(UIViewController *)arg1 didCreateTraditionalEventWithID:(NSString *)arg2 withMetrics:(id <FBEventCreationControllerMetrics>)arg3;
- (void)controllerDidCancelEventCreation:(UIViewController *)arg1 withMetrics:(id <FBEventCreationControllerMetrics>)arg2;
@end

