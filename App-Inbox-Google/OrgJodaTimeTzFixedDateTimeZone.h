//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OrgJodaTimeDateTimeZone.h"

@class NSString;

@interface OrgJodaTimeTzFixedDateTimeZone : OrgJodaTimeDateTimeZone
{
    NSString *iNameKey_;
    int iWallOffset_;
    int iStandardOffset_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)toTimeZone;
- (long long)previousTransitionWithLong:(long long)arg1;
- (long long)nextTransitionWithLong:(long long)arg1;
- (BOOL)isFixed;
- (int)getOffsetFromLocalWithLong:(long long)arg1;
- (int)getStandardOffsetWithLong:(long long)arg1;
- (int)getOffsetWithLong:(long long)arg1;
- (id)getNameKeyWithLong:(long long)arg1;
- (id)initWithNSString:(id)arg1 withNSString:(id)arg2 withInt:(int)arg3 withInt:(int)arg4;

@end

