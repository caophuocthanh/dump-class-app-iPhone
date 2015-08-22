//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AAKAnalyticsProduct : NSObject
{
    NSString *_productName;
    NSString *_server;
    NSString *_subproduct;
    NSString *_version;
}

@property(readonly, copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, copy, nonatomic) NSString *subproduct; // @synthesize subproduct=_subproduct;
@property(readonly, copy, nonatomic) NSString *server; // @synthesize server=_server;
@property(readonly, copy, nonatomic) NSString *productName; // @synthesize productName=_productName;
- (void).cxx_destruct;
- (id)initWithProductName:(id)arg1 server:(id)arg2 subproduct:(id)arg3 version:(id)arg4;

@end
