//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface CRTest : NSObject
{
    BOOL _testing;
    NSMutableArray *_requests;
}

+ (id)requests;
+ (id)findRequest:(id)arg1;
+ (void)sendRequest:(id)arg1;
+ (void)tearDown;
+ (void)setUp;
+ (BOOL)testing;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *requests; // @synthesize requests=_requests;
@property(nonatomic) BOOL testing; // @synthesize testing=_testing;
- (void).cxx_destruct;

@end
