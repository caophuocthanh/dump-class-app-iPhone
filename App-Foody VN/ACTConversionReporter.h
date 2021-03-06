//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ACTReporter.h"

@class NSString;

@interface ACTConversionReporter : ACTReporter
{
}

+ (BOOL)registerReferrer:(id)arg1;
+ (void)reportWithProductID:(id)arg1 value:(id)arg2 isRepeatable:(BOOL)arg3;
+ (void)reportWithConversionID:(id)arg1 label:(id)arg2 value:(id)arg3 isRepeatable:(BOOL)arg4;
@property(copy, nonatomic) NSString *value;
- (id)initWithProductID:(id)arg1 value:(id)arg2 isRepeatable:(BOOL)arg3;
- (id)initWithConversionID:(id)arg1 label:(id)arg2 value:(id)arg3 isRepeatable:(BOOL)arg4;

@end

