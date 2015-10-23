//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIAlertViewDelegate.h"

@class NSString;

@interface CloudRequestDispatcher : NSObject <UIAlertViewDelegate>
{
}

+ (id)getInstance;
- (void)setupRequestHeaders:(id)arg1 additionalHeaders:(id)arg2;
- (void)checkResponseTimeout:(id)arg1;
- (id)getTargetURL:(id)arg1;
- (void)dispatchRequest:(id)arg1 response:(id)arg2;
- (void)dispatchSync:(id)arg1 response:(id)arg2;
- (id)getDataForRequest:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
