//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTimeZone.h"

#import "TMLTimeZone.h"

@class NSString;

@interface NSTimeZone (TMLTimeZoneImpl) <TMLTimeZone>
+ (id)timeZoneWithTMLTimeZone:(id)arg1 forDateInMillis:(long long)arg2;
- (id)getId;
- (int)getOffsetWithLong:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@end

