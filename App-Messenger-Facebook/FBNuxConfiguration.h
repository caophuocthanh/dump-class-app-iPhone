//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface FBNuxConfiguration : NSObject <NSCoding>
{
    NSString *_name;
    NSString *_nuxID;
}

+ (id)configurationWithName:(id)arg1 nuxID:(id)arg2;
@property(copy, nonatomic) NSString *nuxID; // @synthesize nuxID=_nuxID;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

