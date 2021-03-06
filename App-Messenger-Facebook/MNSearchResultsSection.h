//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSArray;

@interface MNSearchResultsSection : FBValueObject <NSCopying>
{
    BOOL _hasPendingRequest;
    NSArray *_rows;
    int _originalSection;
}

@property(readonly, nonatomic) int originalSection; // @synthesize originalSection=_originalSection;
@property(readonly, copy, nonatomic) NSArray *rows; // @synthesize rows=_rows;
@property(readonly, nonatomic) BOOL hasPendingRequest; // @synthesize hasPendingRequest=_hasPendingRequest;
- (void).cxx_destruct;
- (id)initWithHasPendingRequest:(BOOL)arg1 rows:(id)arg2 originalSection:(int)arg3;

@end

