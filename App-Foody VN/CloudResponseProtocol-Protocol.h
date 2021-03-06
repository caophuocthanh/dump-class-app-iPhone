//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSError, NSString;

@protocol CloudResponseProtocol <NSObject>
- (void)setResponseErrorString:(NSString *)arg1;
- (void)onParsingError:(NSError *)arg1;
- (void)onAttribute:(NSString *)arg1 name:(NSString *)arg2 value:(NSString *)arg3;
- (void)onEndElement:(NSString *)arg1 name:(NSString *)arg2 text:(NSString *)arg3;
- (void)onStartElement:(NSString *)arg1 name:(NSString *)arg2;

@optional
- (void)setResponsedErrorCode:(int)arg1 string:(NSString *)arg2;
- (void)foundCDATA:(NSData *)arg1 onPath:(NSString *)arg2;
@end

