//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IOSObjectArray, NSString;

@interface ComGoogleCumulusApiTypeTypeId : NSObject
{
    NSString *fullType_;
    IOSObjectArray *subTypes_;
}

- (void)dealloc;
- (void)parseIfNeeded;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)getSubTypes;
- (id)getFullType;
- (id)initWithNSString:(id)arg1;

@end

