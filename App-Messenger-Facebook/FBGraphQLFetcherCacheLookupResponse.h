//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface FBGraphQLFetcherCacheLookupResponse : NSObject
{
    BOOL _willDownloadFreshResponse;
    id _item;
    NSDate *_downloadDate;
}

@property(readonly, nonatomic) BOOL willDownloadFreshResponse; // @synthesize willDownloadFreshResponse=_willDownloadFreshResponse;
@property(readonly, nonatomic) NSDate *downloadDate; // @synthesize downloadDate=_downloadDate;
@property(readonly, nonatomic) id item; // @synthesize item=_item;
- (void).cxx_destruct;
- (id)initWithItem:(id)arg1 downloadDate:(id)arg2 willDownloadFreshResponse:(BOOL)arg3;

@end
