//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSString;

@interface FBStickerResourceMetadata : FBValueObject <NSCopying>
{
    NSString *_fbId;
    unsigned int _resourceType;
}

@property(readonly, nonatomic) unsigned int resourceType; // @synthesize resourceType=_resourceType;
@property(readonly, copy, nonatomic) NSString *fbId; // @synthesize fbId=_fbId;
- (void).cxx_destruct;
- (id)initWithFbId:(id)arg1 resourceType:(unsigned int)arg2;

@end
