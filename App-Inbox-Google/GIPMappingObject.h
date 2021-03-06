//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface GIPMappingObject : NSObject
{
    BOOL isInStoreVersion_;
    BOOL isDefaultMapping_;
    NSString *sentinelScheme_;
    NSString *versionDescription_;
    NSMutableDictionary *schemeMapping_;
}

@property(retain, nonatomic) NSMutableDictionary *schemeMapping; // @synthesize schemeMapping=schemeMapping_;
@property(copy, nonatomic) NSString *versionDescription; // @synthesize versionDescription=versionDescription_;
@property(copy, nonatomic) NSString *sentinelScheme; // @synthesize sentinelScheme=sentinelScheme_;
@property(nonatomic) BOOL isDefaultMapping; // @synthesize isDefaultMapping=isDefaultMapping_;
@property(nonatomic) BOOL isInStoreVersion; // @synthesize isInStoreVersion=isInStoreVersion_;
- (void).cxx_destruct;

@end

