//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, PSPDFSearchOperation;

@protocol PSPDFSearchOperationDelegate <NSObject>
- (void)didUpdateSearchOperation:(PSPDFSearchOperation *)arg1 forString:(NSString *)arg2 newSearchResults:(NSArray *)arg3 forPage:(unsigned int)arg4;

@optional
- (void)willStartSearchOperation:(PSPDFSearchOperation *)arg1 forString:(NSString *)arg2 isFullSearch:(BOOL)arg3;
@end
