//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@protocol FBResponseHandling <NSObject>
@property(nonatomic) __weak id <FBResponseHandlerDelegate> delegate;
@property(readonly, nonatomic) id <FBRequest> request;
- (void)abort;
- (void)close;
- (void)handleData:(NSData *)arg1;
- (void)open;
@end

