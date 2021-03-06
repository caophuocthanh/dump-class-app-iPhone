//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MessageParserMatchResult.h"

@class NSString;

@interface EmoticonMatch : NSObject <MessageParserMatchResult>
{
    NSString *_sourceString;
    NSString *_matchString;
    struct _NSRange _matchRange;
}

@property(nonatomic) struct _NSRange matchRange; // @synthesize matchRange=_matchRange;
@property(copy, nonatomic) NSString *matchString; // @synthesize matchString=_matchString;
@property(copy, nonatomic) NSString *sourceString; // @synthesize sourceString=_sourceString;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)isPartialMatch;
- (BOOL)isFullMatch;
- (id)initWithSourceString:(id)arg1 matchString:(id)arg2 matchRange:(struct _NSRange)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

