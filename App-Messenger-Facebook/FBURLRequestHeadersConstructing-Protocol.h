//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSError, NSString;

@protocol FBURLRequestHeadersConstructing
@property(retain, nonatomic) NSError *error;
@property(readonly, copy, nonatomic) NSString *scheme;
@property(readonly, copy, nonatomic) NSString *host;
@property(readonly, nonatomic) id <FBURLRequestDefining> request;
- (void)setValue:(NSString *)arg1 forHttpHeaderField:(NSString *)arg2;
@end

