//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSArray, NSString;

@interface FBMAvailableStickerStorePacksData : FBValueObject <NSCopying>
{
    NSString *_firstLetter;
    NSArray *_stickerPacksFromFirstLetter;
}

@property(readonly, copy, nonatomic) NSArray *stickerPacksFromFirstLetter; // @synthesize stickerPacksFromFirstLetter=_stickerPacksFromFirstLetter;
@property(readonly, copy, nonatomic) NSString *firstLetter; // @synthesize firstLetter=_firstLetter;
- (void).cxx_destruct;
- (id)initWithFirstLetter:(id)arg1 stickerPacksFromFirstLetter:(id)arg2;

@end
