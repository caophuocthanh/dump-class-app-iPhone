//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder.h"

@class ComGoogleAppsBigtopServicesGmailBigTopGmailThread, NSString;

@protocol ComGoogleAppsBigtopServicesSearchBigTopSearchResultOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (NSString *)getMatchingMessageIdWithInt:(int)arg1;
- (id <ComGoogleProtobufProtocolStringList>)getMatchingMessageIdList;
- (int)getMatchingMessageIdCount;
- (NSString *)getSnippet;
- (BOOL)hasSnippet;
- (NSString *)getCumulusVersion;
- (BOOL)hasCumulusVersion;
- (ComGoogleAppsBigtopServicesGmailBigTopGmailThread *)getGmailThread;
- (BOOL)hasGmailThread;
@end

