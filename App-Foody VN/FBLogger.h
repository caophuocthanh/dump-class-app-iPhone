//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableString, NSString;

@interface FBLogger : NSObject
{
    BOOL _isActive;
    unsigned int _loggerSerialNumber;
    NSString *_loggingBehavior;
    NSMutableString *_internalContents;
}

+ (void)registerStringToReplace:(id)arg1 replaceWith:(id)arg2;
+ (void)registerCurrentTime:(id)arg1 withTag:(id)arg2;
+ (void)singleShotLogEntry:(id)arg1 timestampTag:(id)arg2 formatString:(id)arg3;
+ (void)singleShotLogEntry:(id)arg1 formatString:(id)arg2;
+ (void)singleShotLogEntry:(id)arg1 logEntry:(id)arg2;
+ (unsigned int)newSerialNumber;
@property(readonly, retain, nonatomic) NSMutableString *internalContents; // @synthesize internalContents=_internalContents;
@property(readonly, nonatomic) BOOL isActive; // @synthesize isActive=_isActive;
@property(readonly, copy, nonatomic) NSString *loggingBehavior; // @synthesize loggingBehavior=_loggingBehavior;
@property(readonly, nonatomic) unsigned int loggerSerialNumber; // @synthesize loggerSerialNumber=_loggerSerialNumber;
- (void)emitToNSLog;
- (void)appendKey:(id)arg1 value:(id)arg2;
- (void)appendFormat:(id)arg1;
- (void)appendString:(id)arg1;
@property(copy, nonatomic) NSString *contents;
- (void)dealloc;
- (id)initWithLoggingBehavior:(id)arg1;

@end

