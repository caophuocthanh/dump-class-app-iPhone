//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBNuxStepChainController;

@protocol FBNuxStepChainControllerDelegate <NSObject>
- (void)stepChainControllerDidEnd:(FBNuxStepChainController *)arg1;

@optional
- (void)stepChainControllerDidCancel:(FBNuxStepChainController *)arg1 onStep:(id <FBNuxStep>)arg2;
- (void)stepChainController:(FBNuxStepChainController *)arg1 didTransitionToStep:(id <FBNuxStep>)arg2;
@end

