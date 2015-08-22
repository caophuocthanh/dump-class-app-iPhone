//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface FBDarwinObserver : FBValueObject <NSCopying>
{
    NSString *_identifier;
    NSObject<OS_dispatch_queue> *_queue;
    int _options;
    CDUnknownBlockType _callback;
}

@property(readonly, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(readonly, nonatomic) int options; // @synthesize options=_options;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1 queue:(id)arg2 options:(int)arg3 callback:(CDUnknownBlockType)arg4;

@end
