//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CloudResponse.h"

@class NSString;

@interface EcardGuideLineResponse : CloudResponse
{
    NSString *_guideLine;
}

@property(copy, nonatomic) NSString *guideLine; // @synthesize guideLine=_guideLine;
- (void).cxx_destruct;
- (void)foundCDATA:(id)arg1 onPath:(id)arg2;
- (id)getGuideLine;

@end

