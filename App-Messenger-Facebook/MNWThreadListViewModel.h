//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray;

@interface MNWThreadListViewModel : NSObject <NSCopying, NSCoding>
{
    unsigned int _subtype;
    NSArray *_list_threadRows;
}

+ (id)null;
+ (id)loggedOut;
+ (id)loading;
+ (id)listWithThreadRows:(id)arg1;
- (void).cxx_destruct;
- (void)matchLoading:(CDUnknownBlockType)arg1 loggedOut:(CDUnknownBlockType)arg2 null:(CDUnknownBlockType)arg3 list:(CDUnknownBlockType)arg4;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;

@end
